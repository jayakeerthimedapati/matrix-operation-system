#include <iostream>
#include <iomanip>
#include "Matrix.h"
using namespace std;

// Constructor
Matrix::Matrix(int r, int c)
{
    rows = r;
    cols = c;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            data[i][j] = 0;
        }
    }
}

// Input matrix
void Matrix::input()
{
    cout << "Enter " << rows * cols << " elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> data[i][j];
        }
    }
}

// Display matrix
void Matrix::display() const
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(8) << data[i][j];
        }

        cout << endl;
    }
}

// Get rows
int Matrix::getRows() const
{
    return rows;
}

// Get columns
int Matrix::getCols() const
{
    return cols;
}

// Addition
Matrix Matrix::operator+(const Matrix& B) const
{
    if (rows != B.rows || cols != B.cols)
    {
        cout << "\nError: Both matrices must have the same dimensions.\n";
        return Matrix();
    }

    Matrix result(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] + B.data[i][j];
        }
    }

    return result;
}

// Subtraction
Matrix Matrix::operator-(const Matrix& B) const
{
    if (rows != B.rows || cols != B.cols)
    {
        cout << "\nError: Both matrices must have the same dimensions.\n";
        return Matrix();
    }

    Matrix result(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] - B.data[i][j];
        }
    }

    return result;
}

// Multiplication
Matrix Matrix::operator*(const Matrix& B) const
{
    if (cols != B.rows)
    {
        cout << "\nError: Columns of first matrix must equal "
             << "rows of second matrix.\n";

        return Matrix();
    }

    Matrix result(rows, B.cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < B.cols; j++)
        {
            result.data[i][j] = 0;

            for (int k = 0; k < cols; k++)
            {
                result.data[i][j] +=
                    data[i][k] * B.data[k][j];
            }
        }
    }

    return result;
}

// Transpose
Matrix Matrix::transpose() const
{
    Matrix result(cols, rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[j][i] = data[i][j];
        }
    }

    return result;
}

// Scalar multiplication
Matrix Matrix::scalarMultiply(int value) const
{
    Matrix result(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] * value;
        }
    }

    return result;
}

// Check square matrix
bool Matrix::isSquare() const
{
    return rows == cols;
}

// Check symmetric matrix
bool Matrix::isSymmetric() const
{
    if (!isSquare())
        return false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (data[i][j] != data[j][i])
                return false;
        }
    }

    return true;
}

// Check diagonal matrix
bool Matrix::isDiagonal() const
{
    if (!isSquare())
        return false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i != j && data[i][j] != 0)
                return false;
        }
    }

    return true;
}

// Check identity matrix
bool Matrix::isIdentity() const
{
    if (!isSquare())
        return false;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j && data[i][j] != 1)
                return false;

            if (i != j && data[i][j] != 0)
                return false;
        }
    }

    return true;
}

// Check zero matrix
bool Matrix::isZero() const
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (data[i][j] != 0)
                return false;
        }
    }

    return true;
}

// Check sparse matrix
bool Matrix::isSparse() const
{
    int zeroCount = 0;
    int total = rows * cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (data[i][j] == 0)
                zeroCount++;
        }
    }

    return zeroCount > total / 2;
}

// Trace
int Matrix::trace() const
{
    if (!isSquare())
        return 0;

    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        sum += data[i][i];
    }

    return sum;
}

// Maximum value
int Matrix::maximum() const
{
    int maxValue = data[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (data[i][j] > maxValue)
                maxValue = data[i][j];
        }
    }

    return maxValue;
}

// Minimum value
int Matrix::minimum() const
{
    int minValue = data[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (data[i][j] < minValue)
                minValue = data[i][j];
        }
    }

    return minValue;
}

// Total sum
int Matrix::totalSum() const
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += data[i][j];
        }
    }

    return sum;
}

