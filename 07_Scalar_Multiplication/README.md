# Scalar Multiplication

## Purpose
Multiplies every element of Matrix A by an integer entered by the user (menu option 9: `Scalar Multiplication of A`).

## Existing Function
`Matrix Matrix::scalarMultiply(int value) const` (in `01_Matrix_Creation_Input/Matrix.cpp`)

## Validation
Works for any matrix size. The scalar is read as an `int` in `main.cpp`.

## Example
With scalar value `3`:
```
A = 2 1 1         3 * A = 6 3 3
    1 3 2                 3 9 6
    1 0 0                 3 0 0
```
