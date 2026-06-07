# Rock-Paper-Scissors Game (C++) 🎮

A console-based Rock-Paper-Scissors game built in C++, where the player competes against the computer over multiple rounds. The game tracks scores per round, changes the screen color based on the result, and announces the final winner at the end.

This is one of my very first programming projects in C++, built to apply real coding concepts in a fun and practical way.

---

## 🎓 Learning and Programming Foundation

This project was built as part of the practical applications in the **"Algorithms and Problem Solving - Level 2 (Course 5)"** course on [programmingadvices.com](https://programmingadvices.com), under the supervision of engineer **Mohammed Abu Hadhoud** 👑 ([LinkedIn](https://www.linkedin.com/in/abuhadhoud)).

This course gave me a solid foundation in logical thinking, problem decomposition, and writing clean, structured code.

---

## 🎮 How the Game Works

- The player chooses: **Stone**, **Paper**, or **Scissors**
- The computer picks randomly
- The player chooses how many rounds to play **(1 to 10)**
- Each round displays the result and changes the screen color:
  - 🟢 **Green** → Player wins
  - 🔴 **Red** → Computer wins
  - 🟡 **Yellow** → Draw
- At the end, full game results are displayed with the final winner
- The player can choose to play again

---

## 🧠 Programming Concepts Applied

- **Enums** (`enum`) — to represent game choices and round/game winners cleanly
- **Structures** (`struct`) — to group round data and game results together
- **Functions** — each task is handled by a small, focused, independent function
- **Switch statements** — to determine the round winner based on game rules
- **Random number generation** — for the computer's choice
- **Screen color control** — using `system("color")` to give visual feedback

---

## 📂 Project Files

| File | Description |
|------|-------------|
| `Rock-Paper-Scissors-FinalSolution.cpp` | The complete and structured source code |
| `README.md` | This file, explaining the project |

---

## 🛠 How to Run the Game

### Prerequisites
You need a C++ compiler installed (like **GCC** on Linux/Mac or **MinGW** on Windows).

### Steps

1. Clone this project:
```bash
git clone https://github.com/karimmesselmi/rock-paper-scissors-game.git
```

2. Go to the project folder:
```bash
cd rock-paper-scissors-game
```

3. Compile the code:
```bash
g++ Rock-Paper-Scissors-FinalSolution.cpp -o RPSGame
```

4. Run the game:

On Windows:
```bash
RPSGame
```
On Linux/Mac:
```bash
./RPSGame
```

---

## 👤 About Me

**Karim Messelmi** — Computer Science student, building my foundation one project at a time.

🔗 [LinkedIn](https://www.linkedin.com/in/karim-messelmi-34a02a379)

> *"Every project I build teaches me something new. This is just the beginning."* 🚀
