// author : Amanpreet Singh Bedi; 

// Sort array using merge sort and find comparison and inversion 

#include<bits/stdc++.h>

using namespace std; 


void mergesort(vector<int>&arr,int l,int r){

    
}


void solve(void){

    int n; 

    cin>>n; 

    vector<int>arr(n); 

    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);
}


int main(){

    int test_cases; 

    cin>>test_cases; 

    while(test_cases--){
        solve();
    }
}