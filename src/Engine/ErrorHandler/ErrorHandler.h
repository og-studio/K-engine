#pragma once

#include <iostream>
#include <string>

#include "Errors.h"

namespace ENGINE
{

    std::string ErrorResult(ERRORDEF err, const std::string additionalInfo);  

}