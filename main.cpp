#include <string>
#include <iostream>

int main()
{
	/*const int value = 3 ;
	std::string apple_count =
		std::to_string(value) +
		"apples";
	std::cout
		<< "you have "
		<<  apple_count;

	std::string txt = "apple_count";
	std::cout
		<< " size: "
		<< std::to_string(txt.length());*/

	/*std::string txt = "here is something";
	char value = txt[6];
		std::cout
		<< "The character is ["
		<< value
		<< "]\n";*/
	std::cout << "Enter your first name:";
	//std::string first_name;
		//std::cin >> first_name;
		//std::cout << first_name; //pour afficher le nom
	std::string name;
	std::getline(std::cin, name);
	std::cout <<name;
	return 0;
}

