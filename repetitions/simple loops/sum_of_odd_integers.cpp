#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int count = 0, sum = 0;
	for(int i = 1 ; i < 2*n ; i++){
		if(i % 2 != 0){
			sum += i;
			count++;
			if(count == n){
				cout<<sum<<"\n";
				break;
			}
		}
	}
}
