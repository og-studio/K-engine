#include "ErrorHandler.h"

namespace ENGINE
{

    std::string ErrorResult(ERRORDEF err_t, const std::string additionalInfo_t)
    {
        switch (err_t)
        {

        case FILE_NOT_FOUND_CORRUPT:
            
            return "Error: " + additionalInfo_t + " is corrupted or missing!";

            break;
        
        case FILE_PERMISSION_ERROR:

            return "Error: You don't have permission to open: " + additionalInfo_t + ". Try running using elevated priviledges";

            break;
        

        default:
            break;
        }

        return 0;
    }

}