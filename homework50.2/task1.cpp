#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
	string name;
	string gender;
	int age;
	int id;
	double wage;

	void print() {
		cout << "Name: " << name <<
			"\nGender: " << gender <<
			"\nAge: " << age <<
			"\nID: " << id <<
			"\nWage: $" << wage << '\n';
	}
};

void name_find(Employee Ann, Employee John, Employee Max, Employee Jack) {
	string name[4]{ "Ann", "John", "Max", "Jack" };
	string current_name;

	cout << "Input name of a person: ";
	cin >> current_name;
	if (current_name == name[0]) {
		Ann.print();
		cout << endl;
	}
	if (current_name == name[1]) {
		John.print();
		cout << endl;
	}
	if (current_name == name[2]) {
		Max.print();
		cout << endl;
	}
	if (current_name == name[3]) {
		Jack.print();
		cout << endl;
	}
}

void gender_find(Employee Ann, Employee John, Employee Max, Employee Jack) {
	string gender[2]{ "Female", "Male" };
	string current_gender;

	cout << "Input gender of a person: ";
	cin >> current_gender;
	if (current_gender == gender[0]) {
		Ann.print();
		cout << endl;
	}
	if (current_gender == gender[1]) {
		John.print();
		cout << endl;
	}
	if (current_gender == gender[2]) {
		Max.print();
		cout << endl;
	}
	if (current_gender == gender[3]) {
		Jack.print();
		cout << endl;
	}
}

void age_find(Employee Ann, Employee John, Employee Max, Employee Jack) {
	int age[4]{ 18, 21, 30, 26 };
	int current_age;

	cout << "Input age of a person: ";
	cin >> current_age;
	if (current_age == age[0]) {
		Ann.print();
		cout << endl;
	}
	if (current_age == age[1]) {
		John.print();
		cout << endl;
	}
	if (current_age == age[2]) {
		Max.print();
		cout << endl;
	}
	if (current_age == age[3]) {
		Jack.print();
		cout << endl;
	}
}

void ID_find(Employee Ann, Employee John, Employee Max, Employee Jack) {
	int ID[4]{ 4, 5, 6, 7 };
	int current_ID;

	cout << "Input ID of a person: ";
	cin >> current_ID;
	if (current_ID == ID[0]) {
		Ann.print();
		cout << endl;
	}
	if (current_ID == ID[1]) {
		John.print();
		cout << endl;
	}
	if (current_ID == ID[2]) {
		Max.print();
		cout << endl;
	}
	if (current_ID == ID[3]) {
		Jack.print();
		cout << endl;
	}
}

void wage_find(Employee Ann, Employee John, Employee Max, Employee Jack) {
	double wage[4]{ 27.50, 30.00, 32.75, 35.00 };
	double current_wage;

	cout << "Input wage of a person: ";
	cin >> current_wage;
	if (current_wage == wage[0]) {
		Ann.print();
		cout << endl;
	}
	if (current_wage == wage[1]) {
		John.print();
		cout << endl;
	}
	if (current_wage == wage[2]) {
		Max.print();
		cout << endl;
	}
	if (current_wage == wage[3]) {
		Jack.print();
		cout << endl;
	}
}

int main() {
	string attribute;

	Employee Ann{ "Ann", "Female", 18, 4, 27.50 };
	Employee John{ "John", "Male", 21, 5, 30.00 };
	Employee Max{ "Max", "Male", 30, 6, 32.75 };
	Employee Jack{ "Jack", "Male", 26, 7, 35.00 };

	cout << "Input atribute(name, gender, age, ID, wage): ";
	cin >> attribute;

	if (attribute == "name" || attribute == "Name") {
		name_find(Ann, John, Max, Jack);
	}
	else if (attribute == "gender" || attribute == "Gender") {
		gender_find(Ann, John, Max, Jack);
	}
	else if (attribute == "age" || attribute == "Age") {
		age_find(Ann, John, Max, Jack);
	}
	else if (attribute == "ID") {
		ID_find(Ann, John, Max, Jack);
	}
	else if (attribute == "wage" || attribute == "Wage") {
		wage_find(Ann, John, Max, Jack);
	}

	return 0;
}