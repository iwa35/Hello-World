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

/* Mo¿emy wyœwietliæ tekst w wiêcej ni¿ jednej linii.
S³u¿y do tego konstrukcja << std::endl (z ang. end line - koniec linii) lub \n (jeœli znajduje siê miêdzy cudzys³owem “... \n ...”)
*/
