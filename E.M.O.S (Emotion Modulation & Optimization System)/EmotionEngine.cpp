#include "EmotionEngine.h"

// Sets the starting emotional values for E.M.O.S.
EmotionEngine::EmotionEngine() {
    stability = 50;
    empathy = 50;
    fear = 50;
    curiosity = 50;
}

// Applies emotional changes when the system receives a stimulus.
void EmotionEngine::applyStimulus() {
    empathy += 5;
    stability += 2;
    fear -= 3;

    clampEmotionValues();
}

// Advances the emotional state during one system cycle.
void EmotionEngine::advanceEmotionalCycle() {
    stability -= 1;
    curiosity += 2;
    fear += 1;

    clampEmotionValues();
}

// Keeps each emotional value within the 0–100 range.
void EmotionEngine::clampEmotionValues() {
    if (stability < 0) {
        stability = 0;
    }
    else if (stability > 100) {
        stability = 100;
    }

    if (empathy < 0) {
        empathy = 0;
    }
    else if (empathy > 100) {
        empathy = 100;
    }

    if (fear < 0) {
        fear = 0;
    }
    else if (fear > 100) {
        fear = 100;
    }

    if (curiosity < 0) {
        curiosity = 0;
    }
    else if (curiosity > 100) {
        curiosity = 100;
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