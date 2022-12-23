// CPP program to print ASCII Value of Character
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	int n;
	cout<<"Enter the character : ";
	cin>>c;
	cout <<"\n"<<"The ASCII value of " << c << " is " << int(c);
	cout<<"\n"<<"\n"<<"Enter the ascii value to print the character(from 0 to 126) : ";
	cin>>n;
	cout<<"character is "<<char(n)<<"\n";
	return 0;
}

