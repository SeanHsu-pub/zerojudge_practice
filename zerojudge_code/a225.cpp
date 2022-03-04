#include<iostream>
#include<map>
#include <algorithm>
#include<vector>
#define inf 999999
using namespace std;
bool mycompare(int a, int b){
	return a>b;
}
int main(void){
	int n=0;
	while(cin >> n){
		map<int, vector<int> > a;
		int b[10]={};
		for(int i=0; i<10; i++){
			b[i]=-1;
		}
		while(n){
			n--;
			int t, temp; 
			cin >> t;
			temp=t;
			t%=10;
			if(b[t]==-1){
				b[t]=t;
			}
			a[t].push_back(temp);
			sort(a[t].begin(), a[t].end(), mycompare);
		}
		//sort(a.begin(), a.end());
		for(int i=0; i<10; i++){
			if(b[i]!=-1){
				for(vector<int>::iterator it=a[i].begin(); it!=a[i].end(); it++){
					cout << *it << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
} 
