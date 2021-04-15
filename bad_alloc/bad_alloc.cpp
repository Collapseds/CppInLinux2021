#include <iostream>
#include <exception>
#include <stdexcept>
#include <new>

using std::cout;
using std::endl;

int main(){
	try{
		for(int i=0 ; i<100000 ; i++){
			auto* p = new long long int [700000000];
			cout << i << "array" << endl;
		}
	}catch (std::bad_alloc& e){
		cout << "exception: " << e.what() << endl;
	}
}
