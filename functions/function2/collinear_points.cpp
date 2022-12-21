#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1, y1, x2, y2, x3, y3, m1, m2;
	cout<<"Enter the values of the points "<<"\n";
	cout<<"(x1, y1) : ";
	cin>>x1>>y1;
	cout<<"(x2, y2) : ";
	cin>>x2>>y2;
	cout<<"(x3, y3) : ";
	cin>>x3>>y3;
	m1 = (y2 - y1)/(x2 - x1);
	m2 = (y3 - y2)/(x3 - x2);
	if(m1 == m2){
		cout<<"Points are collinear :)";
	}
	else{
		cout<<"Points are not collinear !!";
	}
}
