# Random Walk Word Placement

This project implements a matrix generation algorithm in C that embeds a specific string (`.NET_CORE`) using a **Self-Avoiding Random Walk**.

## ⚙️ Logic

1.  **Grid Initialization:** Creates a random $N \times N$ grid filled with placeholders (`#`).
2.  **Start:** Places the first character `.` at a random coordinate.
3.  **Walk:**
    * Randomly selects a valid neighbor (Up, Down, Left, Right).
    * Moves to that neighbor and places the next character.
    * **Constraint:** Cannot move to a cell that is already occupied or out of bounds.
4.  **Retry Mechanism:** If the algorithm gets "trapped" (no empty neighbors left but word isn't finished), it resets and tries again.

## 🚀 Example Output

Target: **.NET_CORE**

```text
#  #  O  R  E 
#  #  C  _  # 
#  #  T  #  # 
#  .  E  N  # 
#  #  #  #  #
