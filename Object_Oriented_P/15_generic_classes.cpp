#include<iostream>
#include<cstdlib>
using namespace std;
const int SIZE=10;

template<class atype> class sort{
	public: atype a[SIZE];
			atype &operator[](int i){
				if(i<0||i>SIZE-1){
					cout<<"\nIndex value of ";
					cout<<i<<" is out-of-bonds.\n";
					exit(1);
				}
				return a[i];
			}
			
			sort(){}

			void read(int z){
				for(int i=0;i<z;i++)
					cin>>a[i];
			}
			
			void disp(int z){
				for(int i=0;i<z;i++)
					cout<<a[i]<<" ";
				cout<<"\n";
			}

			template<class X> void bubble(X *items,int count){
				register int a,b;
				X t;
				for(a=1;a<count;a++){
					for(b=count-1;b>=a;b--){
						if(items[b-1]>items[b]){
							t=items[b-1];
							items[b-1]=items[b];
							items[b]=t;
						}
					}
				}
			}
};

int main(){
	sort <int> intob;
	sort <double> doubleob;
	int i,m,n;

	cout<<"\nEnter the size of integer array: -\n";
	cin>>n;
	cout<<"\nEnter the size of double array: -\n";
	cin>>m;

	intob[n-1]=0;
	doubleob[m-1]=0;

	cout<<"\nEnter the integer array:-\n";
	intob.read(n);
	cout<<"\nEnter the double array:-\n";
	doubleob.read(m);

	cout<<"\nUnsorted integer array is:-\n";
	intob.disp(n);
	cout<<"\nUnsorted double array is:-\n";
	doubleob.disp(m);

	intob.bubble(intob.a,n);
	doubleob.bubble(doubleob.a,m);

	cout<<"\nSorted integer array is:-\n";
	intob.disp(n);
	cout<<"\nSorted double array is:-\n";
	doubleob.disp(m);

	return 0;
}
