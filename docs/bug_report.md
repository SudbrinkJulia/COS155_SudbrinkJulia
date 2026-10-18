# E.M.O.S. Bug Report

## Bug 1: Multiple menu values on one line

**Description:**  
Entering multiple values, such as `1 2`, can cause the program to treat the second value as another menu selection. The program should validate the entire line and reject it if it contains more than one choice.

**Steps to reproduce:**
1. Run E.M.O.S.
2. At the menu prompt, type `1 2`.
3. Press Enter and observe whether the program processes both values.

**Cause:**  
`main.cpp` reads input with `std::cin >> input`, which reads one value at a time and leaves additional values in the input stream.

**Planned fix:**  
Read the entire line with `std::getline` and validate that the whole line contains one valid menu choice.

**GitHub Issue:** Add issue link after creating it.  
**Fix commit:** Add commit reference after making and committing the fix.

---

## Bug 2: Program repeats an error when input ends

**Description:**  
If the input stream ends while E.M.O.S. is waiting for a menu choice, the program may keep displaying an invalid-input message instead of shutting down.

**Steps to reproduce:**
1. Run E.M.O.S. in the Visual Studio console.
2. At the menu prompt, press **Ctrl+Z**, then **Enter**.
3. Observe whether the program exits or repeats the error message.

**Cause:**  
`main.cpp` does not check whether reading input succeeded. When the input stream ends, the program continues its menu loop.

**Planned fix:**  
Check whether the input-reading operation succeeds. If it does not, stop the menu loop.

**GitHub Issue:** Add issue link after creating it.  
**Fix commit:** Add commit reference after making and committing the fix.

---

## Bug 3: Diagnostics report subsystems as operational without checking

**Description:**  
The diagnostics report says subsystems are operational without checking their current condition. The report should identify a problem if an emotional value is outside its allowed range or if the logs are unavailable.

**Steps to reproduce:**
1. Run E.M.O.S.
2. Select **Run Diagnostics**.
3. Review the subsystem status messages.
4. Confirm that the program reports “Operational” without testing the emotion values or log availability.

**Cause:**  
`SystemCore.cpp` prints fixed status messages instead of checking the emotion values and system logs.

**Planned fix:**  
Check that each emotion value is between 0 and 100 before reporting the emotion engine as operational. Check that the system log contains entries before reporting that logging is available.

**GitHub Issue:** Add issue link after creating it.  
**Fix commit:** Add commit reference after making and committing the fix.

---

## Edge Cases Tested

- Entering multiple menu values on one line: `1 2`
- Ending the input stream at the menu prompt with **Ctrl+Z**, then **Enter**
- Running diagnostics and checking whether the reported statuses reflect actual checks
