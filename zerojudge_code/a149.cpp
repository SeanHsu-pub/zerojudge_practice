#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int n;
	cin >> n;
	vector<int> a;
	while(n){
		n--;
		int t;
		cin >> t;
		a.push_back(t);
	}
	int total=1;
	for(vector<int>::iterator it=a.begin(); it!=a.end(); it++){
		int temp;
		temp=*it;
		if(*it==0){
			cout << 0 <<endl;
			continue;
		}
		while(temp){
			total*=(temp%10);
			temp/=10;
		}
		cout << total << endl;
		total=1;
	}
	return 0;
}
