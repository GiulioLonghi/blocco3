#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (int argc, const char * argv[])
{
    if (argc != 2 ){
        cout << "ERROR! Wrong number of arguments!" << endl;
        return -1;
    }

    int dim = atoi (argv[1]);
    long long int array_1 [dim];
    long long int array_2 [dim];
    long long int somma [dim];
    srand(time(NULL));  // inizializzo il generatore di numeri pseudo-casuali

    cout << "Array somma: " << endl;
    for (int i = 0; i < dim; i++)
    {
        array_1 [i] = rand()%6+1;
        array_2 [i] = rand()%6+1;
        somma [i] = array_1[i] + array_2[i];
        cout << somma[i] << " ";
    }

    cout << endl;
    float probabilita;

    for (int i = 0; i < dim; i++)
    {
        int count = 1;
        int num = somma [i];
        for (int j = i + 1; j < dim; j++)
        {
            if (num == somma[j]){
                count ++;
                somma [j] = 0;
            }
        }
        probabilita = ((count*100)/dim);
        if (num != 0)
            cout << "La somma " << num << " : " << probabilita << "%" << endl;
        
    }
    
    return 0;
}