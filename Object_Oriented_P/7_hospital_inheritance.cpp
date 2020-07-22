#include <iostream>
using namespace std;

struct date{
	int day;
	int month;
	int year;
};

class hospital{
	private: char name[100];
			 struct date d_admission;
			 struct date d_discharge;
	
	protected:int age;
	
	public: void getdata(){
				cout<<"Enter name of the patient: ";
				cin>>name;
				cout<<"Enter age: ";
				cin>>age;
				cout<<"Enter date of admission: ";
				cin>>d_admission.day>>d_admission.month>>d_admission.year;
				cout<<"Enter date of discharge: ";
				cin>>d_discharge.day>>d_discharge.month>>d_discharge.year;
			}

			void display(){
				cout<<name<<"\t";
				cout<<age<<"\t";
				cout<<d_admission.day<<'-'<<d_admission.month<<'-'<<d_admission.year<<"\t \t";
				cout<<d_discharge.day<<'-'<<d_discharge.month<<'-'<<d_discharge.year;
			}
};

class pediatric_patient:public hospital{
	private: char vaccine[20];

	public: void get(){
				getdata();
				cout<<"Enter the name of vaccine to be given \n";
				cin>>vaccine;
			}
		
			void put(){
				if(age<12){
					display();
					cout<<"\t"<<"\t";
					cout<<vaccine;
					cout<<"\n";
				}	
				else
					cout<<"age greater than 12 not a pediatric patient";
			}
};

int main(){
	hospital h[5];
	int n, i;
	
	cout<<"Enter the number of patients \n";
	cin>>n;
	for(i=0; i<n; i++)
		h[i].getdata();

	cout<<"Patient database \n";
	cout<<"NAME" <<"\t" <<"AGE" <<"\t" <<"DATE_OF_ADMISSION "<<"\t"<<"DATE_OF_DISCHARGE \n";
	for(i=0; i<n; i++){
		h[i].display();
		cout<<"\n";
	}
	
	pediatric_patient a1[5];
	cout<<"Enter the number of pediatric patients \n";
	cin>>n;
	for(i=0; i<n; i++)
		a1[i].get();

	cout<<"Pediatric Patient database \n";
	cout<<"NAME" <<"\t" <<"AGE" <<"\t" <<"DATE_OF_ADMISSION "<<"\t"<<"DATE_OF_DISCHARGE"<<"\t"<<"VACCINE \n";
	for(i=0; i<n; i++){
		a1[i].put();
		cout<<"\n";
	}

	return 0;
}
