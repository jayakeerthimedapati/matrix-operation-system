#include <iostream>
#include <string>
#include "OperationHistory.h"
using namespace std;

OperationHistory::OperationHistory()
{
    count = 0;
}

void OperationHistory::add(string operation)
{
    if (count < 50)
    {
        history[count] = operation;
        count++;
    }
}

void OperationHistory::display() const
{
    cout << "\n========================================\n";
    cout << "          OPERATION HISTORY\n";
    cout << "========================================\n";

    if (count == 0)
    {
        cout << "No operations performed yet.\n";
        return;
    }

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". "
             << history[i] << endl;
    }
}
