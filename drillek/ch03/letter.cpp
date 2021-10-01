#include "std_lib_facilities.h"

int main ()
{
	cout << "Enter the name of the person you want to write to\n";

	string first_name;

	cin >> first_name;

	cout << "Dear " << first_name << ",\n";

	cout << "I haven't seen you in a while, I hope you are doing okay!\n";

	cout << "What is your other friend's name?\n";

	string friend_name;

	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex = 0;

	cout << "Please write down your other friend's gender! (M if male, f if female)\n";

	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << ", please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << ", please ask her to call me.\n";

	cout << "Please enter your friend's age!\n";

	int age;

	cin >> age;

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if (age < 0 || age >110) simple_error("you're kidding!");

	if (age < 12 ) cout << "Next year you will be " << age + 1 << " years old!\n";

	if (age == 17 ) cout << "Next year you will be able to vote, hurray!\n";

	if (age > 70 ) cout << "I hope you are enjoying retirement, you old c*nt!\n";

	cout << "Yours sincerely, \n\n\n";

	cout << "Ábel\n";

	return 0;

}