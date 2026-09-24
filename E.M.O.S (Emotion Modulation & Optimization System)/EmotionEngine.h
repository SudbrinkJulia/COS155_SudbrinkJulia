#pragma once

// EmotionEngine controls the emotional values of E.M.O.S.
// It changes the emotional state when the system receives
// a stimulus or runs an emotional cycle.

class EmotionEngine {
public:

    // Creates the starting emotional state.
    EmotionEngine();

    // Changes the emotions when an outside stimulus is received.
    void provideStimulus();

    // Updates the emotions during a normal system cycle.
    void runCycle();

    // Calculates the score used by the Ascension Trial.
    int calculateAscensionScore();

    // These functions let SystemCore read the current emotions.
    int getStability() const;
    int getEmpathy() const;
    int getFear() const;
    int getCuriosity() const;

private:

    // The four emotional values tracked by E.M.O.S.
    int stability;
    int empathy;
    int fear;
    int curiosity;
};