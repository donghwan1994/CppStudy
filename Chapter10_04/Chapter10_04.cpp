#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor;

class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;

public:
	Patient(string name_in)
		:m_name(name_in)
	{}

	void addDoctor(Doctor * new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors();

	friend class Doctor;
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients;

public:
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient * new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto & e : m_patients)
			cout << "Meet patient: " << e->m_name << endl;
	}

	friend class Patient;
};

void Patient::meetDoctors()
{
	for (auto & e : m_doctors)
		cout << "Meet patient: " << e->m_name << endl;
}

int main()
{
	std::unique_ptr<Patient> p1{ new Patient("Jack Jack") };
	std::unique_ptr<Patient> p2{ new Patient("Dash") };
	std::unique_ptr<Patient> p3{ new Patient("Doctor L") };

	/*Patient *p1 = new Patient("Jack Jack");
	Patient *p2 = new Patient("Dash");
	Patient *p3 = new Patient("Violet");*/

	std::unique_ptr<Doctor> d1{ new Doctor("Doctor K") };
	std::unique_ptr<Doctor> d2{ new Doctor("Doctor L") };

	/*Doctor *d1 = new Doctor("Doctor K");
	Doctor *d2 = new Doctor("Doctor L");*/

	p1->addDoctor(d1.get());
	d1->addPatient(p2.get());

	p1->meetDoctors();
	d1->meetPatients();

	/*delete p1;
	delete p2;
	delete p3;
	
	delete d1
	delete d2*/

	return 0;
}