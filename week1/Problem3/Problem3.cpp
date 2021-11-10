// author : Amanpreet Singh Bedi 

// Problem : Implement Exponential Search to find given element

#include<bits/stdc++.h>

using namespace std;


void exponentialSearch(int arr[], int key, int n){

    int comparison=0,flag=0;

    if(arr[0] == key){

        comparison=1;

        cout<<"Present "<<comparison<<endl;

        return;
    }

    int range=1;

    while(range<n && arr[range]<=key){

        comparison++;
        range *= 2;
    }

    int l=range/2,h=min(range,n-1),mid;

    while(h>=l){

        comparison++; 

        mid=(h+l)/2;

        if(arr[mid]==key){
            flag=1;
            break;

        }
        else if(arr[mid]>key){
            h=mid-1;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }
    }

    if(flag)
        cout<<"Present "<<comparison<<"\n";
    else
        cout<<"Not Present\n";
}


void solve(){

    int n; 
    cin>>n; 

    int arr[n]; 

    for(int i=0;i<n;++i){
        cin>>arr[i]; 
    } 

    int element; 

    cin>>element;

    exponentialSearch(arr,element,n);
} 

int main(){

    freopen("input.txt","r",stdin);  
    freopen("output.txt","w",stdout); 

    int test_cases; 

    cin>>test_cases; 

    while(test_cases--){
        solve();
    }
}