// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int liczba, n, suma = 0;
	cout << "Podaj n: ", cin >> n;
	int temp = n;
	if (n > 0) {
		for (int i = 0; i < n; i++){
			cout << "Podaj liczbe: ", cin >> liczba;
		if (liczba % 2 == 0) suma += liczba;
	}
		cout << suma << endl;
}
	else cout << "n musi byc liczba dodatnia\n";

	
}

