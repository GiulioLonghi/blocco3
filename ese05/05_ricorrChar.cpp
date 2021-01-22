/*
    programs that counts occurences in strings
*/

#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

#define L 1000
#define FILENL 30
#define ALPHALEN 26
#define OFFSET 97 //num della a

//con versione normale senza const
int countChars (const char toCount [], int alphabet []) {
    int i = 0;
    char c = toCount[0];

    while (c != '\0')
    {
        if (isalpha(c)){
            c = tolower (c);
            alphabet [c - OFFSET]++;
        }
        i++;
        c = toCount [i];
    }
    return i;
}

int main ()
{
    int alphabet[ALPHALEN] = {};
    char input[L];

    //read string from console
    /*
    cout << "Enter a string to check: ";
    cin.getline(input, sizeof(input));

    cout << "Examined " << countChars (input, alphabet)
     << "chars. " << endl;

    */

    // extended exercise

    int totChars = 0;
    cout << "Enter filename to process: ";
    cin.getline (input, sizeof(input));
    string line;
    ifstream fileHandle(input);
    if (fileHandle.is_open()){
        while (getline(fileHandle, line)){
            const char * cStr = line.c_str();

            totChars += countChars(cStr, alphabet);
        }
        fileHandle.close();

        cout << "Examined" << totChars << " chars." << endl;
    }
    else {
        cout << "Error opening file" << endl;
        return -1;
    }

    for (int i = 0; i < ALPHALEN; i++)
    {
        cout << (char) (i + OFFSET) << "\t" << alphabet [i] << endl;
    }
    
}