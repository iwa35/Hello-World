#include <iostream>

int main()
{

	std::cout << 2 + 3;
	std::cout << "2 + 3";
	std::cout << "2 + 3 = " << 2 + 3; 
	std::cout << "2 + 3 = "; std::cout << 2 + 3; 
	std::cout << "2 + 3 = " 
	<< 2 + 3; 
	std::cout << "2 + 3 = " << std::endl << 2 + 3; 
	std::cout << "2 + 3 = \n" << 2 + 3;
}

/* Mo�emy wy�wietli� tekst w wi�cej ni� jednej linii.
S�u�y do tego konstrukcja << std::endl (z ang. end line - koniec linii) lub \n (je�li znajduje si� mi�dzy cudzys�owem �... \n ...�)
*/
