#include<iostream>
#include<string>

using namespace std;

int main(){

int arr[] = {2,3,5,9,12,14,16};
int size = sizeof(arr)/sizeof(int);
int target =  177;

for (int i = 0; i < size; i++)
{
    for (int j = i+1; j < size; j++)
    {
        for (int k = j+1; i < size; k++)
        {
           if(arr[i] + arr[j] + arr[k] == target){
                cout<<"First_index_is : "<<i<<endl;
                cout<<"Second_index_is : "<<j<<endl;
                cout<<"Third_index_is : "<<k<<endl;
                break;
           }
        }
        
    } 
}
        


    return 0;
}