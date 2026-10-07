#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
private:
    int rows;
    int cols;
    int data[10][10];

public:

    // Constructor
    Matrix(int r = 0, int c = 0);

    // Input matrix
    void input();

    // Display matrix
    void display() const;

    // Get rows
    int getRows() const;

    // Get columns
    int getCols() const;

    // Addition
    Matrix operator+(const Matrix& B) const;

    // Subtraction
    Matrix operator-(const Matrix& B) const;

    // Multiplication
    Matrix operator*(const Matrix& B) const;

    // Transpose
    Matrix transpose() const;

    // Scalar multiplication
    Matrix scalarMultiply(int value) const;

    // Check square matrix
    bool isSquare() const;

    // Check symmetric matrix
    bool isSymmetric() const;

    // Check diagonal matrix
    bool isDiagonal() const;

    // Check identity matrix
    bool isIdentity() const;

    // Check zero matrix
    bool isZero() const;

    // Check sparse matrix
    bool isSparse() const;

    // Trace
    int trace() const;

    // Maximum value
    int maximum() const;

    // Minimum value
    int minimum() const;

    // Total sum
    int totalSum() const;

    // Determinant
    double determinant() const;

    // Inverse
    Matrix inverse() const;

    // Analyze matrix
    void analyze() const;
};

#endif
