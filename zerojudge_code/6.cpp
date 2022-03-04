#include<iostream>
#include<stdio.h>
#include<map>
#include<iterator>
#include<string>
#include<cstring>
#include<vector>
#include<cstdlib>
#include<iomanip>
#include<math.h>
using namespace std;
int main(void){
	int n=0;
	cin >> n;
	while(n){
		int t=0;
		double tt, longg=0;
		cin >> t;
		int temp=t;
		vector<double> a;
		while(temp){
			cin >> tt;
			a.push_back(tt);
			temp--;
		}
		longg+=a[0];
		longg+=a[t-1];
		for(int i=0; i<t-1; i++){
			double abc;
			abc=sqrt(4*a[i]*a[i+1]);
			longg+=abc;
		}
		printf("%.3f\n", longg);
		a.clear();
		n--;
	}
	return 0;
}
