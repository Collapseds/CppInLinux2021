#include <iostream>
#include <exception>
#include <stdexcept>

using std::cout;
using std::endl;

class Student{
public:
	Student() =default;
	virtual void foo(){}
};

class Undergraduate : public Student {};

class Graduate : public Student {};

int main(){
	Undergraduate u;
	Graduate g;
	Student* s1 = &u;
	Student* s2 = &g;
	Graduate* g1 = dynamic_cast <Graduate *> (s2);
	long x = reinterpret_cast <long> (g1);
	cout << x << endl;

	try{
		Graduate& g2 = dynamic_cast <Graduate&> (u);
	}catch (std::bad_cast& e){
		cout << "Exception: " << e.what() << endl;
	}
}
