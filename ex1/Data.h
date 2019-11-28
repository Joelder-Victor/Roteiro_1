#ifndef DATA_H
#define DATA_H

class Data
{
	public:
		Data();
		Data(int d,int m,int y);
		void setData(int d, int m,int y);
		void nextDay();
		int getDay();
		int getMonth();
		int getYear();
	private:
		int day,month,year;
};

#endif //DATA_H
