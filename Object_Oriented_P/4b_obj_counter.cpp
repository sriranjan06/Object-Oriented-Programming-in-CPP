#include<iostream>
using namespace std;

class count{
	public: static int counter;
			count(){					//constructor
				counter++;
			}
			
			~count(){					//destructor
				counter--;				//it is automatically called after execution of program
			}
};

int count::counter = 0;					//init counter to 0

void f(){
	count temp;
	cout<<"\nObjects in existence: ";
	cout<<temp.counter<<endl;
}

int main(){
	count obj1;
	cout<<"\nObjects in existence: ";
	cout<<obj1.counter<<endl;
	
	count obj2;
	cout<<"\nObjects in existence: ";
	cout<<obj2.counter<<endl;
	 
	f();								//temp is 3rd object created. and later destructor is automatically called hence becomes 2
	
	cout<<"\nObjects in existence: ";
	cout<<count::counter<<endl; 		//should be 2
}
