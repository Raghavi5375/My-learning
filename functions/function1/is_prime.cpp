#include<iostream>
using namespace std;
int isPrime(int n){
	int count = 0;
	for(int i = 1 ; i <= 10 ; i++){
		if(n % i == 0){
			count ++;
		}
	}
	if(count > 1){
		return false;
	}
	else{
		return true;
	}
}
int main(){
	int n;
	cout<<"n : ";
	cin>>n;
	int result = isPrime(n);
	if(result == true){
		cout<<n<<" is prime"<<"\n";
	}
	else{
		cout<<n<<" is not prime"<<"\n";
	}
}
