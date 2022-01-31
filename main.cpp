#include <iostream>
#include <cctype>

using namespace std;

int dekoder(string wyraz)
{
string tablica("ABCDEFGHIKLMNOPQRSTVXYZ");
int tablica2[]{1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500};
int wynik{};
for(auto znak : wyraz)
{
    znak = toupper(znak);
    for(unsigned int i = 0 ; i < tablica.size() ; i++)
    {
        if(znak==tablica[i])
        {
            wynik += tablica2[i];
            continue;
        }
    }
}
return wynik;
}

int main()
{
    string wyraz;
    cin >> wyraz ;
    cout << dekoder(wyraz) << endl; ;
    return 0;
}
