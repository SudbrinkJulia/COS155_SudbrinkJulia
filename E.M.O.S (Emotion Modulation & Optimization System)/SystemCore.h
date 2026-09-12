#pragma once

#include <vector>
#include <string>

class SystemCore {
public:
    SystemCore();

    // Existing function
    void runDiagnostics();

    // Emotional subsystem values
    int stability;
    int empathy;
    int fear;
    int curiosity;

    // Prototype features
    void provideStimulus();
    void viewState();
    void runCycle();

    // Ascension Trial foundation
    int calculateAscensionScore();

    // Logs system
    void viewLogs();

private:
    std::vector<std::string> logs;
};