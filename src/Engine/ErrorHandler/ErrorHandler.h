#pragma once

#include <iostream>
#include <string>

#include "Errors.h"

namespace ENGINE
{

    std::string ErrorResult(ERRORDEF err_t, const std::string additionalInfo_t);  

}