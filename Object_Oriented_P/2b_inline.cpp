#include<iostream>
using namespace std;

inline int greatest(int a, int b, int c){
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
		return b;
	else
		return c;
}

int main(){
	int x, y, z;
	cout<<"\nEnter three numbers:\n";
	cin>>x>>y>>z;
	cout<<"\nGreatest number is "<<greatest(x,y,z)<<endl;
	return 0;
}
