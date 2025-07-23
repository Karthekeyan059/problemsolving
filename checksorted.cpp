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
	
	int prev = v[0];
	for(int i=1;i<n-1;i++){
		if(v[i] < v[i-1]){
		
			return 0;
		}
	} 
	return 1;
	
	//Tc: o(n)
	
}

