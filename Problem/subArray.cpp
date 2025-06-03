#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){

vector<int> array = {1,2,3,4,5};
int n=5;

    for(int st =0; st<n; st++){
        for(int end =st; end<n; end++){

            for(int i= st; i<=end; i++){
                cout<<array[i];
            }

            cout<<" ";
        }
        cout<<endl;
    }


//
//   for(int st =0; st<n; st++){
//         for(int end =st; end<n; end++){  
            
//             cout<<" ";
//         }
//         cout<<endl;
//     }




    return 0;
}