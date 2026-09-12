#include "Menu.h"
#include <iostream>

Menu::Menu() {}

void Menu::showMainMenu() {
    std::cout << "1. Provide Stimulus\n";
    std::cout << "2. View Emotional State\n";
    std::cout << "3. Run Emotional Cycle\n";
    std::cout << "4. Run Diagnostics\n";
    std::cout << "5. Exit\n";
    std::cout << "Select an option: ";
}
