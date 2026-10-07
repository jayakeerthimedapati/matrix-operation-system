# Matrix Inverse

## Purpose
Finds the inverse of Matrix A (menu option 12: `Find Inverse of A`).

## Existing Function
`Matrix Matrix::inverse() const` (in `01_Matrix_Creation_Input/Matrix.cpp`)

Supporting functions: `isSquare()` and `determinant()`

## Validation
- The matrix must be **square**. Otherwise: `Error: Inverse exists only for square matrices.`
- The determinant must **not be zero**. Otherwise: `Error: Inverse does not exist because determinant is zero.`
- Supported sizes are **1 x 1, 2 x 2 and 3 x 3**.

## Example
```
A = 2 1 1         Inverse of A =  0  0  1
    1 3 2                        -2  1  3
    1 0 0                         3 -1 -5
```

## Note
Matrix elements are stored as `int` (as in the original code), so inverse values that are not whole numbers are truncated when stored.
