#ifndef OPERATION_HISTORY_H
#define OPERATION_HISTORY_H

#include <string>

class OperationHistory
{
private:
    std::string history[50];
    int count;

public:

    OperationHistory();

    void add(std::string operation);

    void display() const;
};

#endif
