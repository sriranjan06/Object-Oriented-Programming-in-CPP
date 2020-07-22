#include<iostream>
using namespace std;

class student{
	private: string name;
			 float marks[3], avg;
			 int i, usn;
			  
	public: void read();
			int calculate(int);
			void display();
};

void student::read(){
	cout<<"\nEnter USN: ";
	cin>>usn;
	cout<<"\nEnter name: ";
	cin.ignore();
	getline(cin,name);
	cout<<"\nEnter marks of 3 subjects.";
	for(i=0; i<3; i++){
		cout<<"\nEnter "<<i+1<<" subject marks: ";
		cin>>marks[i];
	} 
}

int student::calculate(int n){
	float sum=0.0, min = marks[0];
	for(i=0; i<3; i++){
		if(min > marks[i])
			min = marks[i];
		sum = sum + marks[i];
	}
	avg = (sum-min)/2;
	return avg;
}
			
void student::display(){
	cout<<usn<<"\t"<<name<<"\t";
	for(i=0; i<3; i++)
		cout<<marks[i]<<"\t";
		
	cout<<avg<<"\n";
}

int main(){
	int n, topper, i, z, x[100], compare;
	float max = 0;
	cout<<"\nEnter number of students: ";
	cin>>n;
	
	student obj[n];
	for(i=0; i<n; i++){
		obj[i].read();
		x[i] = obj[i].calculate(n);				//storing avg of each student in x[]
		if(x[i] > max)
			max = x[i];							//max average is stored
	}	
	
	for(i=0; i<n; i++){
		compare = obj[i].calculate(n);			//compare is the avg of each student. we use "compare" == max to find topper
		if(compare == max)
			topper = i;			
	}
	
	
	cout<<"\nStudent details are:\n";
	for(i=0; i<n; i++){
		obj[i].display();
	}
	
	cout<<"\nThe topper is student "<<topper+1<<endl;
	for(i=0; i<n; i++)
		if(i == topper)
			obj[i].display();
		
	return 0;
}	
