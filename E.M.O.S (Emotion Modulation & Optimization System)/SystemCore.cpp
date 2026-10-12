#include "SystemCore.h"
#include "ConsoleColors.h"
#include <iostream>

// Starts E.M.O.S., sets the session counters to zero,
// and records the first system log.
SystemCore::SystemCore() {
    stimulusCount = 0;
    emotionalCycleCount = 0;
    diagnosticsCount = 0;

    appendSystemLog("E.M.O.S. system initialized.");
}

// Adds a message to the system's list of logs.
void SystemCore::appendSystemLog(const std::string& message) {
    systemLogs.push_back(message);
}

// Displays all four current emotional values.
// Both the state report and diagnostics use this helper.
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

// Displays the status that corresponds to the Ascension Score.
// The color makes the result easier to notice.
void SystemCore::displayAscensionStatus(int score) {
    if (score >= 120) {
        std::cout << ConsoleColors::Success;
        std::cout << "ASCENSION READY";
    }
    else if (score >= 90) {
        std::cout << ConsoleColors::Warning;
        std::cout << "STABLE";
    }
    else {
        std::cout << ConsoleColors::Error;
        std::cout << "UNSTABLE";
    }

    // Return to the normal color after printing the status.
    std::cout << ConsoleColors::Normal << "\n";
}

// Displays system health, emotional values, score, and status.
void SystemCore::runDiagnostics() {
    // Count each time diagnostics are run.
    diagnosticsCount++;

    int ascensionScore = calculateAscensionScore();

    // Color the diagnostics heading, then restore normal text color.
    std::cout << ConsoleColors::Accent;
    std::cout << "\n=== E.M.O.S. Diagnostics ===\n";
    std::cout << ConsoleColors::Normal;

    std::cout << "\nSystem Status:\n";
    std::cout << "Emotion Engine: Operational\n";
    std::cout << "Emotional State Monitoring: Operational\n";
    std::cout << "Logging System: Operational\n";

    // Reuse the shared helper instead of repeating value-printing code.
    std::cout << "\nCurrent Emotional State:\n";
    displayEmotionalState();

    std::cout << "\nCurrent Ascension Score: "
        << ascensionScore << "\n";
    std::cout << "Ascension Status: ";
    displayAscensionStatus(ascensionScore);

    std::cout << "\nDiagnostics completed successfully.\n\n";

    // Record that diagnostics were run.
    appendSystemLog("System diagnostics completed.");
}

// Tells EmotionEngine to apply a stimulus and records the action.
void SystemCore::processStimulus() {
    emotionEngine.applyStimulus();

    // Count each stimulus processed during this session.
    stimulusCount++;

    std::cout << "\nExternal stimulus received.\n";
    std::cout << "Emotional state adjusted.\n\n";

    appendSystemLog("External stimulus processed.");
}

// Displays the current emotional values and Ascension Score.
void SystemCore::viewState() {
    // Color the report heading, then restore normal text color.
    std::cout << ConsoleColors::Accent;
    std::cout << "\n=== Emotional State Report ===\n";
    std::cout << ConsoleColors::Normal;

    // Reuse the same helper that diagnostics uses.
    displayEmotionalState();

    int ascensionScore = calculateAscensionScore();

    std::cout << "\nAscension Score: "
        << ascensionScore << "\n";
    std::cout << "Status: ";
    displayAscensionStatus(ascensionScore);

    std::cout << "\n";
}

// Tells EmotionEngine to advance one cycle and records the action.
void SystemCore::runEmotionalCycle() {
    emotionEngine.advanceEmotionalCycle();

    // Count each emotional cycle processed during this session.
    emotionalCycleCount++;

    std::cout << "\nEmotional cycle processed.\n";
    std::cout << "Subsystems updated.\n\n";

    appendSystemLog("Emotional cycle processed.");
}

// Resets all emotional values and records the action.
void SystemCore::resetEmotions() {
    emotionEngine.resetEmotions();

    // Green highlights the successful reset message.
    std::cout << ConsoleColors::Success;
    std::cout << "\nEmotional values reset to 50.\n";
    std::cout << ConsoleColors::Normal << "\n";

    appendSystemLog("Emotional values reset.");
}

// Gets the current score from EmotionEngine.
int SystemCore::calculateAscensionScore() {
    return emotionEngine.calculateAscensionScore();
}

// Checks whether the current score meets the trial's passing score of 120.
void SystemCore::runAscensionTrial() {
    int ascensionScore = calculateAscensionScore();

    // Color the trial heading, then restore normal text color.
    std::cout << ConsoleColors::Accent;
    std::cout << "\n=== ASCENSION TRIAL ===\n";
    std::cout << ConsoleColors::Normal;

    std::cout << "Current Ascension Score: "
        << ascensionScore << "\n\n";

    std::cout << "Evaluating emotional stability...\n";
    std::cout << "Evaluating empathy...\n";
    std::cout << "Evaluating curiosity...\n";
    std::cout << "Evaluating fear...\n\n";

    if (ascensionScore >= 120) {
        // Green highlights a successful trial.
        std::cout << ConsoleColors::Success;
        std::cout << "Result: ASCENSION TRIAL PASSED\n";
        std::cout << "E.M.O.S. has reached the required emotional threshold.\n";
        std::cout << ConsoleColors::Normal;

        appendSystemLog("Ascension Trial passed.");
    }
    else {
        // Red highlights an unsuccessful trial.
        std::cout << ConsoleColors::Error;
        std::cout << "Result: ASCENSION TRIAL NOT PASSED\n";
        std::cout << "The system requires an Ascension Score of 120 or higher.\n";
        std::cout << ConsoleColors::Normal;

        appendSystemLog("Ascension Trial not passed.");
    }

    std::cout << "\n";
}

// Displays a count of important actions from this program session.
void SystemCore::viewSessionSummary() {
    int ascensionScore = calculateAscensionScore();

    // Color the summary heading, then restore normal text color.
    std::cout << ConsoleColors::Accent;
    std::cout << "\n=== E.M.O.S. Session Summary ===\n";
    std::cout << ConsoleColors::Normal;

    std::cout << "Stimuli processed: " << stimulusCount << "\n";
    std::cout << "Emotional cycles run: " << emotionalCycleCount << "\n";
    std::cout << "Diagnostics run: " << diagnosticsCount << "\n";
    std::cout << "Current Ascension Score: " << ascensionScore << "\n\n";
}

// Displays every action message stored in systemLogs.
void SystemCore::viewLogs() {
    // Color the logs heading, then restore normal text color.
    std::cout << ConsoleColors::Accent;
    std::cout << "\n=== E.M.O.S. System Logs ===\n";
    std::cout << ConsoleColors::Normal;

    if (systemLogs.empty()) {
        std::cout << "No system logs available.\n";
    }
    else {
        // Print each saved message on its own line.
        for (const std::string& log : systemLogs) {
            std::cout << "- " << log << "\n";
        }
    }

    std::cout << "\n";
}