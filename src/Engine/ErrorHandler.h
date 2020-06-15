#include <iostream>


namespace ENGINE 
{

    namespace ErrorHandler
    {
        
        void returnError(int errorCode)
        {
            switch (errorCode)
            {
            case 1:
                //Description: The file is corrupted


                break;

            case 2:
                //Description: The file doesn't exists
                
                

                break;
            
            default:
                break;
            }
        }

    }

}