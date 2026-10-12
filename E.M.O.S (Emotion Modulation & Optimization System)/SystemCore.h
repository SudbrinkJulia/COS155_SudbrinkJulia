#pragma once
#include <vector>
#include <string>
#include "EmotionEngine.h"

// SystemCore coordinates E.M.O.S. actions, displays reports,
// and keeps track of system logs and session activity.
class SystemCore {
public:
    SystemCore();

    void runDiagnostics();
    void processStimulus();
    void viewState();
    void runEmotionalCycle();
    void resetEmotions();
    int calculateAscensionScore();
    void runAscensionTrial();
    void viewLogs();
    void viewSessionSummary();
    void appendSystemLog(const std::string& message);

private:
    // Shared report helpers used by viewState and runDiagnostics.
    void displayEmotionalState();
    void displayAscensionStatus(int score);

    EmotionEngine emotionEngine;
    std::vector<std::string> systemLogs;

    // These counters track actions during this program session.
    int stimulusCount;
    int emotionalCycleCount;
    int diagnosticsCount;
};