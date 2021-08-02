#include "StringLengthTask.h"
#include "Tester.h"

int main()
{
    ITask *task = new StringLengthTask();
    Tester *tester = new Tester(task, "./0.String/");
    tester->RunTests();
}