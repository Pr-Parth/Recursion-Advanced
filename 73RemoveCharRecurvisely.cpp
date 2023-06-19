#include<bits/stdc++.h>
using namespace std;

void Removechar(char input[]){
    if (input[0]=='\0'){
        return;
    }
    if(input[0]!='a'){
        Removechar(input+1);
    }
    

    else{
        for (int i = 0; input[i] != '\0'; i++)
        {
            input[i]=input[i+1];
        }
        Removechar(input);
        
    }
}


int main(){
    char input[100];
    cin>>input;
    cout<<input<<endl;
    Removechar(input);
    cout<<input<<endl;
    return 0;
}