#include "SystemCore.h"
#include <iostream>

SystemCore::SystemCore() {
    logs.push_back("E.M.O.S. system initialized.");
}

void SystemCore::runDiagnostics() {
    int ascensionScore = calculateAscensionScore();

    std::cout << "\n=== E.M.O.S. Diagnostics ===\n";

    std::cout << "\nSystem Status:\n";
    std::cout << "Emotion Engine: Operational\n";
    std::cout << "Emotional State Monitoring: Operational\n";
    std::cout << "Logging System: Operational\n";

    std::cout << "\nCurrent Emotional State:\n";
    std::cout << "Stability: "
        << emotionEngine.getStability() << "\n";
    std::cout << "Empathy: "
        << emotionEngine.getEmpathy() << "\n";
    std::cout << "Fear: "
        << emotionEngine.getFear() << "\n";
    std::cout << "Curiosity: "
        << emotionEngine.getCuriosity() << "\n";

    std::cout << "\nCurrent Ascension Score: "
        << ascensionScore << "\n";

    std::cout << "Ascension Status: ";

    if (ascensionScore >= 120) {
        std::cout << "ASCENSION READY\n";
    }
    else if (ascensionScore >= 90) {
        std::cout << "STABLE\n";
    }
    else {
        std::cout << "UNSTABLE\n";
    }

    std::cout << "\nDiagnostics completed successfully.\n\n";

    logs.push_back("System diagnostics completed.");
}

void SystemCore::provideStimulus() {
    emotionEngine.provideStimulus();

    std::cout << "\nExternal stimulus received.\n";
    std::cout << "Emotional state adjusted.\n\n";

    logs.push_back("External stimulus processed.");
}

void SystemCore::viewState() {
    std::cout << "\n=== Emotional State Report ===\n";

    std::cout << "Stability: "
        << emotionEngine.getStability() << "\n";

    std::cout << "Empathy: "
        << emotionEngine.getEmpathy() << "\n";

    std::cout << "Fear: "
        << emotionEngine.getFear() << "\n";

    std::cout << "Curiosity: "
        << emotionEngine.getCuriosity() << "\n";

    int ascensionScore = calculateAscensionScore();

    std::cout << "\nAscension Score: "
        << ascensionScore << "\n";

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

    logs.push_back("Emotional cycle processed.");
}

int SystemCore::calculateAscensionScore() {
    return emotionEngine.calculateAscensionScore();
}

void SystemCore::runAscensionTrial() {
    int ascensionScore = calculateAscensionScore();

    std::cout << "\n=== ASCENSION TRIAL ===\n";
    std::cout << "Current Ascension Score: "
        << ascensionScore << "\n\n";

    std::cout << "Evaluating emotional stability...\n";
    std::cout << "Evaluating empathy...\n";
    std::cout << "Evaluating curiosity...\n";
    std::cout << "Evaluating fear...\n\n";

    if (ascensionScore >= 120) {
        std::cout << "Result: ASCENSION TRIAL PASSED\n";
        std::cout << "E.M.O.S. has reached the required emotional threshold.\n";

        logs.push_back("Ascension Trial passed.");
    }
    else {
        std::cout << "Result: ASCENSION TRIAL NOT PASSED\n";
        std::cout << "The system requires an Ascension Score of 120 or higher.\n";

        logs.push_back("Ascension Trial not passed.");
    }

    std::cout << "\n";
}

void SystemCore::viewLogs() {
    std::cout << "\n=== E.M.O.S. System Logs ===\n";

    if (logs.empty()) {
        std::cout << "No system logs available.\n";
    }
    else {
        for (const std::string& log : logs) {
            std::cout << "- " << log << "\n";
        }
    }

    std::cout << "\n";
}
