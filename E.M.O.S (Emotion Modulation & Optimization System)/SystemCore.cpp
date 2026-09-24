#include "SystemCore.h"
#include <iostream>

// SystemCore starts the E.M.O.S. system and creates the first log.
SystemCore::SystemCore() {
    addLog("E.M.O.S. system initialized.");
}

// Adds a message to the system log.
void SystemCore::addLog(const std::string& message) {
    logs.push_back(message);
}

// Runs a basic check of the system and displays its current condition.
void SystemCore::runDiagnostics() {
    int ascensionScore = calculateAscensionScore();

    std::cout << "\n=== E.M.O.S. Diagnostics ===\n";

    std::cout << "\nSystem Status:\n";
    std::cout << "Emotion Engine: Operational\n";
    std::cout << "Emotional State Monitoring: Operational\n";
    std::cout << "Logging System: Operational\n";

    // Display the current emotional values.
    std::cout << "\nCurrent Emotional State:\n";
    std::cout << "Stability: "
        << emotionEngine.getStability() << "\n";
    std::cout << "Empathy: "
        << emotionEngine.getEmpathy() << "\n";
    std::cout << "Fear: "
        << emotionEngine.getFear() << "\n";
    std::cout << "Curiosity: "
        << emotionEngine.getCuriosity() << "\n";

    // Display the current Ascension Score.
    std::cout << "\nCurrent Ascension Score: "
        << ascensionScore << "\n";

    // Determine the current system status based on the score.
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

    // Record that diagnostics were completed.
    addLog("System diagnostics completed.");
}

// Sends a stimulus to the EmotionEngine.
void SystemCore::provideStimulus() {
    emotionEngine.provideStimulus();

    std::cout << "\nExternal stimulus received.\n";
    std::cout << "Emotional state adjusted.\n\n";

    // Record the action in the system log.
    addLog("External stimulus processed.");
}

// Displays the current emotional state and Ascension Score.
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

    // Display the current status based on the score.
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

// Runs one emotional cycle through the EmotionEngine.
void SystemCore::runCycle() {
    emotionEngine.runCycle();

    std::cout << "\nEmotional cycle processed.\n";
    std::cout << "Subsystems updated.\n\n";

    // Record the action in the system log.
    addLog("Emotional cycle processed.");
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

    // Show the different parts of the emotional evaluation.
    std::cout << "Evaluating emotional stability...\n";
    std::cout << "Evaluating empathy...\n";
    std::cout << "Evaluating curiosity...\n";
    std::cout << "Evaluating fear...\n\n";

    // A score of 120 or higher passes the trial.
    if (ascensionScore >= 120) {
        std::cout << "Result: ASCENSION TRIAL PASSED\n";
        std::cout << "E.M.O.S. has reached the required emotional threshold.\n";

        addLog("Ascension Trial passed.");
    }
    else {
        std::cout << "Result: ASCENSION TRIAL NOT PASSED\n";
        std::cout << "The system requires an Ascension Score of 120 or higher.\n";

        addLog("Ascension Trial not passed.");
    }

    std::cout << "\n";
}

// Displays all activity recorded in the system log.
void SystemCore::viewLogs() {
    std::cout << "\n=== E.M.O.S. System Logs ===\n";

    if (logs.empty()) {
        std::cout << "No system logs available.\n";
    }
    else {
        // Go through each saved log message and display it.
        for (const std::string& log : logs) {
            std::cout << "- " << log << "\n";
        }
    }

    std::cout << "\n";
}