// Determinant
double Matrix::determinant() const
{
    if (!isSquare())
    {
        return 0;
    }

    // 1 x 1 matrix
    if (rows == 1)
    {
        return data[0][0];
    }

    // 2 x 2 matrix
    if (rows == 2)
    {
        return (data[0][0] * data[1][1])
             - (data[0][1] * data[1][0]);
    }

    // 3 x 3 matrix
    if (rows == 3)
    {
        double det;

        det = data[0][0] *
              (data[1][1] * data[2][2]
             - data[1][2] * data[2][1])

            - data[0][1] *
              (data[1][0] * data[2][2]
             - data[1][2] * data[2][0])

            + data[0][2] *
              (data[1][0] * data[2][1]
             - data[1][1] * data[2][0]);

        return det;
    }

    cout << "Determinant is currently supported up to 3 x 3 matrices.\n";
    return 0;
}

// Inverse
Matrix Matrix::inverse() const
{
    if (!isSquare())
    {
        cout << "\nError: Inverse exists only for square matrices.\n";
        return Matrix();
    }

    double det = determinant();

    if (det == 0)
    {
        cout << "\nError: Inverse does not exist because "
             << "determinant is zero.\n";
        return Matrix();
    }

    // 1 x 1 inverse
    if (rows == 1)
    {
        Matrix result(1, 1);
        result.data[0][0] = 1.0 / data[0][0];
        return result;
    }

    // 2 x 2 inverse
    if (rows == 2)
    {
        Matrix result(2, 2);

        result.data[0][0] = data[1][1] / det;
        result.data[0][1] = -data[0][1] / det;
        result.data[1][0] = -data[1][0] / det;
        result.data[1][1] = data[0][0] / det;

        return result;
    }

    // 3 x 3 inverse
    if (rows == 3)
    {
        Matrix result(3, 3);

        result.data[0][0] =
            (data[1][1] * data[2][2]
            - data[1][2] * data[2][1]) / det;

        result.data[0][1] =
            (data[0][2] * data[2][1]
            - data[0][1] * data[2][2]) / det;

        result.data[0][2] =
            (data[0][1] * data[1][2]
            - data[0][2] * data[1][1]) / det;

        result.data[1][0] =
            (data[1][2] * data[2][0]
            - data[1][0] * data[2][2]) / det;

        result.data[1][1] =
            (data[0][0] * data[2][2]
            - data[0][2] * data[2][0]) / det;

        result.data[1][2] =
            (data[0][2] * data[1][0]
            - data[0][0] * data[1][2]) / det;

        result.data[2][0] =
            (data[1][0] * data[2][1]
            - data[1][1] * data[2][0]) / det;

        result.data[2][1] =
            (data[0][1] * data[2][0]
            - data[0][0] * data[2][1]) / det;

        result.data[2][2] =
            (data[0][0] * data[1][1]
            - data[0][1] * data[1][0]) / det;

        return result;
    }

    cout << "Inverse is currently supported up to 3 x 3 matrices.\n";
    return Matrix();
}

// Analyze matrix
void Matrix::analyze() const
{
    cout << "\n========================================\n";
    cout << "          MATRIX ANALYSIS\n";
    cout << "========================================\n";

    cout << "Rows              : " << rows << endl;
    cout << "Columns           : " << cols << endl;

    cout << "Type              : ";

    if (isSquare())
        cout << "Square Matrix";
    else
        cout << "Rectangular Matrix";

    cout << endl;

    cout << "Symmetric         : "
         << (isSymmetric() ? "Yes" : "No") << endl;

    cout << "Diagonal          : "
         << (isDiagonal() ? "Yes" : "No") << endl;

    cout << "Identity          : "
         << (isIdentity() ? "Yes" : "No") << endl;

    cout << "Zero Matrix       : "
         << (isZero() ? "Yes" : "No") << endl;

    cout << "Sparse Matrix     : "
         << (isSparse() ? "Yes" : "No") << endl;

    if (isSquare())
    {
        cout << "Trace             : "
             << trace() << endl;
    }

    cout << "Maximum Element   : "
         << maximum() << endl;

    cout << "Minimum Element   : "
         << minimum() << endl;

    cout << "Total Sum         : "
         << totalSum() << endl;

    double average =
        (double)totalSum() / (rows * cols);

    cout << fixed << setprecision(2);

    cout << "Average           : "
         << average << endl;

    cout << "========================================\n";
}
