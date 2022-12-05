#include <cmath>
#include <iostream>
using namespace std;
int main(){
	int s1, s2, s3, s;
	cout<<"s1 : ";cin>>s1;
	cout<<"s2 : ";cin>>s2;
	cout<<"s3 : ";cin>>s3;
	s = (s1 + s2 + s3) / 2;
	int a = s * (s - s1) * (s - s2) * (s - s3);
	int area = pow(a, 0.5);
	cout<<"Area : "<<area<<"\n";
}
