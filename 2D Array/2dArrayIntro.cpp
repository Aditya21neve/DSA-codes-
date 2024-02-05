#include <iostream>
using namespace std;

bool isfound(int arr[][4],int target, int row, int col){
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]== target){
            return 1;
        }
    }
    
}
return 0;
}
int main (){

int arr[3][4];
// int ar2[3][3] {{1,11,111},{2,22,222},{3,33,333}};

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}
/*for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<ar2[i][j];
    }
    cout<<endl;
}
*/
int target;
cout<<"Enter the element for search"<<endl;
cin>>target;

if(isfound(arr,target,3,4)){
    cout<<"Element is found"<<endl;
}else{
    cout<<"Not Found"<<endl;
}
}