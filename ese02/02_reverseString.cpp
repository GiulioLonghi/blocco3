/*
SUP che prende una stringa dall'utente che può essere anche una frase, 
comprensiva quindi di spazi e
punteggiatura. 
Il programma ristampa la stessa stringa al contrario.
*/
#include <cctype>
#include <cstring>
#include <iostream>
#include <sstream>

using namespace std;

int main (int argc, const char * argv [])
{
    for (int i = argc-1; i >= 1; i--)
    {
        cout << argv [i] << " ";
    }
    
    cout << endl;
    
    return 0;
    
}








