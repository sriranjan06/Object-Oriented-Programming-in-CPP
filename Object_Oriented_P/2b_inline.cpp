#include<iostream>
using namespace std;

inline int greatest(int a[]){
	int i, max = 0;
	for (i = 0; i < 3; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int main(){
	int i, x[3];
	cout<<"\nEnter three numbers:\n";
	for (i = 0; i < 3; i++) {
		cin >> x[i];
	}
	cout<<"\nGreatest number is "<<greatest(x)<<"\n";
	return 0;
}
