#include <iostream>
#include <string>
#include <stdexcept>
#include "SystemCore.h"
#include "Menu.h"
#include "ConsoleColors.h"

// main() starts the program.
// It shows the menu, reads the user's choice, and calls SystemCore.
int main() {
    // Display the E.M.O.S. title in the accent color.
    std::cout << ConsoleColors::Accent;
    std::cout << "============================================================\n";
    std::cout << "   E.M.O.S. - Emotion Modulation & Optimization System\n";
    std::cout << "============================================================\n";

    // Return to the normal color before displaying other program text.
    std::cout << ConsoleColors::Normal << "\n";

    // Create the system controller and the object that displays the menu.
    SystemCore core;
    Menu menu;

    // Keep showing the menu until the user chooses Exit.
    bool running = true;

    while (running) {
        // Display the available actions.
        menu.showMainMenu();

        // Read the full line so the program can validate all of the input.
        std::string input;

        try {
            // If input ends, stop the program instead of repeating an error.
            if (!std::getline(std::cin, input)) {
                running = false;
                break;
            }

            // Convert the text to a number.
            // pos records how many characters were converted.
            size_t pos;
            int choice = std::stoi(input, &pos);

            // Reject input such as "2abc" or "1 2".
            if (pos != input.length()) {
                throw std::invalid_argument("Invalid input");
            }

            // Send each valid menu choice to the matching SystemCore function.
            if (choice == 1) {
                core.processStimulus();
            }
            else if (choice == 2) {
                core.viewState();
            }
            else if (choice == 3) {
                core.runEmotionalCycle();
            }
            else if (choice == 4) {
                core.runDiagnostics();
            }
            else if (choice == 5) {
                core.viewLogs();
            }
            else if (choice == 6) {
                core.runAscensionTrial();
            }
            else if (choice == 7) {
                core.resetEmotions();
            }
            else if (choice == 8) {
                core.viewSessionSummary();
            }
            else if (choice == 9) {
                // Change running to false so the while loop ends.
                running = false;

                // Show the shutdown message in green.
                std::cout << ConsoleColors::Success;
                std::cout << "\nShutting down E.M.O.S...\n";
                std::cout << ConsoleColors::Normal;
            }
            else {
                // The input was a number, but not one of the menu choices.
                std::cout << ConsoleColors::Error;
                std::cout << "\nInvalid option. Please select a number between 1 and 9.\n";
                std::cout << ConsoleColors::Normal << "\n";
            }
        }
        catch (const std::exception&) {
            // Show an error if the input cannot be converted to one menu number.
            std::cout << ConsoleColors::Error;
            std::cout << "\nInvalid input. Please enter one menu number.\n";
            std::cout << ConsoleColors::Normal << "\n";
        }
    }

    return 0;
}