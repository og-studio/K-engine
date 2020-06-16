#include "Settings.h"




namespace ENGINE
{
    


    Settings::Settings(string SettingsFilePath)
    {
        parseSettings(SettingsFilePath);
    }

    Settings::Settings()
    {

    }

    Settings::~Settings()
    {

    }

    void Settings::parseSettings(string settingsFile)
    {
        try
        {
            ifs.open("settings.cfg");
            if (ifs.is_open())
            {
                throw ENGINE::ErrorResult(FILE_NOT_FOUND_CORRUPT,"settings.cfg");
            }
            if(ifs.bad() || !ifs.is_open())
            {
                err = FILE_NOT_FOUND_CORRUPT;
                throw ENGINE::ErrorResult(FILE_NOT_FOUND_CORRUPT,"settings.cfg");
                
            }

            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

}

