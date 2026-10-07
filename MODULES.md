# Modules

| Module | Folder | Purpose | Main Functions |
|---|---|---|---|
| Matrix Creation & Input | `01_Matrix_Creation_Input` | `Matrix` class declaration and implementation; creates a matrix and reads elements | `Matrix(int r, int c)`, `input()`, `getRows()`, `getCols()` |
| Matrix Display | `02_Matrix_Display` | Prints a matrix in aligned form | `display()` |
| Matrix Addition | `03_Matrix_Addition` | Adds two matrices (A + B) | `operator+` |
| Matrix Subtraction | `04_Matrix_Subtraction` | Subtracts two matrices (A - B) | `operator-` |
| Matrix Multiplication | `05_Matrix_Multiplication` | Multiplies two matrices (A * B) | `operator*` |
| Matrix Transpose | `06_Matrix_Transpose` | Swaps rows and columns of A | `transpose()` |
| Scalar Multiplication | `07_Scalar_Multiplication` | Multiplies every element of A by a number | `scalarMultiply(int value)` |
| Determinant | `08_Determinant` | Determinant of 1x1, 2x2, 3x3 matrices | `determinant()`, `isSquare()` |
| Matrix Inverse | `09_Matrix_Inverse` | Inverse of 1x1, 2x2, 3x3 matrices | `inverse()`, `determinant()` |
| Matrix Analysis | `10_Matrix_Analysis` | Report on matrix type and statistics | `analyze()`, `isSymmetric()`, `isDiagonal()`, `isIdentity()`, `isZero()`, `isSparse()`, `trace()`, `maximum()`, `minimum()`, `totalSum()` |
| Validation | `11_Validation` | Size, dimension and menu input checks | Checks inside `main.cpp` and the `Matrix` operators |
| Operation History | `12_Operation_History` | Stores and shows up to 50 performed operations | `OperationHistory::add()`, `OperationHistory::display()` |
| Main Menu | `13_Main_Menu` | Menu-driven program connecting all modules | `main()` |

Modules 02 to 11 are documented in their own folders; their code lives in the `Matrix` class (`01_Matrix_Creation_Input/Matrix.cpp`) and `main.cpp`, so the whole project builds as **one** application.
