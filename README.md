# Bounded Post Correspondence Problem (PCP) Simulator

A C++ simulator that models the **Post Correspondence Problem (PCP)**, a classic undecidable problem in the Theory of Computation (TOC), utilizing recursive backtracking to explore matching string sequences within a bounded search depth.

## 📌 Project Overview
The Post Correspondence Problem, introduced by Emil Post, consists of two lists of strings, $A$ and $B$. The goal is to find a sequence of indices $i_1, i_2, \dots, i_k$ such that:

$$a_{i_1}a_{i_2}\dots a_{i_k} = b_{i_1}b_{i_2}\dots b_{i_k}$$

Because PCP is **undecidable**, no general algorithm can determine a solution for all possible inputs. This simulator demonstrates these computational limitations by evaluating string pairs recursively up to a strict depth limit ($depth = 10$).

---

## ⚙️ Features & Methodology
* **Recursive Backtracking:** Dynamically explores decision trees by appending string pairs and checking for structural equality.
* **Depth-Bounded Search:** Mitigates the infinite state space of undecidable problems by setting an execution threshold.
* **Real-time Sequence Mapping:** Outputs the exact indices and the final matched string sequence upon discovery.

---

## 🚀 How to Run the Project

### Prerequisites
Make sure you have a C++ compiler installed (e.g., `g++`).

### Execution Steps
1. Clone the repository:
   ```bash
   git clone [https://github.com/yourusername/pcp-simulator.git](https://github.com/yourusername/pcp-simulator.git)
   cd pcp-simulator/src
