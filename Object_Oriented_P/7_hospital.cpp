#include<iostream>
#include<string>
using namespace std;

class patients{
    private:
        string name;
        int age;
        int room_no;
    public:
        void getInfo();
        int getAge() { return age; }
        void display();
};

class child: public patients {
    private:
        int pediatric;
    public:
        child(){
            pediatric = 0;
        }
        void check(int i){
            if (i < 12)
                pediatric = 1;
        }
};

void patients::getInfo(){
    cin.ignore();
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter room: ";
    cin>>room_no;
}

void patients::display(){
    cout<<"\t"<<name<<"\t"<<age<<"\t"<<room_no;
    if(age < 12)
        cout<<"\tYes"<<endl;
    else
        cout<<"\tNo"<<endl;
    
}

int main(void){
    int n;
    cout<<"Enter number of patients: ";
    cin>>n;
    child ob[n], *p;
    for(int i=0; i<n;i++){
        p = &ob[i];
        cout<<"Enter details of "<<i+1<<" patient"<<endl;
        p->getInfo();
        p->check(p->getAge());
    }

    cout<<"The patient database is: \n\n";
    cout<<"\tName\tAge\tRoom\tChild?"<<endl;
    for(int j=0;j<n;j++){
        p = &ob[j];
        p->display();
    }
}