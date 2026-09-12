#include "SystemCore.h"
#include <iostream>

SystemCore::SystemCore() {
    // Initialize emotional subsystem values
    stability = 50;
    empathy = 50;
    fear = 50;
    curiosity = 50;
}

void SystemCore::runDiagnostics() {
    std::cout << "[SystemCore] Diagnostics running...\n\n";
}

void SystemCore::provideStimulus() {
    // Simple emotional update for prototype
    empathy += 5;
    fear -= 3;
    stability += 2;

    std::cout << "Stimulus applied.\n\n";
}

void SystemCore::viewState() {
    std::cout << "=== Emotional State ===\n";
    std::cout << "Stability: " << stability << "\n";
    std::cout << "Empathy:   " << empathy << "\n";
    std::cout << "Fear:      " << fear << "\n";
    std::cout << "Curiosity: " << curiosity << "\n\n";
}

void SystemCore::runCycle() {
    // Simple emotional drift for prototype
    stability -= 1;
    curiosity += 2;
    fear += 1;

    std::cout << "Emotional cycle processed.\n\n";
}
