#include <iostream>

int main()
{
	const char password_characters[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int password_length;
	do {
		std::cout << "Password length [Range of 8-16]: ";
		std::cin >> password_length;
	} while (password_length < 8 || password_length > 16);

	if (password_length >= 8 && password_length <= 16) {
		system("cls");
		std::cout << "Generated Password: ";

		for (int i = 0; i < password_length; i++) {
			std::cout << password_characters[rand() % sizeof(password_characters)];
		}
		std::cout << "\n\n";
		system("pause");
		return 0;
	}
}
