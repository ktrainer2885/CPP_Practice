#include <iostream>

using namespace std;

class letterByLetter
{
private:

    // Strings to hold inputs and output
    string str1;
    string str2;
    string strOut;

    // Sets the input strings and matches output string to the first input
    void getString()
    {
        cout << endl << "Please make sure both strings are the same length." << endl;
        cout << "Please type in the first string." << endl;
        getline(cin,str1);

        cout << endl << "Please type in the second string." << endl;
        getline(cin,str2);

        strOut = str1;
    }

    // Goes through a loop changing the Output string one letter at a time
    //  from the str1 to str2 characters using string array notation
    void changeStrings()
    {
        cout << endl << strOut << endl;

        for(int i = 0; i < str1.length(); i++)
        {
            strOut[i] = str2[i];

            if(str1[i] != str2[i])
            {
                cout << strOut << endl;
            }
        }
    }

    // true false check to make sure strings are same length
    bool sameStringLength(string x, string y)
    {
        return x.length() == y.length();
    }

    // function to set the strings and check that they are same length
    void setString()
    {
        getString();

        while(!sameStringLength(str1,str2))
        {
            getString();
        }
    }

public:

    //Constructor to run the program
    letterByLetter()
    {
        setString();
        changeStrings();
    }

};