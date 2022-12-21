#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n;
	cout<<"Enter your date of birth (month and date) : ";
	cin>>s>>n;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	if(s == "December"){
		if(n >= 22){
			cout<<"Capricon";
		}
		else{
			cout<<"Sagittarius";
		}
	}
	else if(s == "january"){
		if(n > 19){
			cout<<"Aquarius";
		}
		else{
			cout<<"Capricon";
		}
	}
	else if(s == "february"){
		if(n > 18){
			cout<<"Pisces";
		}
		else{
			cout<<"Aquarius";
		}
	}
	else if(s == "march"){
		if(n > 20){
			cout<<"Aries";
		}
		else{
			cout<<"Pisces";
		}
	}
	else if(s == "april"){
		if(n > 19){
			cout<<"Taurus";
		}
		else{
			cout<<"Aries";
		}
	}
	else if(s == "may"){
		if(n > 20){
			cout<<"Gemini";
		}
		else{
			cout<<"Taurus";
		}
	}
	else if(s == "june"){
		if(n > 20){
			cout<<"Cancer";
		}
		else{
			cout<<"Gemini";
		}
	}
	else if(s == "july"){
		if(n > 22){
			cout<<"Leo";
		}else{
			cout<<"Cancer";
		}
	}
	else if(s == "august"){
		if(n > 22){
			cout<<"Virgo";
		}else{
			cout<<"Leo";
		}
	}
	else if(s == "september"){
		if(n > 22){
			cout<<"Libra";
		}else{
			cout<<"Virgo";
		}
	}
	else if(s == "november"){
		if(n > 21){
			cout<<"Sagittarius";
		}else{
			cout<<"Scrpio";
		}
	}
	
}
