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
	
	long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    
    return maxi;
	
	cout<<m;
	
	
}
