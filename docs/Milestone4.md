# Milestone 4 - Final Submission

## Project Overview

E.M.O.S. (Emotion Modulation & Optimization System) is a C++ console application designed to simulate an emotional state system. The program allows the user to interact with an emotion engine, view emotional values, run emotional cycles, perform diagnostics, view system logs, and complete an Ascension Trial based on an emotional score.

## Final Features

The completed E.M.O.S. system includes:

* A main menu for navigating the application.
* An `EmotionEngine` class that manages the emotional state.
* Four tracked emotional values:

  * Stability
  * Empathy
  * Fear
  * Curiosity
* A stimulus system that modifies emotional values.
* An emotional cycle that updates the emotional state over time.
* An Ascension Score calculated from the current emotional values.
* An Ascension Trial that checks whether the required score has been reached.
* A diagnostics system that checks the status of major system components.
* A logging system that records important system actions.
* Input validation using exception handling.
* A user-friendly console interface.
* Extensive notes for organization

## System Design

The project uses multiple classes to separate responsibilities within the program.

### EmotionEngine

The `EmotionEngine` class is responsible for managing the emotional state of E.M.O.S.

It stores the current values for Stability, Empathy, Fear, and Curiosity. The class provides functions for applying stimuli, running emotional cycles, calculating the Ascension Score, and retrieving the current emotional values.

The Ascension Score is calculated using the following formula:

`Stability + Empathy + Curiosity - Fear`

This allows changes to the emotional state to affect the system's overall score.

### SystemCore

The `SystemCore` class connects the main program functions with the `EmotionEngine`. It handles operations such as providing stimuli, displaying the emotional state, running cycles, calculating the Ascension Score, running diagnostics, and displaying system logs.

### Menu

The `Menu` class manages the application's main menu and provides the user with the available actions.

The final menu includes:

1. Provide Stimulus
2. View Emotional State
3. Run Emotional Cycle
4. Run Diagnostics
5. View System Logs
6. Run Ascension Trial
7. Exit

## Input Validation

Input validation was improved during development to prevent invalid user input from causing the program to behave unexpectedly.

The final implementation uses exception handling to detect invalid input and provide an appropriate message to the user.

For example:

* Non-numeric input displays: `Invalid input. Please enter a number.`
* Numbers outside the available menu options display: `Invalid option. Please select a number between 1 and 7.`

This improvement addresses feedback from the previous milestone and makes the program more reliable.

## Refactoring and Improvements

Several areas of the project were improved throughout development.

The `EmotionEngine` was developed from a basic class into a functional component that actively manages and changes the emotional state.

The menu and system responsibilities were separated into their own classes, making the project easier to organize and maintain.

Input validation was also refactored to use exception handling instead of relying on `std::cin.clear()` and `std::cin.ignore()`.

The project was also updated so that the final program consistently uses the correct project name:

**Emotion Modulation & Optimization System**

## Testing

The completed program was tested by running the application and interacting with each major menu option.

Testing included:

* Starting the program and displaying the main menu.
* Entering valid menu selections.
* Entering text instead of a number.
* Entering numbers outside the valid menu range.
* Providing a stimulus and checking that emotional values changed.
* Running an emotional cycle and checking that values updated.
* Viewing the current emotional state.
* Running diagnostics.
* Viewing system logs.
* Running the Ascension Trial.
* Verifying that the Ascension Trial responds to the calculated score.
* Exiting the program.

Example diagnostic results showed that the Emotion Engine, Emotional State Monitoring, and Logging System were operational.

## Final Result

The final E.M.O.S. application is a functional C++ console program that demonstrates object-oriented programming, class organization, user input handling, exception handling, state management, calculations, diagnostics, and logging.

The project has been tested through normal user interaction and invalid-input scenarios. The final implementation incorporates improvements made from instructor feedback during the previous milestones and brings the project to its final submission state.

## Conclusion

Milestone 4 completes the E.M.O.S. project by combining the system's individual components into a functional application. The final version provides an interactive emotional state simulation while demonstrating the programming concepts and techniques developed throughout the course.
