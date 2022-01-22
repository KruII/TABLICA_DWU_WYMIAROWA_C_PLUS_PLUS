#include "icludy.h"

using namespace std;
bool wylowana=false;
string tab[2][5],haslo,haslo2,szufladki[7],wynik[7];
int main(){
    //setlocale(LC_CTYPE, "Polish");
    cout<<"Podaj haslo (10): ";
    cin>>haslo;
    cout<<"Podaj wyraz do zwrocenia (7): ";
    cin>>haslo2;
    for (int b = 0; b < 2; b++)
    {
        for (int i = 0; i < 5; i++)
        {
            tab[b][i]=haslo[i+5*b];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        wynik[i]=haslo2[i];
    }
    
    cout<<"\nWpisane haslo to: \n";
    for (int b = 0; b < 2; b++)
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<b+1<<": "<<i+1<<": "<<tab[b][i]<<endl;
        }
    }
    cout<<"\nZwrocone haslo to: \n";
    for (int c = 0; c < 7; c++)
    {
        for (int b = 0; b < 2; b++)
        {
            for (int i = 0; i < 5; i++)
            {
                if (tab[b][i]==wynik[c] && wylowana!=true)
                {
                    cout<<tab[b][i];
                    wylowana=true;
                    szufladki[c]="Szufladka \""+tab[b][i]+"\": ["+to_string(b+1)+"] ["+to_string(i+1)+"]\n";
                }
            }
        }
        wylowana=false;
    }
    cout<<"\n\nNumer Szuflady: \n";
    for (int i = 0; i < 7; i++)
    {
        cout<<szufladki[i];
    }
    system("pause");
    return 0;
} 
