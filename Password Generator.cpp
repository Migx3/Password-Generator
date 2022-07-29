#include <iostream>
#include <string.h>

constexpr int N = 50;
int main()
{
	const char password_characters[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int password_length;

	std::cout << "Password length [Range of 8-16]: ";
	std::cin >> password_length;

	if (password_length >= 8 && password_length <= 16) {
		system("cls");
		std::cout << "Generated password: ";
		
		for (int i = 0; i < password_length; i++) {
			std::cout << password_characters[rand() % sizeof(password_characters) - 1];
		}
	}
	
	else {
		std::cout << "That number is not in the range.";
	}
	std::cout << "\n\n";
	system("pause");
	return 0;
}