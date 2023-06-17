#include<bits/stdc++.h>
using namespace std;

void Replacechar(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if(input[0]=='a'){
        input[0] ='x';
    }
    return Replacechar(input + 1);
}

int main(){
    char input[100];
    cin>>input;
        
    cout<<input<<endl;
    Replacechar(input);
    cout<<input<<endl;
    return 0;
}