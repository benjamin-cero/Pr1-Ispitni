#include<iostream>
using namespace std;


/*Napisati program koji simulira bacanje 3 kockice (jedna kockica ima 6 strana i na tim stranama su brojevi 1 - 6). Simuliranje bacanja svake kockice ostvariti funkcijom *rand() % 6 + 1*. Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju isti brojevi na sve tri kockice (<i>npr. u šestom bacanju se dobiju brojevi 2, 2, 2, a u sedmom 4, 4, 4 na sve tri kockice</i>). 

**Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov.** 

**Nije potrebno tražiti bilo kakav unos od  korisnika.**
*/

void main()
{
	srand(time(NULL));
	int broj_bacanja = 0;
	int broj_istih = 0;

	do
	{
		int kocka1 = rand() % 6 + 1;
		int kocka2 = rand() % 6 + 1;
		int kocka3 = rand() % 6 + 1;
		cout << kocka1 << endl;
		cout << kocka2 << endl;
		cout << kocka3 << endl;
		if (kocka1 == kocka2 && kocka2 == kocka3)
		{
			broj_istih++;
		}

		else
			broj_istih = 0;

		broj_bacanja++;

	} while (broj_istih < 2);

	cout << "Tri ista broja dobila su se dva puta uzastopno nakon " << broj_bacanja << " bacanja" << endl;
	
	system("pause");
}


