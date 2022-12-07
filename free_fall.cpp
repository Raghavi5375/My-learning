#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	float acceleration = 9.8, vi = 0, vf, final, d;
	cout<<"Distance : ";
	cin>>d;
	final = (vi * vi) + (2 * acceleration * d);
	vf = sqrt(final);
	cout<<"Final speed : "<<vf<<"\n";
}
