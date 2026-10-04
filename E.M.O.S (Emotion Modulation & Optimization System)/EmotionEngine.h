#pragma once

// EmotionEngine manages the emotional values tracked by E.M.O.S.
class EmotionEngine {
public:
    // Creates the starting emotional state.
    EmotionEngine();

    // Applies changes when an outside stimulus is received.
    void applyStimulus();

    // Advances the emotional state by one system cycle.
    void advanceEmotionalCycle();

    // Calculates the score used by the Ascension Trial.
    int calculateAscensionScore();

    // Lets SystemCore read the current emotional values.
    int getStability() const;
    int getEmpathy() const;
    int getFear() const;
    int getCuriosity() const;

private:
    // Keeps all emotional values between 0 and 100.
    void clampEmotionValues();

    // The four emotional values tracked by E.M.O.S.
    int stability;
    int empathy;
    int fear;
    int curiosity;
};