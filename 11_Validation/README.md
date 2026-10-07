# Validation

## Purpose
Collects the input and dimension checks that protect the program from invalid operations. In the existing code these checks are spread across `Matrix.cpp` and `main.cpp`; this folder documents them (no separate source file is needed).

## Existing Function
| Check | Where | Behaviour |
|---|---|---|
| Matrix size 1 to 10 | `main.cpp` (options 1 and 2) | `Invalid size! Use 1 to 10.` |
| Matrix A created first | `main.cpp` (option 3) | `Please create Matrix A first.` |
| Same dimensions | `operator+`, `operator-` | `Both matrices must have the same dimensions.` |
| Columns of A = rows of B | `operator*` | `Columns of first matrix must equal rows of second matrix.` |
| Square matrix | `isSquare()`, option 11 and 12 | Determinant / inverse only for square matrices |
| Size up to 3 x 3 | option 11 and 12 | Determinant / inverse supported up to 3 x 3 |
| Non-zero determinant | `inverse()` | `Inverse does not exist because determinant is zero.` |
| Menu choice | `main.cpp` | `Invalid choice! Please try again.` |

## Validation
See the table above for the exact rule of each check.

## Example
Entering rows = 12 for Matrix A prints `Invalid size! Use 1 to 10.` and returns to the menu.
