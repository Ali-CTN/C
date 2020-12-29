#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<locale.h> 

using namespace std;

int main ( )
{
    char mesaj[100], ch;
    int i, anahtar;

    cout << "Sifrelenmis Mesaji Girin: ";
    cin.getline(mesaj, 100);
    cout << "Anahtari Girin: ";
    cin >> anahtar;

    for (i = 0; mesaj[i] != '\0'; ++i)
    {
        ch = mesaj[i];

        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - anahtar;

            if (ch < 'a')
            {
                ch = ch + 'z' - 'a' + 1;
            }
            mesaj[i] = ch;
        }

        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - anahtar;

            if (ch > 'a')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            mesaj[i] = ch;
        }
    }

    cout << "Desifrelenmis Mesaj: " << mesaj;
	getch();
    return 0;
}
