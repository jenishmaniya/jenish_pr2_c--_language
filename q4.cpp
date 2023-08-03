//. WAP to read and print employee information using multiple inheritance.
#include<iostream>
using namespace std;
class name{
	public:
		string name;
		string role;
		int id;
		int salary;
		a(){
		cout << "enter the name:" << endl;
		cin >> name;
		cout << "enter the role:"  << endl;
		cin >> role;
		cout << "enter the id:" << endl;
		cin >> id;
		cout << "enter the salary:" << endl;
		cin >> salary;
	}
};
class contact{
	public:
		int number;
		string email;
		b(){
		cout << "enter the number:" << endl;
		cin >> number;
		cout << "enter the email:" << endl;
		cin >> email;
	}
	
};
class personal{
	public:
		string hobbies;
		int age;
		c(){
		cout << "enter the age:" << endl;
		cin >> age;
		cout << "enter the hobbies:"  << endl;
		cin >>  hobbies;
	}
};
class Main : public name,public contact,public personal{
	public:
		d(){
		cout << "enter the name:" << name << endl;
		cout << "enter the role:" << role << endl;
		cout << "enter the id:" << id << endl;
		cout << "enter the salary:" << salary << endl;
		cout << "enter the number:" << number << endl;
		cout << "enter the email:" << email << endl;
		cout << "enter the age:" << age << endl;
		cout << "enter the hobbies:" << hobbies << endl;
	}
};
int main(){
	Main m;
	m.a();
	m.b();
	m.c();
	m.d();
	return 0;
}

