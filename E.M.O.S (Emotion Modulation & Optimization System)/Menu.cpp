#include "Menu.h"
#include "ConsoleColors.h"
#include <iostream>

// Menu displays the choices; Main.cpp handles the user's selection.
Menu::Menu() {
}

// Displays the main menu options in the accent color,
// then displays the input prompt in yellow.
void Menu::showMainMenu() {
    std::cout << ConsoleColors::Accent;
    std::cout << "1. Provide Stimulus\n";
    std::cout << "2. View Emotional State\n";
    std::cout << "3. Run Emotional Cycle\n";
    std::cout << "4. Run Diagnostics\n";
    std::cout << "5. View System Logs\n";
    std::cout << "6. Run Ascension Trial\n";
    std::cout << "7. Reset Emotional Values\n";
    std::cout << "8. Exit\n";

    // Use yellow to make the prompt easy to spot.
    std::cout << ConsoleColors::Warning;
    std::cout << "Select an option: ";

    // Restore the normal color before the user types.
    std::cout << ConsoleColors::Normal;
}