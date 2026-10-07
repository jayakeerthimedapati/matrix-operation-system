# Matrix Addition

## Purpose
Adds two matrices element by element (menu option 5: `Add A + B`).

## Existing Function
`Matrix Matrix::operator+(const Matrix& B) const` (operator overloading, in `01_Matrix_Creation_Input/Matrix.cpp`)

## Validation
Both matrices must have the **same number of rows and columns**. Otherwise the operator prints:
`Error: Both matrices must have the same dimensions.` and returns an empty matrix, which `main.cpp` detects with `getRows() != 0` so nothing is displayed or recorded.

## Example
```
A = 2 1 1      B = 1 2 3      A + B = 3 3 4
    1 3 2          4 5 6              5 8 8
    1 0 0          7 8 9              8 8 9
```
