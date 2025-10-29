#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//Upgraded version.
void upperCaseToLowerCase(char word[], int n){
    for(int i=0; i<n; i++){
        if(word[i]>='A' && word[i]<='Z'){
            word[i] = word[i] - 'A' + 'a';
        }
    }
cout<<word<<endl;
}

void convertToUpperCase(char word[], int n){
    for(int i=0; i<n; i++){
        if(word[i]>='A' && word[i]<='Z'){
            if(word[i]==' ') i+1;
            continue;
        }else{
            word[i] = word[i]-'a' + 'A';
        }
    }
    cout<<word<<endl;
}

int main(){
char word[] = "Rahul Kumar Sharma";
char word1[] = "Rahul Kumar Sharma";

convertToUpperCase(word, strlen(word));
upperCaseToLowerCase(word1, strlen(word1));

return 0;
}
