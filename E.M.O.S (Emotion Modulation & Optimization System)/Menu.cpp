#include "Menu.h"
#include <iostream>

// Menu constructor.
// There are no special values that need to be set.
Menu::Menu() {
}

// Displays the main menu options to the user.
// The menu only displays choices.
// main.cpp handles the user's input.
void Menu::showMainMenu() {
    std::cout << "1. Provide Stimulus\n";
    std::cout << "2. View Emotional State\n";
    std::cout << "3. Run Emotional Cycle\n";
    std::cout << "4. Run Diagnostics\n";
    std::cout << "5. View System Logs\n";
    std::cout << "6. Run Ascension Trial\n";
    std::cout << "7. Exit\n";
    std::cout << "Select an option: ";
}