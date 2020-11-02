#include <iostream>
#include <string>


struct Profile {
	int age;
	double GPA;
	std::string name;
} profile;

int main()
{
	// Get User Profile Info, Name, Age, GPA
	std::cout << "Profile\n\n";
	std::cout << "Enter Name: ";
	getline(std::cin, profile.name);
	std::cout << "Enter Age: ";
	std::cin >> profile.age;
	std::cout << "Enter GPA: ";
	std::cin >> profile.GPA;

	// Output Profile Info
	std::cout << std::endl;
	std::cout << "Name is: " << profile.name << std::endl;
	std::cout << "Age is: " << profile.age << std::endl;
	std::cout << "GPA is: " << profile.GPA << std::endl;
	
	return 0;
}