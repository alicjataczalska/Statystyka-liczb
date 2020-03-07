#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

main()
{
    srand(time(NULL));
    fstream plik;
    plik.open( "dane.txt", ios::out);
    cout<<"Podaj ilosc liczb: ";
    int n;
    cin>>n;

    for( int i=0; i<n; i++)
    {
        int o=rand()%10+1;
        plik<<o<<endl;

    }
    plik.close();
    plik.open( "dane.txt", ios::in);
   int tab[11]={};
    for(int i=0; i<n; i++)
    {
        int r;
        plik>>r;
        tab[r]++;

    }
    plik.close();
    plik.open( "liczby.txt", ios::out);
    for(int i=1; i<=10; i++ )
    {
        if (tab[i]!=0)
        {
            plik<<i<<": "<<tab[i]<<endl;
        }
    }
    plik.close();
    return 0;
}
