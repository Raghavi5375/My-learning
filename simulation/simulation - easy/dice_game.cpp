#include<bits/stdc++.h>
using namespace std;

int rolldie6(){
    return rand() % 6;
}

int main(){
    int count = 0, res;
    for(int i = 0 ; i < 10 ; i++){
        res = rolldie6();
        if(res == 6){
            count++;
        }
    }
    cout<<res<<"\n";
}
