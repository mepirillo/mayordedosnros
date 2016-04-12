/* Mayor de dos números
Melanie Pirillo
Apr 7 */

#include <iostream>

int main () {
	int a;
	int b;
	std::cout << "Ingrese A:";
	std::cin >> a;
	std::cout << "Ingrese B:";
	std::cin >> b;
	if (a>b) 
	std::cout << "A es el mayor";
	else if (b>a) 
    std::cout << "B es el mayor";
	else
	std::cout << "A y B son iguales";
	
}
