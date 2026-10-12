E.M.O.S. Feature Plan

## Purpose and scope

This plan describes three additions to the current E.M.O.S. console program. One feature follows instructor feedback to add color to the console so menus and results stand out. The other two features build on the existing emotional state and action log. Planning will be completed before implementation, and existing features will remain available.

## Feature 1: Add Color to the Console

### Feature description

Use color to make the console title, menu choices, section headings, and important results easier to distinguish. For example, use a consistent accent color for headings, green for a successful Ascension Trial, yellow for a stable status, and red for an unsuccessful trial or unstable status. Return the text to its normal color after each colored message so colors do not unintentionally carry over.

The user will see the colors automatically while using the existing menu and reports; no new menu input is needed.

### Why it matters

The current console output is all the same color, so headings, choices, and results can blend together. Color will make the program easier to scan and make important status messages stand out, as suggested by the instructor.

### Task breakdown

1. Choose a simple console color approach supported by the Visual Studio console and define reusable color choices or helper code.
2. Apply an accent color to the program title, menu headings, and prompts in `Menu.cpp` and `Main.cpp`.
3. Apply clear colors to report headings and status/trial results in `SystemCore.cpp`.
4. Restore the normal console color after each colored section and before the menu is displayed again.
5. Build and run the program; check that colors display correctly for the menu, reports, stable/unstable statuses, and both trial outcomes without changing the text or behavior.

### Related GitHub issue

- **Issue 1: Add readable console colors to menus and system results**

## Feature 2: Reset Emotional State

### Feature description

Add a menu option that returns Stability, Empathy, Fear, and Curiosity to their starting values of 50. The user selects the reset option, receives a confirmation, and can use the existing state report to verify the values. Resetting will not erase the system log; the reset action will be recorded in it.

### Why it matters

The current program has no way to return to a clean starting state without closing and restarting it. A reset option lets users try different stimulus and cycle combinations in one session while preserving the existing log of what happened.

### Task breakdown

1. Add an `EmotionEngine::resetToDefault()` method declaration to `EmotionEngine.h`.
2. Implement `resetToDefault()` in `EmotionEngine.cpp` by setting all four values to 50.
3. Declare `SystemCore::resetEmotionalState()` in `SystemCore.h` and implement it in `SystemCore.cpp`; it calls the engine reset, prints a confirmation, and appends a message to the system log.
4. Add a Reset Emotional State option to `Menu.cpp` and route its new selection to `SystemCore` in `Main.cpp`.
5. Build and run the program; change values, reset them, and confirm all four return to 50, the score returns to 100, and the reset appears in logs.

### Related GitHub issues

- **Issue 2: Add reset-to-default behavior to EmotionEngine and SystemCore**
- **Issue 3: Add a reset option to the menu and verify the reset workflow**

## Feature 3: Session Activity Summary

### Feature description

Add a menu option that displays a summary of the current run of E.M.O.S. The summary will show how many stimuli were processed, how many emotional cycles were run, how many diagnostics were run, and the current Ascension Score. The counts start at zero when the program starts and reset naturally when the program is closed and reopened.

### Why it matters

The current logs list individual actions, but the user has to read the entire log to understand how much activity happened. A summary provides a quick view of session activity and the current score without removing the detailed log feature.

### Task breakdown

1. Add clearly named integer counters to `SystemCore` in `SystemCore.h` for stimuli, cycles, and diagnostics, and initialize them to zero in the constructor in `SystemCore.cpp`.
2. Increment the appropriate counter after each corresponding action is successfully processed.
3. Declare `SystemCore::viewSessionSummary()` in `SystemCore.h` and implement it in `SystemCore.cpp` to display the three totals and current Ascension Score.
4. Add a Session Summary option to `Menu.cpp` and route its selection to `viewSessionSummary()` in `Main.cpp`.
5. Build and run the program; confirm counts begin at zero, increase after each action, and the score matches the existing state report.

### Related GitHub issue

- **Issue 4: Track session activity and add a summary menu option**

## Scope and testing notes

The three features add functionality without replacing the existing state report, diagnostics, system logs, emotional cycle, stimulus behavior, or Ascension Trial. Implementation should preserve the current emotional value rules and score formula. The console color feature should only change appearance, not the wording or behavior of existing options.
