#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Podaj rok: ";
	cin >> year;
	if (year ==2016 )
	{
cout << " Rok 2016 jest obecnie. " << endl;
}
	else if (year >2016)
	{
cout <<" Rok "<< year<< " nastapi za " << year - 2016 << " lat. " << endl;
}
	else if (year<2016 && year>0)
{
cout <<" Rok " << year<< " byl " << 2016 - year << " lat temu. " << endl;
}
 else if (year == 0)
	{
cout << " Wprowadzone dane sa nieprawidlowe. " << endl;
}
	else if (year<0)
	{
cout << " Rok " << year << " p.n.e. byl " << 0-year + 2016 <<  " lat temu. " << endl;
}
return 0;

}
