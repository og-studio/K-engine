#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "ErrorHandler.h"

namespace ENGINE
{

    void parseSettings(std::string SettingsFilePath)
    {
        std::fstream fs;
         
        fs.open(SettingsFilePath);
        if(fs.bad())
        {
            ENGINE::ErrorHandler::returnError(0);
        }
       
    }
}