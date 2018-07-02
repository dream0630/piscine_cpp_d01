#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

void convert_Celcius(float Celsius)
{
	float res;

	res = 9.0 / 5.0 * Celsius + 32;
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << res << std::setw(16) << "Fahrenheit" << std::endl;
}

void convert_Fahrenheit(float Fahrenheit)
{
	float res;

	res = 5.0 / 9.0 * (Fahrenheit - 32);
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << res << std::setw(16) << "Celsius" << std::endl;
}

int main()
{
	char data[1000];
	float temp;

	temp = 0;
	std::cin >> temp >> data;

	if (strncmp(data, "Celsius", 7) == 0)
		convert_Celcius(temp);
	if (strncmp(data, "Fahrenheit", 10) == 0)
		convert_Fahrenheit(temp);
	return 0;
}
