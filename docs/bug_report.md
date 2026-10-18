# E.M.O.S. Bug Report

## Bug 1: Multiple menu values on one line

**Description:**  
Entering multiple values, such as `1 2`, could cause the program to treat them as separate menu choices. The program should validate the entire line and reject it if it contains more than one choice.

**Steps to reproduce:**
1. Run E.M.O.S.
2. At the menu prompt, enter `1 2`.
3. Press Enter.

**Cause:**  
`main.cpp` used `std::cin >> input`, which read one value and left any additional values in the input stream.

**Fix:**  
Changed `main.cpp` to read the full line with `std::getline` and validate the complete input before processing a choice.

**Test result:**  
Entering `1 2` is rejected as invalid input, and neither choice is processed.

**GitHub Issue:** [#35 — Reject multiple values entered at the menu prompt](https://github.com/SudbrinkJulia/COS155_SudbrinkJulia/issues/35)  
**Fix commit:** “Fix menu input validation and EOF handling.”

---

## Bug 2: Program did not handle the end of menu input

**Description:**  
If the input stream ended while E.M.O.S. was waiting for a menu choice, the program could repeat an invalid-input message instead of exiting.

**Steps to reproduce:**
1. Run E.M.O.S. in the Visual Studio console.
2. At the menu prompt, press **Ctrl+Z**, then **Enter**.

**Cause:**  
`main.cpp` did not check whether reading the input had succeeded.

**Fix:**  
Added a check for `std::getline` failure. The program now stops the menu loop if the input stream ends.

**Test result:**  
Pressing **Ctrl+Z**, then **Enter**, exits E.M.O.S. without repeating an e
