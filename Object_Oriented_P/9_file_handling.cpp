#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	ifstream in("filetext.txt"); // input
	if(!in){
		cout << "Cannot open input file.\n";
		return 1;
	}
	
	ofstream out("TextFile1.txt"); // output
	if(!out){
		cout << "Cannot open output file.\n";
		return 1;
	}
	
	char str[5][20];
	char t[20];
	int i, j;

	cout<<"file contents \n";
	for(int i=0;i<5;i++){
		in>>str[i];
		cout<<str[i]<<endl;
	}
	
	for(i=1; i<5; i++){
		for(j=1; j<5; j++){
			if(strcmp(str[j-1], str[j])>0){
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], t);
			}
		}
	}

	cout<<"\nStrings (Names) in alphabetical order : \n";
	for(i=0; i<5; i++){
		cout<<str[i]<<"\n";
	}
}
