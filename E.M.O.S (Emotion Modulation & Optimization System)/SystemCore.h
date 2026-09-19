#pragma once

#include <vector>
#include <string>
#include "EmotionEngine.h"

class SystemCore {
public:
    SystemCore();

    void runDiagnostics();

    void provideStimulus();
    void viewState();
    void runCycle();

    int calculateAscensionScore();

    void viewLogs();

private:
    EmotionEngine emotionEngine;
    std::vector<std::string> logs;
};