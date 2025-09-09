#include <iostream>
#include <string>
#include "greeting_utils.h"

using std::cin, std::cout, std::endl, std::string;

int main() {
    cout << "Enter your name: " << endl;
	string name;
	std::getline(cin, name);

    string message = GreetingUtils::create_message(name);

    cout << message << endl;

    string c_message = GreetingUtils::format_as_c_string(message);

    cout << c_message << endl;

    return 0;
}