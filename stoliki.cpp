#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    char polish[64]; // ³añcuch znakowy (ale nie string, tablica - o nich wiêcej na 3 zajêciach)
	CharToOem("¹êóŸæœ¿", polish); // funkcja z biblioteki windows.h: chyba najprostsze rozwi¹zanie problemu,
	                             // ale na Linuxie nie zadzia³a.
	cout << "Restauracja posiada stoliki na 2, 4, 6 i 10 osób." << endl;

	int stolik;
	cout << "Na ile osob chcesz zamówic stolik?" << endl;
	cin >> stolik;
	if (stolik>=1 && stolik<=2 )
	{
cout << "2" << endl;
}
	else if (stolik>=2 && stolik<=4)
	{
cout <<"czteroosobowy" << endl;
}
	else if (stolik>=5 && stolik<=6)
{
cout <<"szescioosobowy" << endl;
}
 else if (stolik>=7 && stolik<=10)
	{
cout << "dziesiêcioosobowy" << endl;
}
	else if (stolik<1)
	{
	cout << "nie ma takiego stolika" << endl;
 }
else if (stolik>10)
	{
	cout << "nie ma takiego stolika" << endl;
}
return 0;
}
