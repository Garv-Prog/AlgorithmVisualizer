# 🎨 AlgorithmVisualizer

A simple **C++ console-based app** that visualizes classic sorting algorithms (like Bubble Sort) directly in the terminal.
Users can watch algorithms step by step as they process arrays.

---

## ✨ Features
- Console visualization of sorting algorithms using ASCII bars (`#`).
- Step-by-step view with highlighted comparisons.
- Easy-to-extend architecture — add new algorithms by just creating a new class.


---

## ⚡ Getting Started

### 🔹 1. Clone Repository
```bash
git clone https://github.com/<your-username>/AlgorithmVisualizer.git
cd AlgorithmVisualizer
```

### 🔹 2. Compile

Make sure you have g++ (MinGW on Windows or GCC/Clang on Linux/Mac) installed.

```bash
g++ -std=c++14 main.cpp Visualizer.cpp algorithms/BubbleSort.cpp -o AlgorithmVisualizer
```

### 🔹 Run

```bash
./AlgorithmVisualizer
```
