/*
Localizzare in una stringa tutte le occorrenze di un determinato carattere. Le stringhe in ingresso sono
composte di sole lettere minuscole e spazi. Il programma stampa la stessa stringa in ingresso con le
occorrenze trovate convertite a lettere maiuscole. Stampa inoltre un conteggio delle occorrenze.
*/
#include <string.h>
#include <iostream>
#include <cctype>

using namespace std;

char  toUpper ( char carattere);

int main (int argc, char ** argv)
{
    if (argc < 2){
        cout << "ERROR! Too few arguments! " << endl;
        return -1;
    }

    char toFind = argv [1][0];
    char carattere;
    int count = 0;

    for (int i = 2; i < argc; i++)
    {
        for (int j = 0; j < strlen (argv[i]); j++)
        {
            carattere = argv [i][j];
            if (carattere == toFind){
                count++;
                argv[i][j] = toUpper (carattere);
            }
        }
        
    }

    cout << "New string: ";
    for (int i = 2; i < argc; i++){
        cout << argv[i] << " ";
    }

    cout << endl << "Letter " << toFind << " found " << count << " times" << endl;

    return 0;
    
}

char toUpper (char carattere)
{
    int ascii_code = (int) carattere;

    char newChar = (char ) (ascii_code - 32);

    return newChar;
}










