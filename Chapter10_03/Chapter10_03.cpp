#include "Lecture.h"
#include <iostream>

using std::endl;
using std::cout;

int main()
{
	std::unique_ptr<Student> ptr_std1{ new Student("Jack Jack", 0) };
	std::unique_ptr<Student> ptr_std2{ new Student("Dash", 1) };
	std::unique_ptr<Student> ptr_std3{ new Student("Violet", 2) };

	std::unique_ptr<Teacher> ptr_teacher1{ new Teacher("Prof. Hong") };
	std::unique_ptr<Teacher> ptr_teacher2{ new Teacher("Prof. Good") };

	//Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(ptr_teacher1.get());
	lec1.registerStudent(ptr_std1.get());
	lec1.registerStudent(ptr_std2.get());
	lec1.registerStudent(ptr_std3.get());

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(ptr_teacher2.get());
	lec2.registerStudent(ptr_std1.get());

	//TODO: implement Aggregation Relationship

	// test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec1.study();
		cout << lec1 << endl;

		lec2.study();
		cout << lec2 << endl;
	}

	//TODO: class HobbyClub

	//TODO: delete memory (if necessary)

	return 0;
}