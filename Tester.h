#ifndef _TESTER_
#define _TESTER_

#include "StringLengthTask.h"
#include <ctime>

class Tester
{
private:
    ITask *task;
    std::string path;
    bool RunTest(std::ifstream &inFile, std::ifstream &outFile);

public:
    Tester(ITask *task, std::string path);
    void RunTests();
};

#endif