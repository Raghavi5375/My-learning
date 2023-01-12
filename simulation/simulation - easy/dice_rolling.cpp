#include<bits/stdc++.h>
using namespace std;

int rolldice(){
    int a, b, c;
    a = rand() % 6;
    b = rand() % 6;
    c = rand() % 6;
    if(a == b == c){
        cout<<"Yahoo"<<"\n";
    }
    else{
        cout<<"Try again"<<"\n";
    }
}

int main(){
    rolldice();
}
