#pragma once
#include <vector>
#include <string>
#include "EmotionEngine.h"

// SystemCore is the main controller for E.M.O.S.
// It connects the menu choices to the EmotionEngine
// and keeps track of system logs.

class SystemCore {
public:

    // Creates the main system and starts the logging system.
    SystemCore();

    // Checks the current condition of the system.
    void runDiagnostics();

    // Sends a stimulus to the EmotionEngine.
    void provideStimulus();

    // Displays the current emotional state.
    void viewState();

    // Runs one emotional cycle.
    void runCycle();

    // Gets the current Ascension Score from EmotionEngine.
    int calculateAscensionScore();

    // Tests whether the system has reached the Ascension threshold.
    void runAscensionTrial();

    // Displays the system's activity logs.
    void viewLogs();

    // Adds a new message to the system log.
    void addLog(const std::string& message);

private:

    // The EmotionEngine manages the actual emotional values.
    EmotionEngine emotionEngine;

    // Stores messages about important system actions.
    std::vector<std::string> logs;
};