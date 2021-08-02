#ifndef _STRINGLENGTHTASK_
#define _STRINGLENGTHTASK_

#include "ITask.h"

class StringLengthTask : public ITask
{
    virtual std::string Run(std::vector<std::string> &data) override;
};

#endif