/*
SUP che prende una stringa del tipo "923D" ed estrae il numero, convertendolo in int. La lettera D è
sempre alla ne della stringa. Verificare il funzionamento anche con numeri negativi. Esistono diversi
modi per fare questa conversione, ma probabilmente la soluzione più semplice è usare il metodo nativo
C++, che è la prima soluzione proposta dal sito.
*/

#include <cctype>
#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

#define len 3

int convertString(const char* str);

int main (int argc, const char * argv [])
{
    if (argc != 5){
        cout << "Wrong number of arguments!";
        return -1;
    }

    int v [len];

    for (int i = 0; i < len; i++){
        //v [0] = convertString (argv [i+1]);
        v [i] = atoi (argv [i+1]);
    }
    
    cout << "Array: " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
    
}

int convertString(const char* str)
{
    std::string input(str);
    std::stringstream strStream(input);

    int result;

    strStream >> result;

    if (!str) {
        // The conversion failed
        cout << "Failed parsing input parameters" << endl;
    }

    return result;
}


