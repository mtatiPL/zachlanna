#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int tab[5][5];
int suma=0;
int obecna;
void metodaZachlanna()
{
    srand(time(NULL));
    for(int i=1; i<=5; i++)
    {
        for(int z=1; z<=5; z++)
        {

            tab[i][z]=rand()%9+1;
            cout<<tab[i][z]<<"| ";


        }
        cout<<endl;

    }

}

int sumaZachlanna(){



for(int i=1; i<=5; i++)
    {
        for(int z=1; z<=5; z++)
        {






            obecna=tab[1][1];
            if(tab[i+1][z]>tab[i][z+1])
            {
                suma=obecna+tab[i+1][z];
                 cout<<obecna<<"+"<<tab[i+1][z]<<"="<<suma<<endl;;
                obecna=tab[i+1][z];

            }
            else
            {
                suma=obecna+tab[i][z+1];
                cout<<obecna<<"+"<<tab[i][z+1];
                obecna=tab[i][z+1];
            }

        }
        cout<<endl;

    }
    cout<<"suma metody zachlannej wynosi "<<suma<<endl;
}





int main()
{
    metodaZachlanna();
sumaZachlanna();

    return 0;
}
