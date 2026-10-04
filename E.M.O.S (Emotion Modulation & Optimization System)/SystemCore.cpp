#include "SystemCore.h"
#include <iostream>

// Starts E.M.O.S. and records the first system log.
SystemCore::SystemCore() {
    appendSystemLog("E.M.O.S. system initialized.");
}

// Adds a message to the system log.
void SystemCore::appendSystemLog(const std::string& message) {
    systemLogs.push_back(message);
}

// Displays the four current emotional values.
void SystemCore::displayEmotionalState() {
    std::cout << "Stability: "
        << emotionEngine.getStability() << "\n";
    std::cout << "Empathy: "
        << emotionEngine.getEmpathy() << "\n";
    std::cout << "Fear: "
        << emotionEngine.getFear() << "\n";
    std::cout << "Curiosity: "
        << emotionEngine.getCuriosity() << "\n";
}

// Displays the status associated with an Ascension Score.
void SystemCore::displayAscensionStatus(int score) {
    if (score >= 120) {
        std::cout << "ASCENSION READY\n";
    }
    else if (score >= 90) {
        std::cout << "STABLE\n";
    }
    else {
        std::cout << "UNSTABLE\n";
    }
}

// Checks the current condition of the system.
void SystemCore::runDiagnostics() {
    int ascensionScore = calculateAscensionScore();

    std::cout << "\n=== E.M.O.S. Diagnostics ===\n";
    std::cout << "\nSystem Status:\n";
    std::cout << "Emotion Engine: Operational\n";
    std::cout << "Emotional State Monitoring: Operational\n";
    std::cout << "Logging System: Operational\n";

    std::cout << "\nCurrent Emotional State:\n";
    displayEmotionalState();

    std::cout << "\nCurrent Ascension Score: "
        << ascensionScore << "\n";
    std::cout << "Ascension Status: ";
    displayAscensionStatus(ascensionScore);

    std::cout << "\nDiagnostics completed successfully.\n\n";

    appendSystemLog("System diagnostics completed.");
}

// Processes a stimulus through the EmotionEngine.
void SystemCore::processStimulus() {
    emotionEngine.applyStimulus();

    std::cout << "\nExternal stimulus received.\n";
    std::cout << "Emotional state adjusted.\n\n";

    appendSystemLog("External stimulus processed.");
}

// Displays the current emotional state and Ascension Score.
void SystemCore::viewState() {
    std::cout << "\n=== Emotional State Report ===\n";
    displayEmotionalState();

    int ascensionScore = calculateAscensionScore();

    std::cout << "\nAscension Score: "
        << ascensionScore << "\n";
    std::cout << "Status: ";
    displayAscensionStatus(ascensionScore);

    std::cout << "\n";
}

// Runs one emotional cycle through the EmotionEngine.
void SystemCore::runEmotionalCycle() {
    emotionEngine.advanceEmotionalCycle();

    std::cout << "\nEmotional cycle processed.\n";
    std::cout << "Subsystems updated.\n\n";

    appendSystemLog("Emotional cycle processed.");
}

// Gets the Ascension Score from the EmotionEngine.
int SystemCore::calculateAscensionScore() {
    return emotionEngine.calculateAscensionScore();
}

// Tests whether E.M.O.S. has reached the required Ascension Score.
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
        appendSystemLog("Ascension Trial passed.");
    }
    else {
        std::cout << "Result: ASCENSION TRIAL NOT PASSED\n";
        std::cout << "The system requires an Ascension Score of 120 or higher.\n";
        appendSystemLog("Ascension Trial not passed.");
    }

    std::cout << "\n";
}

// Displays all activity recorded in the system log.
void SystemCore::viewLogs() {
    std::cout << "\n=== E.M.O.S. System Logs ===\n";

    if (systemLogs.empty()) {
        std::cout << "No system logs available.\n";
    }
    else {
        for (const std::string& log : systemLogs) {
            std::cout << "- " << log << "\n";
        }
    }

    std::cout << "\n";
}