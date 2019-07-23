#include "Teacher.h"
#include "Student.h"

int main()
{
	Student std1("Jack Jack");
	std1.setName("Jack Jack 2");
	std1.getName();
	std::cout << std1 << std::endl;

	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. K");
	std::cout << teacher1 << std::endl;

	std1.study();
	teacher1.teach();

	Person person;
	person.setName("Mr. Incredible");
	std::cout << person.getName() << std::endl;

	return 0;
}