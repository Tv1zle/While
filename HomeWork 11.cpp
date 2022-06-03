
#include <iostream>

int main()
{
	//Task 1
	double FaradenzaOne, FaradenzaTwo, count = 32, hobo = 0;
	std::cout << "Temperature in celsius = ";
	std::cin >> FaradenzaOne >> FaradenzaTwo;


	if (FaradenzaOne < FaradenzaTwo)
	{
		while (hobo <= FaradenzaOne)
		{
			count += 1.8;
			hobo += 1;
		}
		count -= 1.8;
		while (FaradenzaOne <= FaradenzaTwo)
		{
			std::cout << "C: " << FaradenzaOne << "  F: " << count << "\n";
			FaradenzaOne += 1;
			count += 1.8;
		}
	}
	else
	{
		while (hobo <= FaradenzaTwo)
		{
			count += 1.8;
			hobo += 1;
		}
		count -= 1.8;

		while (FaradenzaTwo <= FaradenzaOne)
		{
			std::cout << "C: " << FaradenzaTwo << "  F: " << count << "\n";
			FaradenzaTwo += 1;
			count += 1.8;
		}
	}



	//Task 2
	int user, plural = 1;
	std::cout << "\nNumber to flip = ";
	std::cin >> user;


	std::cout << "Answer = ";
	while (plural <= user)
	{
		std::cout << user / plural % 10;
		plural *= 10;
	}
	std::cout << "\n";



	//Task 3
	int number, divisor = 1;
	std::cout << "\nThe number to be divided = ";
	std::cin >> number;


	std::cout << "Number divided without remainder by: ";
	while (divisor < number)
	{
		if (number % divisor == 0)
		{
			std::cout << divisor << ", ";
		}
		divisor++;
	}
	std::cout << number << ".";
}
