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
        std::vector <string> properties = {"debugKey","resX","resY","isFullscreen","volume_Master","volume_Music","volume_UI","volume_SFX"}; //settings variable names 

        ERRORDEF err;
        std::ifstream ifs;
        std::vector <string> settingsFileContents;  
        string line; 

        //----Settings--Variables----//
        int debugKey; //optional
        
        //--Video--//

        int resX;     // screen resolution X
        int resY;     // screen resolution Y
        bool isFullscreen; //fullscreen ON/OFF

        //--Audio--//
        int volume_Master;
        int volume_Music;
        int volume_UI;
        int volume_SFX;

        
        



    };
}