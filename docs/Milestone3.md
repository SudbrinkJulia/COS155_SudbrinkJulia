# Milestone 3

## Features Added

This week I continued developing E.M.O.S. (Emotion Modulation & Optimization System) by adding several new features and expanding the existing emotional systems.

- Added try/catch input validation to handle invalid user input without stopping the program.
- Expanded the EmotionEngine so it actively manages emotional state changes and calculates the Ascension Score.
- Added a system logging feature to record important system actions.
- Expanded the diagnostics system to display system status, emotional state information, and the current Ascension Score.
- Added the Ascension Trial, which evaluates the current Ascension Score and determines whether the system has reached the required threshold.
- Added limits to the emotional state values so Stability, Empathy, Fear, and Curiosity remain within a 0–100 range.

## System Design Updates

The EmotionEngine now has a more active role in the overall system design. Instead of being a placeholder class, it is responsible for processing emotional changes and calculating the Ascension Score.

The current system structure is:

Menu → SystemCore → EmotionEngine

The Menu handles user choices, SystemCore manages the main system functions, and EmotionEngine manages the emotional state and calculations. SystemCore also manages the system logs and displays information to the user.

The Ascension Trial uses the Ascension Score calculated by EmotionEngine to determine whether the system has reached the required emotional threshold.

## Refactoring Improvements

I refactored the input validation system by replacing the previous `std::cin.clear()` and `std::cin.ignore()` approach with try/catch validation using `std::stoi()`. This makes invalid input easier to handle and keeps the main program running when the user enters invalid data.

I also expanded the responsibilities of EmotionEngine so emotional processing and Ascension Score calculations are handled by the class that owns the emotional state. This improved the organization of the project and gave EmotionEngine a meaningful purpose.

The diagnostics and logging functionality were also organized through SystemCore so the main program does not have to directly manage these system functions.

Finally, I added value limits to the emotional states to prevent them from going below 0 or above 100. This makes the emotional system more consistent and prevents unrealistic values during repeated testing.

## Why These Changes Were Made

These changes were made to improve the structure, reliability, and functionality of E.M.O.S. while keeping the project simple enough to continue expanding.

The main goal was to make each class have a clear responsibility, improve input handling, and add features that make the emotional system feel more complete and functional.
