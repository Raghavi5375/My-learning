#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"\n";
	int space = 0;

	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < space; j++)
			printf(" ");

		for (int j = 0; j < i; j++)
			printf("* ");

		printf("\n");
		space++;
	}
	space = n - 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < space; j++)
			printf(" ");

		for (int j = 0; j <= i; j++)
			printf("* ");

		printf("\n");
		space--;
	}
}
