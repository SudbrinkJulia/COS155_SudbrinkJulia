# Final Reflection

## 1. Project Growth & Evolution

E.M.O.S. started as a smaller console program for changing and displaying four emotional values. It grew to include emotional cycles, diagnostics, system logs, an Ascension Trial, resetting values, and a session summary. I also added console colors and improved input validation. The biggest improvement was making the program more reliable: it now rejects entries such as letters, out-of-range menu numbers, and multiple numbers entered on one line, then returns to the menu.

## 2. Refactoring & Code Quality

I improved the separation of responsibilities between classes. `EmotionEngine` manages the emotional values, changes them during stimuli and cycles, keeps them within the 0–100 range, and calculates the Ascension Score. `SystemCore` coordinates the program actions and reports, while `Menu` displays the choices. I also added helper functions for clamping the emotional values and displaying shared report information. This organization makes it easier to understand which part of the program is responsible for each task.

## 3. Features & File I/O

I am most proud of adding the reset and session summary features because they made the program more useful across a session. Integrating the session summary required tracking actions as the user moved through the menu. E.M.O.S. does not currently save or load data from files. Emotional values, logs, and session counts are held in memory and are lost when the program closes. Documenting this limitation helped me understand that data persistence is a separate feature that needs its own design and testing.

## 4. Debugging, Challenges & Problem Solving

One difficult issue was menu input such as `1 2`. At first, I tested individual valid choices, so I did not notice that the extra number could be read as another selection. I reproduced the issue by entering multiple values on one line. I changed the input handling so the whole line is checked as one menu entry. I also tested letters and an out-of-range number such as `10`. The program now displays an error and returns to the menu instead of processing the unintended choice.

## 5. Developer Growth

I improved my understanding of how C++ classes can divide work in a project. I can now connect menu choices to class functions, keep related emotional state changes together, and use validation to handle unexpected input. My debugging approach has also changed: I learned to try edge cases deliberately instead of testing only the normal path. Working on E.M.O.S. over several weeks helped me see that planning, small code changes, repeated testing, and clear GitHub commits all contribute to a more dependable project.

## 6. Looking Ahead

If I continued E.M.O.S., I would add file-based saving and loading so emotional values and logs could carry over between runs. I would also expand diagnostics so each status reflects a meaningful check, and add more repeatable tests for input and emotional limits. I would continue improving the README and project organization so a new developer can find the Visual Studio solution, build the program, and understand the code without needing extra explanation.
