#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cout<<"Enter the license plate : ";
	cin>>s;
	if(s.length() >= 6){
		if(s[0] >= 'A' && s[0] <= 'Z'){
			if(s[1] >= 'A' && s[1] <= 'Z'){
				if(s[2] >= 'A' && s[2] <= 'Z'){
					if(s[3] >= '0' && s[3] <= '9'){
						if(s[4] >= '0' && s[4] <= '9'){
							if(s[5] >= '0' && s[5] <= '9'){
								cout<<"old style license";
							}
						}
						else{
							cout<<"not valid";
						}
					}
					else{
						cout<<"not valid";
					}
				}
			}
			else{
				cout<<"not valid";
			}
		}
		else if(s[0] >= '0' && s[0] <= '9'){
			if(s[1] >= '0' && s[1] <= '9'){
				if(s[2] >= '0' && s[2] <= '9'){
					if(s[3] >= '0' && s[3] <= '9'){
						if(s[4] >= 'A' && s[4] <= 'Z'){
							if(s[5] >= 'A' && s[5] <= 'Z'){
								if(s[6] >= 'A' && s[6] <= 'Z'){
									cout<<"new license";
								}
							}
							else{
								cout<<"invalid";
							}
						}
						else{
							cout<<"invalid";
						}
					}
					else{
						cout<<"invalid";
					}
				}
				else{
					cout<<"invalid";
				}
			}
			else{
				cout<<"invalid";
			}
		}
	}
}
