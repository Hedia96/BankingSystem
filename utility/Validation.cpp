using namespace std;
#include<string>
#include"Validation.hpp"
#include <cctype> // Required for isalpha()
#include<iostream>

/**
 * setName: the name must be alphabetic chars
 *  and min size 3 and max size 20.
setPassword: Password must be with min size 8 
and max size 20 without spaces. 

 * 
 */
//    "C_Cpp.errorSquiggles": "disabled"

  string Validation::checkName(string s)
    {
        if(s.length()>=3 && s.length()<21 )
        {
         
            // if(std::isalpha(s))
            for(int i=0;i<s.length();i++)
            {
                cout << s[i]<<endl;
            }

        }
return s;

    }
  /// @brief 
  /// @param s 
  /// @return 
   string Validation::checkPassword(string s)
    {
            return " ";
    }






