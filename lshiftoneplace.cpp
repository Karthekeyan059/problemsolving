#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v;
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++){
		int elem;
		cin>>elem;
		v.emplace_back(elem);
	}
	cin>>k;
	/*int number  = v[0];
	for(int i=0;i<n-1;i++){
		v[i] = v[i+1];
	}
	v[n-1] = number;
	
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}*/
	//Tc: o(n)
	
	//k place shifting
	int knum[k];
	for(int i=0;i<k;i++){
		knum[i] = v[i];
	}
	for(int i=0;i<n-k;i++){
		v[i] = v[i+1];
	}
	int j=0;
	for(int i=n-k;i<n-1;i++){
		v[i] = knum[j++];
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	
}

