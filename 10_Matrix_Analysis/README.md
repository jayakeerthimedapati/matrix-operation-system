# Matrix Analysis

## Purpose
Prints a summary report about Matrix A (menu option 10: `Analyze Matrix A`).

## Existing Function
`void Matrix::analyze() const` (in `01_Matrix_Creation_Input/Matrix.cpp`)

It uses these helper functions: `isSquare()`, `isSymmetric()`, `isDiagonal()`, `isIdentity()`, `isZero()`, `isSparse()`, `trace()`, `maximum()`, `minimum()`, `totalSum()`.

## Validation
- Symmetric, diagonal, identity checks return `false` for non-square matrices.
- Trace is displayed only for square matrices.
- A matrix is reported as sparse when more than half of its elements are zero.

## Example
For A = [2 1 1; 1 3 2; 1 0 0]:
```
Rows              : 3
Columns           : 3
Type              : Square Matrix
Symmetric         : No
Diagonal          : No
Identity          : No
Zero Matrix       : No
Sparse Matrix     : No
Trace             : 5
Maximum Element   : 3
Minimum Element   : 0
Total Sum         : 11
Average           : 1.22
```
