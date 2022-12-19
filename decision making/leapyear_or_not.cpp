#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year=0;
	cout<<"Enter the year: ";
	cin>>year;
	if(year >= 1000 && year <= 9999)
	{
		if(year % 400 == 0){
			cout<<year<<" is a LEAP YEAR"<<"\n";
		}
	    else if (year % 100 == 0){
	    	cout<<year<<" is not a LEAP YEAR"<<"\n";
		}
	    else if(year % 4 == 0){
	    	cout<<year<<" is a LEAP YEAR"<<"\n";
		}
		else{
			cout<<year<<" is not a leap year"<<"\n";
		}
	}
	else
	{
		cout<<"You've entered INVALID YEAR VALUE"<<"\n";
	}
}
