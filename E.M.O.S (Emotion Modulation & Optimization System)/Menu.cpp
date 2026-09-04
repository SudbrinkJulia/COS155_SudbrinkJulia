#include "Menu.h"
#include <iostream>

Menu::Menu() {
    
}

void Menu::showMainMenu() {
    std::cout << "1. Run Diagnostics\n";
    std::cout << "2. Exit\n";
    std::cout << "Select an option: ";
}
