#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the amount : ";
    cin>>n;
	string s;
	cout<<"Enter the message : ";
	cin>>s;
	for(int i = 0 ; i < s.length() ; i++){
	    if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] + n;
            if (s[i] > 'z') {
               s[i] = s[i] - 'z' + 'a' - 1;
            }  
            cout<<s[i];
         }
         else if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + n;
            if (s[i] > 'Z'){
               s[i] = s[i] - 'Z' + 'A' - 1;
            }
            cout<<s[i];
        }
    }
}
