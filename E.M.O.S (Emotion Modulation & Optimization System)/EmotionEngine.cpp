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
}

void EmotionEngine::runCycle() {
    stability -= 1;
    curiosity += 2;
    fear += 1;
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