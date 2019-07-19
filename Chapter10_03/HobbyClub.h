#pragma once

#include "Student.h"
#include "Teacher.h"
#include <vector>

class HobbyClub
{
private:
	std::string m_name;

	Teacher *teacher;
	std::vector<Student*> students;

public:
	HobbyClub(const std::string & name_in)
		:m_name(name_in)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	void assignTeacher(Teacher * const teacher_in)
	{
		teacher = teacher_in;
	}

	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input);
	}

	friend std::ostream & operator << (std::ostream & out, const HobbyClub & hobby_in)
	{
		out << hobby_in.m_name << std::endl;

		out << *(hobby_in.teacher) << std::endl;

		for (auto & element : hobby_in.students)
			out << *element << std::endl;
		
		return out;
	}
};