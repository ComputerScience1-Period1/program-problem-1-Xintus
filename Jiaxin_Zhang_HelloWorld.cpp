/*
Jiaxin Zhang - 9/22/2017 Period: 1
Hello World : *
Display text on Visual Studios
*/
// Libraries
#include <iostream>
#include<conio.h>
//Namespaces
using namespace std;//*
// Fuctions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
			_getch();
	cout << '\n';
}
//MAIN
void main() {
	int pNum = 1;
	cout << "Period:" << pNum << endl;
	pause();
}


