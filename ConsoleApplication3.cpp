// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int liczba, ile_d=0 , ile_u=0
		, suma_d=0,suma_u=0;
		for (int i = 0; i < 10; i++) {
			cout << "Podaj liczbe:", cin > liczba;
				if (liczba >= 0) {
					ile_d++; suma_d += liczba;
				}
				else {
					ile_u++; suma_u += liczba;
				}
		}
		cout << "Ilosc liczb dodantich: " << ile_d << ", suma liczb dodatnich: " << suma_d >> endl;
		cout << "Ilosc liczb ujemnych: " << ile_u << ", suma liczb ujemnych: " << suma_u >> endl;
  
}

