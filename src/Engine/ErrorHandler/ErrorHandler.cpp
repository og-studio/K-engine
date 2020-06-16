#include "ErrorHandler.h"

namespace ENGINE
{

    std::string ErrorResult(ERRORDEF err, std::string additionalInfo)
    {
        switch (err)
        {

        case FILE_NOT_FOUND_CORRUPT:
            
            return "Error: " + additionalInfo + " is corrupted or missing!";

            break;
        
        case FILE_PERMISSION_ERROR:

            return "Error: You don't have permission to open: " + additionalInfo + ". Try running using elevated priviledges";

            break;
        

        default:
            break;
        }

        return 0;
    }

}