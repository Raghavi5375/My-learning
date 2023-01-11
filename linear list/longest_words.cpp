#include <bits/stdc++.h> 
using namespace std; 

int longestwords(vector<string> b, int length, int n){
    for(int i = 1 ; i < n ; i++){
        if(length >= b[i].size()){
            i++;
        }
        else{
            length = b[i].size();
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(length == b[i].size()){
          cout<<b[i]<<" ";
        }
    }
}

int main(){
    vector<string> arr;
    string s;
    int n, len = 0;
    cout<<"How many words you want to enter : ";
    cin>>n;
    cout<<"\n"<<"Enter the words : ";
    for(int i = 0 ; i < n ; i++){
        cin>>s;
        arr.push_back(s);
    }
    len = arr[0].size();
    longestwords(arr, len, n);
    return 0;
    
}
