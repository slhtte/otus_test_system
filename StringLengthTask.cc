#include "StringLengthTask.h"

std::string StringLengthTask::Run(std::vector<std::string> &data)
{
    return std::to_string(data[0].length());
}