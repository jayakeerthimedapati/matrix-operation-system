# Matrix Multiplication

## Purpose
Multiplies matrix A by matrix B using the row-by-column method (menu option 7: `Multiply A * B`).

## Existing Function
`Matrix Matrix::operator*(const Matrix& B) const` (operator overloading, in `01_Matrix_Creation_Input/Matrix.cpp`)

## Validation
The **number of columns of A must equal the number of rows of B**. Otherwise it prints:
`Error: Columns of first matrix must equal rows of second matrix.` and returns an empty matrix. The result has `rows of A` x `columns of B` elements.

## Example
```
A = 2 1 1      B = 1 2 3      A * B = 13 17 21
    1 3 2          4 5 6              27 33 39
    1 0 0          7 8 9               1  2  3
```
