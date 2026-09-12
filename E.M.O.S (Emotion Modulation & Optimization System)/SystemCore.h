#pragma once

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
};

