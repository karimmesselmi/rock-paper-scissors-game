# Rock-Paper-Scissors Game (C++) 🎮

A console-based Rock-Paper-Scissors game built in C++, where the player competes against the computer over multiple rounds. The game tracks scores, determines a winner per round, and announces the final game winner at the end.

This is one of my very first programming projects in C++, built to practice real coding concepts like **Enums**, **Structures**, and **Functions**.

---

## 🎓 Learning and Programming Foundation

This project was built as part of the practical applications in the **"Algorithms and Problem Solving - Level 2 (Course 5)"** course on [programmingadvices.com](https://programmingadvices.com), under the supervision of engineer **Mohammed Abu Hadhoud** 👑 ([LinkedIn](https://www.linkedin.com/in/abuhadhoud)).

This course gave me a solid foundation in logical thinking, problem decomposition, and writing clean, structured code.

---

## 🎮 How the Game Works

- The player chooses: **Stone**, **Paper**, or **Scissors**
- The computer picks randomly
- The game is played over **3 rounds**
- Each round has a winner (or a draw)
- At the end, the overall game winner is announced
- The player can choose to play again

---

## 📈 About This Version

Before watching the solution, I wrote a first version independently — it helped me understand where my logic was lacking and what I still needed to learn. This file is the final cleaned version, rebuilt from scratch after going through the course material properly.

### What changed in the final version:
- Used **Enums** (`enum`) for game choices and winners instead of raw numbers
- Used **Structures** (`struct`) to group round and game data together
- Broke the code into small, focused **Functions**
- Much easier to read, maintain, and extend

---

## 📂 Project Files

| File | Description |
|------|-------------|
| `Rock-Paper-Scissors-FinalSolution.cpp` | The improved and structured version |
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

3. Compile the final version:
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
