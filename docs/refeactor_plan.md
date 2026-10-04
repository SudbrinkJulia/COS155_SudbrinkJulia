E.M.O.S. Refactor Plan

## Purpose and scope

This plan reviews the current E.M.O.S. C++ code before refactoring. The work will improve readability and reduce repeated logic while preserving the existing menu choices, emotional state changes, diagnostics, logging, and Ascension Trial behavior. No features will be removed.

The refactor will focus on two classes:

- `SystemCore`, which coordinates the system, prints reports, and records activity.
- `EmotionEngine`, which changes and reports the four emotional values.

At least six existing functions across these classes are included below.

## Class review

### `SystemCore`

**Current concern:** `SystemCore` coordinates actions and owns logs, but it also prints all user-facing output. `viewState()` and `runDiagnostics()` each print the four emotional values and calculate/display the Ascension score and status. This repeats report logic and means a formatting change must be made in multiple places.

**Planned change:** Extract the repeated emotional-state display and Ascension-status display into small, clearly named private helper functions in `SystemCore` (for example, `displayEmotionalState()` and `displayAscensionStatus(int score)`). Have both `viewState()` and `runDiagnostics()` call the shared helpers. Keep the existing output and thresholds unchanged.

**Why:** One implementation of each repeated report section is easier to read and maintain. Both commands will show consistent state and status information.

### `EmotionEngine`

**Current concern:** `provideStimulus()` and `runCycle()` each contain separate checks that clamp emotion values to the 0–100 range. The repeated checks are easy to apply inconsistently if a future change adjusts a different value or boundary.

**Planned change:** Add a small private helper to keep an emotion value within the existing 0–100 range, then use it for each value changed by `provideStimulus()` and `runCycle()`. Preserve the current initial values, adjustments, and limits.

**Why:** Centralizing the boundary rule makes it easier to verify that all emotional values follow the same rule and reduces duplicate code.

## Function review

### `SystemCore::runDiagnostics()`

**Current concern:** This function prints system status, all four emotional values, the score, the score-based status, and a completion message. It also records a log. Its output responsibilities are mixed together, and part of the report duplicates `viewState()`.

**Planned improvement:** Keep diagnostics orchestration and logging here, but call the shared display helpers for the emotion values and Ascension status. Keep the diagnostics messages and log entry.

### `SystemCore::viewState()`

**Current concern:** It repeats the emotion-value and status output already present in `runDiagnostics()`.

**Planned improvement:** Use the same shared display helpers as `runDiagnostics()` so the report stays consistent.

### `SystemCore::provideStimulus()`

**Current concern:** This method both asks the emotion engine to process a stimulus and prints/logs the user-facing result. The name does not clearly distinguish coordinating the action from changing emotion values.

**Planned improvement:** Rename the coordinator method to `processStimulus()` and update its declaration, definition, and the call in `Main.cpp`. Keep the confirmation messages, the call into `EmotionEngine`, and the log entry.

### `SystemCore::runCycle()`

**Current concern:** “Run cycle” does not explain that this is an emotional-system cycle. The method also combines the engine update with confirmation output and logging.

**Planned improvement:** Rename it to `runEmotionalCycle()` and update its declaration, definition, and the call in `Main.cpp`. Keep the engine update, messages, and log entry.

### `EmotionEngine::provideStimulus()`

**Current concern:** The name does not say that the method changes the emotional values in response to an outside stimulus. Its limit checks are also part of the repeated clamping logic described above.

**Planned improvement:** Rename it to `applyStimulus()` and update the call from `SystemCore`. Use the shared value-limit helper after applying the same existing changes (+5 empathy, +2 stability, and -3 fear).

### `EmotionEngine::runCycle()`

**Current concern:** “Run cycle” is vague, and this method repeats the value-limit checks from `provideStimulus()`.

**Planned improvement:** Rename it to `advanceEmotionalCycle()` and update the call from `SystemCore`. Use the shared value-limit helper after applying the same existing changes (-1 stability, +2 curiosity, and +1 fear).

## Code quality issues identified

### Naming issues

1. `SystemCore::provideStimulus()` does not show that it coordinates the system-level action. Planned name: `processStimulus()`.
2. `EmotionEngine::provideStimulus()` does not clearly describe changing internal values. Planned name: `applyStimulus()`.
3. `SystemCore::runCycle()` is vague about which system is cycling. Planned name: `runEmotionalCycle()`.
4. `EmotionEngine::runCycle()` is also vague. Planned name: `advanceEmotionalCycle()`.
5. `SystemCore::logs` is broad; planned name: `systemLogs` to show what the vector contains.
6. `SystemCore::addLog()` does not say what kind of log is being added; planned name: `appendSystemLog()`.

All renamed functions will be changed consistently in their headers, source files, and call sites. These are internal project names; the visible menu choices will remain the same.

### Structural issues

1. `SystemCore::viewState()` and `SystemCore::runDiagnostics()` duplicate emotional-state and status-report output. Planned fix: shared private display helpers.
2. `EmotionEngine::provideStimulus()` and `EmotionEngine::runCycle()` duplicate 0–100 boundary checks. Planned fix: one shared private clamping helper.
3. `SystemCore` combines coordinating an operation, printing its result, and logging it. This plan keeps existing responsibilities and behavior, while extracting the repeated report formatting first to make the class easier to maintain without expanding the project unnecessarily.

## Refactor types included

- Renaming for clarity.
- Breaking repeated report output into smaller shared functions.
- Removing duplicate emotion-value boundary logic.
- Reorganizing repeated display work into shared `SystemCore` helpers.

## Order of work

1. Rename the selected functions and log members consistently in declarations, definitions, and call sites.
2. Add and use the shared emotion-value boundary helper in `EmotionEngine`.
3. Add and use shared report helpers in `SystemCore`.
4. Review the resulting code to confirm all original menu actions, messages, score thresholds, state adjustments, logs, and trial outcomes remain available and unchanged.

## Expected result

The refactor should make method names more specific, keep report formatting consistent, and ensure emotional values use one shared 0–100 rule. E.M.O.S. will retain all current features and user-visible behavior.
