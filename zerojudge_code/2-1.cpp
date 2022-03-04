#include<iostream>
#include<algorithm>
#include<vector>
#define endl "\n"
using namespace std;
int main(void){
	int m=0;
	cin >> m;
	while(m){
		m--;
		int p, q, r, x, y, z, n, i=0;
		cin >> p >> q >> r >> x >> y >> z >> n;
//		if((p>x) && ((p+q)>(x+y)) && (p+q+r)>(x+y+z)){
//			cout << ((x*(n-1)*(n-1))+(y*(n-1))+z) << endl;
//			continue;
//		}else if((p<x) &&((p+q)<(x+y)) && (p+q+r)<(x+y+z)){
//			cout << ((p*(n-1)*(n-1))+(q*(n-1))+r) << endl;
//			continue;
//		}
		vector<int> a;
		while(true){
			if(i==n){
				break;
			}
			a.push_back((p*i*i)+(q*i)+r);
			a.push_back((x*i*i)+(y*i)+z);
			i++;
		}
		sort(a.begin(), a.end());
		cout << a[n-1] << endl;
	}
	return 0;
}
