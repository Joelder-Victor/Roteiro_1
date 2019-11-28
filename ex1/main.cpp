#include <iostream>
#include <string>
#include "Data.h"

using namespace std;
void displayMessage(int *d,int *m,int *y,int *de,int *me,int *ye);
int main()
{
	int d,m,y,de,me,ye;
	displayMessage(&d,&m,&y,&de,&me,&ye);
	Data days=Data(d,m,y);
	while(1){
		if(days.getDay()==de && days.getMonth()==me && days.getYear()==ye)
			break;
		days.nextDay();
		days.setData(days.getDay(),days.getMonth(),days.getYear());
		cout<<days.getDay()<<"/"<<days.getMonth()<<"/"<<days.getYear()<<endl;
	}
	
	
	return 0;
}
void displayMessage(int *d,int *m,int *y,int *de,int *me,int *ye){

	cout<<"Enter day:";
	cin>>*d;

	cout<<"Enter Month:";
	cin>>*m;

	cout<<"Enter Year:";
	cin>>*y;

	cout<<"Enter last day:";
	cin>>*de;

	cout<<"Enter last month:";
	cin>>*me;

	cout<<"Enter last year:";
	cin>>*ye;
}