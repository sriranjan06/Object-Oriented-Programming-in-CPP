#include<iostream>
#define SIZE 5
using namespace std;

class stack{
	private: int item, top, A[SIZE];
	public: void initialise();
			void push();
			int pop();
			void display();
};

void stack::initialise(){
	top = -1;
}

void stack::push(){
	if(top == SIZE-1){
		cout<<"\nNo space";
		return;
	}
	cout<<"\nEnter item to be inserted: ";
	cin>>item;
	A[++top] = item;
	cout<<item<<" is inserted";
}

int stack::pop(){
	int del;
	if(top == -1){
		cout<<"\nThe stack is empty!";	 
		return 0;
	}
	else
		del = A[top--];
	return del;
}

void stack::display(){
	int i;
	if(top == -1)
		cout<<"\nEmpty stack!";
	else{ 
		cout<<"\nThe stack elements are:\n";
		for(i=0; i<=top; i++){
			cout<<A[i]<<"\n";
		}
	}
}

int main(){
	stack ob;
	ob.initialise();
	int choice, out = 0;
	while(1){
		cout<<"\n\nEnter your choice: ";
		cout<<"\n1. Push \t 2. Pop \t 3. Display \t 4. Exit\n";
		cin>>choice;
	
		switch(choice){
			case 1: ob.push();
					break;
		
			case 2: out = ob.pop();
					cout<<out<<" is deleted!";
					break;
		
			case 3: ob.display();
					break;
		
			case 4: exit(0);
			
			default: cout<<"\nEnter valid choice!";
					 break;
		}
	}
} 	
