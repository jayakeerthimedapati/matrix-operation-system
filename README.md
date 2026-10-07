# SMART MATRIX ANALYSIS & DECISION SYSTEM

*An Object-Oriented C++ Matrix Processing and Analysis Tool*

## Project Description
A menu-driven console application written in C++ that lets the user create two matrices (A and B), perform common matrix operations, analyze a matrix, and view a history of the operations performed.

## Objectives
- Apply object-oriented programming concepts in C++ to a practical problem.
- Implement matrix operations using a `Matrix` class and operator overloading.
- Validate user input and matrix dimensions before each operation.
- Keep a record of performed operations using a separate `OperationHistory` class.

## Features
- Create Matrix A and Matrix B (size 1 to 10 rows and columns)
- Display matrices
- Addition (`A + B`)
- Subtraction (`A - B`)
- Multiplication (`A * B`)
- Transpose of Matrix A
- Scalar multiplication of Matrix A
- Matrix analysis: square/rectangular, symmetric, diagonal, identity, zero, sparse, trace, maximum, minimum, total sum, average
- Determinant of Matrix A (1x1, 2x2, 3x3)
- Inverse of Matrix A (1x1, 2x2, 3x3)
- Operation history (up to 50 entries)
- Input and dimension validation

## OOP Concepts Used
- Classes (`Matrix`, `OperationHistory`)
- Objects
- Encapsulation (private data members with public member functions)
- Abstraction
- Constructors (`Matrix(int r = 0, int c = 0)`, `OperationHistory()`)
- Member Functions
- Operator Overloading (`+`, `-`, `*`)
- Arrays (2D `int` array for matrix data, string array for history)
- Loops
- Conditional Statements

## Project Structure
```
SMART_MATRIX_ANALYSIS_DECISION_SYSTEM/
│
├── 01_Matrix_Creation_Input/
│   ├── Matrix.h
│   └── Matrix.cpp
├── 02_Matrix_Display/
│   └── README.md
├── 03_Matrix_Addition/
│   └── README.md
├── 04_Matrix_Subtraction/
│   └── README.md
├── 05_Matrix_Multiplication/
│   └── README.md
├── 06_Matrix_Transpose/
│   └── README.md
├── 07_Scalar_Multiplication/
│   └── README.md
├── 08_Determinant/
│   └── README.md
├── 09_Matrix_Inverse/
│   └── README.md
├── 10_Matrix_Analysis/
│   └── README.md
├── 11_Validation/
│   └── README.md
├── 12_Operation_History/
│   ├── OperationHistory.h
│   └── OperationHistory.cpp
├── 13_Main_Menu/
│   └── main.cpp
├── README.md
├── MODULES.md
└── .gitignore
```

## Modules
| # | Module | Description |
|---|---|---|
| 01 | Matrix Creation & Input | `Matrix` class: constructor, `input()`, `getRows()`, `getCols()` |
| 02 | Matrix Display | `display()` prints the matrix |
| 03 | Matrix Addition | `operator+` |
| 04 | Matrix Subtraction | `operator-` |
| 05 | Matrix Multiplication | `operator*` |
| 06 | Matrix Transpose | `transpose()` |
| 07 | Scalar Multiplication | `scalarMultiply()` |
| 08 | Determinant | `determinant()` |
| 09 | Matrix Inverse | `inverse()` |
| 10 | Matrix Analysis | `analyze()` and its helper checks |
| 11 | Validation | Size and dimension checks |
| 12 | Operation History | `OperationHistory` class |
| 13 | Main Menu | `main()` menu loop |

See [MODULES.md](MODULES.md) for the function-level mapping.

## How to Compile
All modules build into **one** program. From the project root:

```bash
g++ 01_Matrix_Creation_Input/Matrix.cpp \
    12_Operation_History/OperationHistory.cpp \
    13_Main_Menu/main.cpp \
    -o SmartMatrix
```

Run:

```bash
./SmartMatrix
```
(On Windows: `SmartMatrix.exe`)

### Dev-C++
1. Create a new Console Application project (C++).
2. Add `Matrix.h`, `Matrix.cpp`, `OperationHistory.h`, `OperationHistory.cpp` and `main.cpp` to the project (Project > Add to Project).
3. Compile and run (F11).

`main.cpp` includes the headers with relative paths (`../01_Matrix_Creation_Input/Matrix.h`), so keep the folder structure unchanged.

## Sample Operations
Example matrices:
```
A = 2 1 1      B = 1 2 3
    1 3 2          4 5 6
    1 0 0          7 8 9
```

**Addition (option 5)**
```
       3       3       4
       5       8       8
       8       8       9
```
**Subtraction (option 6)**
```
       1      -1      -2
      -3      -2      -4
      -6      -8      -9
```
**Multiplication (option 7)**
```
      13      17      21
      27      33      39
       1       2       3
```
**Transpose of A (option 8)**
```
       2       1       1
       1       3       0
       1       2       0
```
**Scalar multiplication of A by 3 (option 9)**
```
       6       3       3
       3       9       6
       3       0       0
```
**Determinant of A (option 11):** `-1`

**Inverse of A (option 12)**
```
       0       0       1
      -2       1       3
       3      -1      -5
```
**Matrix analysis of A (option 10):** Square Matrix, Symmetric: No, Diagonal: No, Identity: No, Zero: No, Sparse: No, Trace: 5, Maximum: 3, Minimum: 0, Total Sum: 11, Average: 1.22

## Team Project
This is a college C++ Object-Oriented Programming team project.
