#include "SystemCore.h"
#include <iostream>

SystemCore::SystemCore() {
}

void SystemCore::runDiagnostics() {
    std::cout << "\n=== E.M.O.S. Diagnostics ===\n";
    std::cout << "All emotional subsystems are operational.\n";
    std::cout << "Ascension readiness evaluation available.\n\n";
}

void SystemCore::provideStimulus() {
    emotionEngine.provideStimulus();

    std::cout << "\nExternal stimulus received.\n";
    std::cout << "Emotional state adjusted.\n\n";
}

void SystemCore::viewState() {
    std::cout << "\n=== Emotional State Report ===\n";

    std::cout << "Stability: " << emotionEngine.getStability() << "\n";
    std::cout << "Empathy: " << emotionEngine.getEmpathy() << "\n";
    std::cout << "Fear: " << emotionEngine.getFear() << "\n";
    std::cout << "Curiosity: " << emotionEngine.getCuriosity() << "\n";

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
    emotionEngine.runCycle();

    std::cout << "\nEmotional cycle processed.\n";
    std::cout << "Subsystems updated.\n\n";
}

int SystemCore::calculateAscensionScore() {
    return emotionEngine.calculateAscensionScore();
}