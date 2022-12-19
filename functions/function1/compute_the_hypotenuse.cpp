#include<iostream>
#include<cmath>
using namespace std;
int getHypotenuse(int a, int b){
	int hypotenuse = 0;
	int r = (a*a) + (b*b);
	hypotenuse = sqrt(r);
	return hypotenuse;
}
int main(){
	int a1, b1;
	cout<<"Enter the shortest distances of a triangle : ";
	cin>>a1>>b1;
	int c = getHypotenuse(a1, b1);
	cout<<"hypotenuse is : "<<c<<"\n";
}
