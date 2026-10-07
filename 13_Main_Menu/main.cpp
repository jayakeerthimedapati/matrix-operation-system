#include <iostream>
#include <string>
#include "../01_Matrix_Creation_Input/Matrix.h"
#include "../12_Operation_History/OperationHistory.h"
using namespace std;

// ============================================
// MAIN PROGRAM
// ============================================

int main()
{
    Matrix A;
    Matrix B;

    bool matrixCreated = false;

    OperationHistory history;

    int choice;

    do
    {
        cout << "\n\n";
        cout << "================================================\n";
        cout << "     SMART MATRIX ANALYSIS & DECISION SYSTEM\n";
        cout << "================================================\n";

        cout << "1. Create Matrix A\n";
        cout << "2. Create Matrix B\n";
        cout << "3. Display Matrix A\n";
        cout << "4. Display Matrix B\n";
        cout << "5. Add A + B\n";
        cout << "6. Subtract A - B\n";
        cout << "7. Multiply A * B\n";
        cout << "8. Transpose Matrix A\n";
        cout << "9. Scalar Multiplication of A\n";
        cout << "10. Analyze Matrix A\n";
        cout << "11. Find Determinant of A\n";
        cout << "12. Find Inverse of A\n";
        cout << "13. View Operation History\n";
        cout << "14. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int r, c;

            cout << "\nEnter rows: ";
            cin >> r;

            cout << "Enter columns: ";
            cin >> c;

            if (r < 1 || r > 10 || c < 1 || c > 10)
            {
                cout << "\nInvalid size! Use 1 to 10.\n";
                continue;
            }

            A = Matrix(r, c);

            cout << "\nEnter Matrix A:\n";
            A.input();

            matrixCreated = true;

            history.add("Matrix A created");
        }

        else if (choice == 2)
        {
            int r, c;

            cout << "\nEnter rows: ";
            cin >> r;

            cout << "Enter columns: ";
            cin >> c;

            if (r < 1 || r > 10 || c < 1 || c > 10)
            {
                cout << "\nInvalid size! Use 1 to 10.\n";
                continue;
            }

            B = Matrix(r, c);

            cout << "\nEnter Matrix B:\n";
            B.input();

            history.add("Matrix B created");
        }

        else if (choice == 3)
        {
            if (!matrixCreated)
            {
                cout << "\nPlease create Matrix A first.\n";
                continue;
            }

            cout << "\nMatrix A:\n";
            A.display();

            history.add("Matrix A displayed");
        }

        else if (choice == 4)
        {
            cout << "\nMatrix B:\n";
            B.display();

            history.add("Matrix B displayed");
        }

        else if (choice == 5)
        {
            Matrix result = A + B;

            if (result.getRows() != 0)
            {
                cout << "\nA + B:\n";
                result.display();

                history.add("Matrix addition performed");
            }
        }

        else if (choice == 6)
        {
            Matrix result = A - B;

            if (result.getRows() != 0)
            {
                cout << "\nA - B:\n";
                result.display();

                history.add("Matrix subtraction performed");
            }
        }

        else if (choice == 7)
        {
            Matrix result = A * B;

            if (result.getRows() != 0)
            {
                cout << "\nA * B:\n";
                result.display();

                history.add("Matrix multiplication performed");
            }
        }

        else if (choice == 8)
        {
            Matrix result = A.transpose();

            cout << "\nTranspose of Matrix A:\n";
            result.display();

            history.add("Matrix A transposed");
        }

        else if (choice == 9)
        {
            int value;

            cout << "\nEnter scalar value: ";
            cin >> value;

            Matrix result = A.scalarMultiply(value);

            cout << "\nScalar Multiplication Result:\n";
            result.display();

            history.add("Scalar multiplication performed");
        }

        else if (choice == 10)
        {
            A.analyze();

            history.add("Matrix A analyzed");
        }

        else if (choice == 11)
        {
            if (!A.isSquare())
            {
                cout << "\nError: Determinant exists only for square matrices.\n";
            }
            else if (A.getRows() > 3)
            {
                cout << "\nDeterminant is currently supported only "
                     << "up to 3 x 3 matrices.\n";
            }
            else
            {
                cout << "\nDeterminant of Matrix A = "
                     << A.determinant() << endl;

                history.add("Determinant of Matrix A calculated");
            }
        }

        else if (choice == 12)
        {
            if (!A.isSquare())
            {
                cout << "\nError: Inverse exists only for square matrices.\n";
            }
            else if (A.getRows() > 3)
            {
                cout << "\nInverse is currently supported only "
                     << "up to 3 x 3 matrices.\n";
            }
            else
            {
                Matrix result = A.inverse();

                if (result.getRows() != 0)
                {
                    cout << "\nInverse of Matrix A:\n";
                    result.display();

                    history.add("Inverse of Matrix A calculated");
                }
            }
        }

        else if (choice == 13)
        {
            history.display();
        }

        else if (choice == 14)
        {
            cout << "\nThank you for using the Smart Matrix System!\n";
        }

        else
        {
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 14);

    return 0;
}