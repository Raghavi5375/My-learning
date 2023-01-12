#include<bits/stdc++.h>
using namespace std;

const char alphanum[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum)-1;

int randompassword(int n){
    srand(time(0));
    cout<<"Generated password : ";
    for(int i = 0; i < n; i++)
        cout << alphanum[rand() % string_length];
}

int main()
{
    int n;
    cout<<"Enter the length of password : ";
    cin>>n;
    if(n >= 7 && n <= 10){
        randompassword(n);
    }
    else{
        cout<<"password length should be between 7 to 10 "<<"\n";
    }
    return 0;
}
