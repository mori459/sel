#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	int n_arr[8]{ 1,2,3,4,5,6,7,8 };
	char l_arr[8]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
	std::string sep = "\t";

	std::cout << sep;
	for (int i = 0; i < 8; i++)
	{
		std::cout << l_arr[i] << sep;
	}
	std::cout << "\n\n";
	for (int i = 0; i < 8; i++)
	{
		std::cout << n_arr[i] << sep;
		for (int j = 0; j < 8; j++)
		{
			std::cout << l_arr[j] << n_arr[i] << sep;
		}
		std::cout << "\n\n";
	}

	return 0;
}