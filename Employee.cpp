
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name;        //A string that holds the employee’s name
	int idNumber;       //An  int  variable that holds the employee’s ID number.
	string department;  //department employee is in
	string position;    //the employee's Sposition

public:
	//default constructor
	Employee() {
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}

	//second constructor
	Employee(string n, int id, string d, string p) {
		name = n;        //sets the name equal to n
		idNumber = id;   //sets the idNumber to id
		department = d;  //sets the department to d
		position = p;    //sets the position to p 
	}

	//third constructor
	Employee(string n, int id) {
		name = n;       //sets the name to n
		idNumber = id;  //sets the idNumber to id
		department = "";  //sets the department to an empty string
		position = "";    //sets the postion to an empty string

	}

	//setter functions

	//set name
	void setName(string n) {
		name = n;  //sets name to string s
	}
	//sets the ID Number
	void setID(int id) {
		idNumber = id;
	}
	//sets the department
	void setDepartment(string d) {
		department = d;
	}
	//sets the position
	void setPosition(string p) {
		position = p;
	}
	//getter functions
	//returns employee name
	string getName() {
		return name;
	}
	//returns employee ID
	int getID() {
		return idNumber;
	}
	//returns department
	string getDepartment() {
		return department;
	}
	//returns position
	string getPosition() {
		return position;

	}


};





//Employee(string n, int id, string d, string p)
int main() {
	//create 3 employee objects 

	Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
	Employee emp2("Mark Jones", 39119, "IT", "Programmer");
	Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

	cout << " Name        ID Number     Department       Position \n_______________________________________________________________" <<endl ;
	//prints emp1 data
	cout << emp1.getName() << "   ";
	cout << emp1.getID() << "      ";
	cout << emp1.getDepartment() << "        ";
	cout << emp1.getPosition() << endl;

	//prints emp2 data
	cout << emp2.getName() << "     ";
	cout << emp2.getID() << "      ";
	cout << emp2.getDepartment() << "                ";
	cout << emp2.getPosition() << endl;

	//print emp3 data
	cout << emp3.getName() << "     ";
	cout << emp3.getID() << "      ";
	cout << emp3.getDepartment() << "     ";
	cout << emp3.getPosition() << endl;


	return 0;
}
