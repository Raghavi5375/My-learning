#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int randomPassword(int n){
    const char alphanum[] = "0123456789!@#$%^*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_length = sizeof(alphanum)-1;
    srand(time(0));
    cout<<"Generated password : ";
    for(int i = 0; i < n; i++){
        cout << alphanum[rand() % string_length];
    }
}


int main()
{
    int n;
    cout<<"Enter the length of password(n >= 7 & <= 10) : ";
    cin>>n;
    if(n >= 7 && n <= 10){
        randomPassword(n);
    }
    else{
        cout<<"Password length should be between 7 to 10"<<"\n";
    }
    return 0;
}
