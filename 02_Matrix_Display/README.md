# Matrix Display

## Purpose
Prints a matrix to the console in aligned rows and columns. Used by menu options 3 and 4 and to show the result of every other operation.

## Existing Function
`void Matrix::display() const` (in `01_Matrix_Creation_Input/Matrix.cpp`)

Supporting function: `getRows()` / `getCols()` return the matrix dimensions.

## Validation
- Menu option 3 (Display Matrix A) checks that Matrix A has been created first (`matrixCreated`). If not, it prints `Please create Matrix A first.`
- Each element is printed with `setw(8)` so columns line up.

## Example
Matrix A of size 3 x 3:

```
       2       1       1
       1       3       2
       1       0       0
```
