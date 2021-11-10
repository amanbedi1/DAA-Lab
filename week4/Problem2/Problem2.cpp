// author : Amanpreet Singh Bedi; 

// Sort array using quicksort and find comparison and inversion 

#include<bits/stdc++.h>

using namespace std; 



int comparison=0,swaps=0;

void printArray(int* arr, int n){

    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

int part(int* arr, int l, int h){

    int pivot_ele = arr[l],i=l-1;

    for(int j=l; j <=h-1 ; j++){

        if(arr[j]<pivot_ele){
            i++;
            swap(arr[i],arr[j]);
            ++swaps;
        }
        comparison++;
    }
    swap(arr[i+1],arr[h]);
    ++swaps;

    return (i+1);
}

void Sort(int* arr, int l,int h){

    if(l<h){

        int p = part(arr,l,h);
        Sort(arr,l,p-1);
        Sort(arr,p+1,h);
    }
}

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 

    int test_cases; 

    cin>>test_cases; 

    while(test_cases--){

        int n;
        cin>>n;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin>>arr[i];

        comparison=0,swaps=0;

        Sort(arr,0,n-1);

        printArray(arr,n);

        cout<<"\ncomparison: "<<comparison<<endl;

        cout<<"swaps: "<<swaps<<endl;
    }
    return 0;
}