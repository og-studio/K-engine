#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "ErrorHandler/ErrorHandler.h"
#include "ErrorHandler/Errors.h"



using std::string;

namespace ENGINE
{
    class Settings
    {
        public:

            //----Variables----//
            string settingsFilePath; // Game settings file path


            //----Functions----///

            Settings();                         //basic constructor
            Settings(string SettingsFilePath);  //Loads the settings file
            ~Settings();

            void parseSettings(string settingsFile);


            
        private:
        ERRORDEF err;
        std::ifstream ifs;

        



    };
}