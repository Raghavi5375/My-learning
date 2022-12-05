#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	float size;
	cout<<"no. of containers = ";
	cin>>t;
	int suml = 0, sumk = 0;
	while(t--){
		cout<<"Enter the size of the container(in liters) of  container: ";
		cin>>size;
		if(size <= 1){
			suml += 1;
		}
		else{
			sumk += 1;
		}
	}
	cout<<"Your deposit is : $"<<(suml * 0.10) + (sumk * 0.25)<<" deposit"<<"\n";
}
