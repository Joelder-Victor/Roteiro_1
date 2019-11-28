#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(int d,int m,int y)
{
	setData(d,m,y);
}
void Data::nextDay(){
	day++;
}
void Data::setData(int d, int m,int y){
	if(d>0 && d<32 && m>0 && m<13)
	{
		day=d;
		month=m;
		year=y;
	}
	else{
		if(d>31 && m < 12){
			day=1;
			month++;
		}
		else{
			if(d>31 && month>=12){
				day=1;
				month=1;
				year++;
			}
		
		}
	}
}
int Data::getDay(){
	return day;
}
int Data::getMonth(){
	return month;
}
int Data::getYear(){
	return year;
}


