// author - Amanpreet Singh Bedi 


#include<bits/stdc++.h> 

using namespace std; 



void solve(void){  

	int n; 

	cin>>n;  

	int el; 




	cin>>el;


	vector<int>nums(n); 


	for(int i=0;i<n;++i){ 
		cin>>nums[i]; 
	}   



	int element_pos=-1;



	for(int i=0;i<n;++i){  

		if(nums[i]==element){  
			element_pos=i; 
			break;
		} 
	} 


	if(element_pos==-1){ 
		cout<<"Not found\n";  
	} 
	else{
		cout<<"Found total comparison "<<element_pos+1<<'\n';
	}


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