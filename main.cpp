#include <iostream>

using namespace std;

int main()
{
    char znak;
    int liczbaznakow=0;
    do
    {
        cout<<"Podaj znak(k=koniec): ";
        cin>>znak;
        liczbaznakow++;
    }
    while(znak!='k');
    cout<<"Ilosc wpisanych znakow to: "<<liczbaznakow<<endl;
}
