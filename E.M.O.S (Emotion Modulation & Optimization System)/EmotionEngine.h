#pragma once

class EmotionEngine {
public:
    EmotionEngine();

    void provideStimulus();
    void runCycle();
    int calculateAscensionScore();

    int getStability() const;
    int getEmpathy() const;
    int getFear() const;
    int getCuriosity() const;

private:
    int stability;
    int empathy;
    int fear;
    int curiosity;
};
