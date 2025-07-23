#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int elem;
		cin>>elem;
		v.emplace_back(elem);
	}
	
	int firstmax = INT_MIN,secondmax = INT_MIN;
	for(int i=0;i<n;i++){
		if(v[i] > firstmax){
			secondmax = firstmax;
			firstmax = v[i];
		}else{
			if(v[i] > secondmax && v[i] != firstmax){
				secondmax = v[i];
			}
		}
		
	}
	
	cout<<firstmax<<" "<<secondmax;
	
	//Tc: o(2n)
	
}
