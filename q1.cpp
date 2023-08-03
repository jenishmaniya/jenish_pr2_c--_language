/*
WAP with a mother class and an inherited daugther class.Both of them should have a method void display 
()that prints a message (different for mother and daugther).
In the main define a daughter and call the display() method on it.
*/
#include<iostream>
using namespace std;
class mother{
	public:
		a(){
			cout << "hi from mother.." << endl;
		}
};
class daugther : public mother{
	public:
		b(){
			cout << "hi from daugther.." << endl;
		}
};
int main(){
	daugther d;
	d.a();
	d.b();
}
