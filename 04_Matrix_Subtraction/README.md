# Matrix Subtraction

## Purpose
Subtracts matrix B from matrix A element by element (menu option 6: `Subtract A - B`).

## Existing Function
`Matrix Matrix::operator-(const Matrix& B) const` (operator overloading, in `01_Matrix_Creation_Input/Matrix.cpp`)

## Validation
Both matrices must have the **same number of rows and columns**. Otherwise it prints:
`Error: Both matrices must have the same dimensions.` and returns an empty matrix.

## Example
```
A = 2 1 1      B = 1 2 3      A - B =  1 -1 -2
    1 3 2          4 5 6              -3 -2 -4
    1 0 0          7 8 9              -6 -8 -9
```
