#include "EmotionEngine.h"

EmotionEngine::EmotionEngine() {
    stability = 50;
    empathy = 50;
    fear = 50;
    curiosity = 50;
}

void EmotionEngine::provideStimulus() {
    empathy += 5;
    stability += 2;
    fear -= 3;

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

void EmotionEngine::runCycle() {
    stability -= 1;
    curiosity += 2;
    fear += 1;

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

int EmotionEngine::calculateAscensionScore() {
    return stability + empathy + curiosity - fear;
}

int EmotionEngine::getStability() const {
    return stability;
}

int EmotionEngine::getEmpathy() const {
    return empathy;
}

int EmotionEngine::getFear() const {
    return fear;
}

int EmotionEngine::getCuriosity() const {
    return curiosity;
}