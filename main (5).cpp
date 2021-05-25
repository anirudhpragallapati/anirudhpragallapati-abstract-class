#include<iostream>
using namespace std;
class shape             // abstract baseclass//
{
	virtual int numberofsides()=0;        //pure virtual function//
};
class trapezoid:public shape
{
        int sides;
		public:
		trapezoid(int s)
		{
			sides=s;
		}
		int numberofsides()
		{
			return sides;
		}	
};
class triangle:public shape
{
        int sides;
		public:
		triangle(int s)
		{
			sides=s;
		}
		int numberofsides()
		{
			return sides;
		}	
};
class hexagon:public shape
{
	int sides;
	public:
		hexagon(int s)
		{
			sides=s;
		}
		int numberofsides()
		{
			return sides;
		}
};
int main()
{
	trapezoid tr();
	triangle ta();
	hexagon he();
	int numberofsides;
	cout<<"the numberofsides of trapezoid is 4 "<<endl;
    cout<<"the numberofsides of triangle is 3 "<<endl;
    cout<<"the numberofsides of hexagon is 6"<<endl;
	return 0;
}