#include <bits/stdc++.h> 
using namespace std; 

int tokenize(string b, int n){
    for(int i = 0 ; i < n ; i++){
        if(b[i] == '+'){
            cout<<" +, "<<" ";
        }
        else if(b[i] == '-'){
            cout<<" -, "<<" ";
        }
        else if(b[i] == '('){
            cout<<" (, "<<" ";
        }
        else if(b[i] == ')'){
            cout<<" ), "<<" ";
        }
        else if(b[i] == '*'){
            cout<<" *, "<<" ";
        }
        else if(b[i] == '/'){
            cout<<" /, "<<" ";
        }
        else if(b[i] == '['){
            cout<<" [, "<<" ";
        }
        else if(b[i] == ']'){
            cout<<" ], "<<" ";
        }
        else if(b[i] == '{'){
            cout<<" {, "<<" ";
        }
        else if(b[i] == '}'){
            cout<<" }, "<<" ";
        }
        else{
            cout<<" "<<b[i]<<" ";
        }
    }
}

int main(){
    string s;
    int len = 0;
    cout<<"Enter the string: ";
    cin>>s;
    len = s.size();
    tokenize(s, len);
    return 0;
}
