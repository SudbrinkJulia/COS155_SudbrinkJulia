#include "EmotionEngine.h"

// Set the starting emotional values for E.M.O.S.
EmotionEngine::EmotionEngine() {
    stability = 50;
    empathy = 50;
    fear = 50;
    curiosity = 50;
}

// Changes the emotional state when the system receives a stimulus.
void EmotionEngine::provideStimulus() {
    empathy += 5;
    stability += 2;
    fear -= 3;

    // Keep emotional values within the 0-100 range.
    if (empathy > 100) {
        empathy = 100;
    }

    if (stability > 100) {
        stability = 100;
    }

    if (fear < 0) {
        fear = 0;
    }
}

// Updates the emotional state during a system cycle.
void EmotionEngine::runCycle() {
    stability -= 1;
    curiosity += 2;
    fear += 1;

    // Keep emotional values within the 0-100 range.
    if (stability < 0) {
        stability = 0;
    }

    if (curiosity > 100) {
        curiosity = 100;
    }

    if (fear > 100) {
        fear = 100;
    }
}

// Calculates the score used by the Ascension Trial.
int EmotionEngine::calculateAscensionScore() {
    return stability + empathy + curiosity - fear;
}

// Returns the current stability value.
int EmotionEngine::getStability() const {
    return stability;
}

// Returns the current empathy value.
int EmotionEngine::getEmpathy() const {
    return empathy;
}

// Returns the current fear value.
int EmotionEngine::getFear() const {
    return fear;
}

// Returns the current curiosity value.
int EmotionEngine::getCuriosity() const {
    return curiosity;
}