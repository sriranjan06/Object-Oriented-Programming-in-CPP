#include<iostream>
#include<cstdio>
using namespace std;

class date{
	private: int day, month, year;
	public: date(char *d);
			date(int m, int d, int y);
			void out_date();
};

date::date(int m, int d, int y){
	day = d;
	month = m;
	year = y;
}

date::date(char *d){	
	sscanf(d,"%d %*c %d %*c %d", &month, &day, &year);
}

void date::out_date(){
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}

int main(){
	date obj1(12,4,2003), obj2("10/22/2003");
	
	obj1.out_date();
	obj2.out_date();
	return 0;
}
