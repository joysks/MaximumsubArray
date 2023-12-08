#include<bits/stdc++.h>
using namespace std;
void MaxSubArraySum(int arr[],int n){

int Smax=-100000;
for(int i=0;i<n;i++){
   int sum=0;
   for(int j=i;j<n;j++) {
    sum+=arr[j];
     if (sum>Smax){
        Smax=sum;
     }

   }

}
cout<<"Maximum sub Array Sum: "<<Smax<<endl;

}




int main(){

int n,i;
int arr[100];


cout<<"Inter the array size"<<endl;
cin>>n;

cout<<"Enter the array element"<<endl;
for(i=0;i<n;i++){


    cin>>arr[i];

}

 MaxSubArraySum(arr[],n);

}
