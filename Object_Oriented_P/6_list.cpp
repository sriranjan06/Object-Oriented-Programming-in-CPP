#include<iostream>
#include<new>
using namespace std;

struct node{
	int info;
	struct node *next;					//next pointer points to new block of data which will be created 
};

typedef struct node node;

class list{
	private: node *f;
	public: list(){
				f = NULL;				//f is init NULL
			}
			
			void insert(int num){
				node *p = new node;		//pointer p points to new block of data of data type node
				p -> info = num;		//new block of data = pointer p which points to info
				p -> next = f;			//f reassigned to pointer p which points to next
				f = p;					//p responsibilty is given to f
				cout<<"\n";
			}
			
			void delete_it(){
				node *temp = f;			//temporary data type is created to hold f which is the most recent node created	
				
				if(f == NULL)
					cout<<"\nNo elements to delete!"<<endl;
				else{
					cout<<"\nDeleted element is: "<<f -> info<<endl;
					f = f -> next;			//f is now pointing to next node
					delete temp;	
					cout<<"\n Deletion successfull \n";		
				}
				return;
			}
			
			void display(){
				node *temp = f;
				
				if(f == NULL)
					cout<<"\nEmpty list!"<<endl;
				else{
					while(temp != NULL){			//definitely executes the loop
						cout<<temp -> info;			//displays each node
						cout<<"\t";
						temp = temp -> next;		//after that node, next node value is displayed
					}
				}
			}
};													//end of class
						
int main(){
	int num, ch = 1;		
	list obj; 							//object is created
	
	while(1){
		cout<<"\n1.Insert\t2.Delete\t3.Display\t4.Exit"<<endl;
		cin>>ch;
		
		switch(ch){
			case 1: cout<<"\nEnter number to be inserted: ";
					cin>>num;
					obj.insert(num);
					break;
					
			case 2: obj.delete_it();
					break;
					
			case 3: obj.display();
					break;
			
			case 4: exit(0);
			
			default: cout<<"\nInvalid choice!";
					 break;
		}
	}
	return 0;
}			
					
						
