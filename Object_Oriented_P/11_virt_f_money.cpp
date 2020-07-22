#include<iostream>
using namespace std;

class rupees{
	public: float rs;
    		virtual void conv()=0;
			void disp(){
				cout<<" is eqvivalent to "<<rs<<" INR \n";
			}
};

class dollars:public rupees{
	private: float dol;
	public: void conv(){
				cout<<"Enter currncy in dollar \n";
				cin>>dol;
				rs=54.3*dol;
				cout<<" "<<dol<<" in dollar ";
				disp();
			}
};

class euros:public rupees{
	private: float er;
	public: void conv(){
				cout<<"Enter currency in Euro \n";
				cin>>er;
				rs=70.2*er;
				cout<<" "<<er<<" in euro ";
				disp();
			}
};

class pounds:public rupees{
	private: float pnd;
	public: void conv(){
				cout<<"Enter currency in pound \n";
				cin>>pnd;
				rs=81.1*pnd;
				cout<<" "<<pnd<<" in pound ";
				disp();
			}
};

int main(){
	int c;
	dollars d;	
	euros e;
	pounds p;

	cout<<"\t\t\t Currency conversion \n";
	while(1){
		cout<<"1.Dollars to Rs.\t2.Euro to Rs.\t3.Pounds to Rs.\t4.Exit"<<endl;
		cin>>c;
		
		switch(c){
			case 1: d.conv();
					break;

			case 2: e.conv();
					break;

			case 3: p.conv();
					break;

			case 4: exit(0);
			
			default: cout<<"\nEnter valid number!";
					 break;
		}
	}

	return 0;
}

