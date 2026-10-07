# Determinant

## Purpose
Calculates the determinant of Matrix A (menu option 11: `Find Determinant of A`).

## Existing Function
`double Matrix::determinant() const` (in `01_Matrix_Creation_Input/Matrix.cpp`)

Supporting function: `bool Matrix::isSquare() const`

## Validation
- The matrix must be **square**. Otherwise `main.cpp` prints `Error: Determinant exists only for square matrices.`
- Supported sizes are **1 x 1, 2 x 2 and 3 x 3**. Larger matrices print a message that determinant is supported only up to 3 x 3.

## Example
```
A = 1 2
    3 4

Determinant of Matrix A = -2
```
