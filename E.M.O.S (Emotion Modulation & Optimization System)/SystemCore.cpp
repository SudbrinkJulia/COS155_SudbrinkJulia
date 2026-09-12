#include "SystemCore.h"
#include <iostream>

SystemCore::SystemCore() {
    stability = 50;
    empathy = 50;
    fear = 50;
    curiosity = 50;
}

void SystemCore::runDiagnostics() {
    std::cout << "\n=== E.M.O.S. Diagnostics ===\n";
    std::cout << "All emotional subsystems are operational.\n";
    std::cout << "Ascension readiness evaluation available.\n\n";
}

void SystemCore::provideStimulus() {
    empathy += 5;
    stability += 2;
    fear -= 3;

    std::cout << "\nExternal stimulus received.\n";
    std::cout << "Emotional state adjusted.\n\n";
}

void SystemCore::viewState() {
    std::cout << "\n=== Emotional State Report ===\n";

    std::cout << "Stability: " << stability << "\n";
    std::cout << "Empathy: " << empathy << "\n";
    std::cout << "Fear: " << fear << "\n";
    std::cout << "Curiosity: " << curiosity << "\n";

    int ascensionScore = calculateAscensionScore();

    std::cout << "\nAscension Score: " << ascensionScore << "\n";

    if (ascensionScore >= 120) {
        std::cout << "Status: ASCENSION READY\n";
    }
    else if (ascensionScore >= 90) {
        std::cout << "Status: STABLE\n";
    }
    else {
        std::cout << "Status: UNSTABLE\n";
    }

    std::cout << "\n";
}

void SystemCore::runCycle() {
    stability -= 1;
    curiosity += 2;
    fear += 1;

    std::cout << "\nEmotional cycle processed.\n";
    std::cout << "Subsystems updated.\n\n";
}

int SystemCore::calculateAscensionScore() {
    return stability + empathy + curiosity - fear;
}