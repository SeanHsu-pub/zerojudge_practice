#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n=0;
	while(cin >> n){
		vector<int> a;
		while(n--){
			int t;
			cin >> t;
			a.push_back(t);
		}
		sort(a.begin(), a.end());
		for(vector<int>::iterator it=a.begin(); it!=a.end(); it++){
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}
