#include <bits/stdc++.h>

using namespace std;

int twosum(vector<int> v,int t,int n);
int slidingwin(vector<int> v,int t,int n);
int main(){
	
	vector<int> v;
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		int elem;
		cin>>elem;
		v.emplace_back(elem);
	}
	cin>>t;
	int res = twosum(v,t,n);
	if(res == 1){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	
}


int slidingwin(vector<int> v,int t,int n){
	
	int i=0,j=1;
	while(){
		
		
	}
	
}

int twosum(vector<int> v, int t,int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((v[i]+v[j]) == t && i != j){
				return 1;
			}
		}
	}
	
	//Time complexity:O(n2) --> O(n) with sliding window
	
	return 0;
	
}
