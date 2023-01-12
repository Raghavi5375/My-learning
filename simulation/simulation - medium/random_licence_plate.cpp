#include<bits/stdc++.h>
using namespace std;

int randomlicenceplate(int n){
    const char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int string_length = sizeof(alphanum)-1;
    if(n == 1){
        srand(time(0));
        cout<<"Generated password : ";
        for(int i = 0 ; i < 4 ; i++){
            cout<< (rand() % 10) + 1;
        }
        for(int i = 0; i < 3; i++){
            cout << alphanum[rand() % string_length];
        }
    }
    else{
        srand(time(0));
        cout<<"Generated password : ";
        for(int i = 0; i < 3; i++){
            cout << alphanum[rand() % string_length];
        }
        for(int i = 0 ; i < 3 ; i++){
            cout<< (rand() % 10) + 1;
        }
    }
}

int main(){
    int res = rand() % 2;
    randomlicenceplate(res);
}
