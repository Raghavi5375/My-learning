#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the wavelength (range 380 to 750) : ";
	cin>>n;
	if(n >= 380 && n < 450){
		cout<<"Voilet"<<"\n";
	}
	else if(n >= 450 && n < 495){
		cout<<"Blue"<<"\n";
	}
	else if(n >= 495 && n < 570){
		cout<<"Green"<<"\n";
	}
	else if(n >= 570 && n < 590){
		cout<<"Yellow"<<"\n";
	}
	else if(n >= 590 && n < 620){
		cout<<"Orange"<<"\n";
	}
	else if(n >= 620 && n <= 750){
		cout<<"Red"<<"\n";
	}
	else{
		cout<<"Value is outside the visible spectrum"<<"\n";
	}
}
