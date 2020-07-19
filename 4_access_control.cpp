#include<iostream>
using namespace std;

class shared{
	public: static int resource;		//static variable has only 1 copy. only 1 object can access and alter it at a time
			int getResource();
			void freeResource();
};

int shared::resource = 0;

int shared::getResource(){
	if(resource)						//if resource = 1 functions returns value 0
		return 0;
	
	else{ 
		resource = 1;					//if is not yet 1, it'll be made 1. and then function returns value 1
		return 1;
	}
}

void shared::freeResource(){
	resource = 0;						// this assigns resource as 0
}

int main(){
	shared obj1, obj2;
	if(obj1.getResource())				//if this function returns 1 which it will the first time
		cout<<"\nObject 1 has access";
	
	if(!obj2.getResource())				//it returns 0, and !0 = 1
		cout<<"\nObject 2 has NO access";
		
	obj1.freeResource();				//resource = 0
	
	if(obj2.getResource())				//function will return 1 itself
		cout<<"\nObject 2 now has access"<<endl;
}
