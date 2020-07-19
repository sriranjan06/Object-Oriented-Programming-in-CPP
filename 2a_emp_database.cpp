#include<iostream>
using namespace std;

class employee{
	private: int empno;
			 string empname;
			 double DA = 0.0, IT = 0.0, grosal = 0.0, netsal = 0.0, bsal = 0.0;
	
	public: void read();
			void calculate();
			void display();
};

void employee::read(){
	cout<<"\nEnter employee number: ";
	cin>>empno;
	cout<<"\nEnter employee name: "<<endl;
	cin.ignore();
	getline(cin,empname);
	cout<<"\nEnter basic salary: ";
	cin>>bsal;
}

void employee::calculate(){
	DA = bsal * 0.52;
	grosal = DA + bsal;
	IT = grosal * 0.30;
	netsal = DA + bsal - IT;
}

void employee::display(){
	cout<<"\nEmployee Number: "<<empno;
	cout<<"\nEmployee Name: "<<empname;
	cout<<"\nDA: "<<DA;
	cout<<"\nGross Salary: "<<grosal;
	cout<<"\nIT: "<<IT;
	cout<<"\nNet Salary: "<<netsal<<endl;
}

int main(){
	int n, i;
	cout<<"\nEnter the number of employees: ";
	cin>>n;
	
	employee obj[n], *p;
	
	for(i=0; i<n; i++){
		p = &obj[i];
		cout<<"\nEnter "<<i+1<<" employee details: ";
		p -> read();
		p -> calculate();
	}
	
	cout<<"\nThe contents of the database are:\n";
	for(i=0; i<n; i++){
		p = &obj[i];
		p -> display();
	}
	return 0;
}
		
			
		 			
