#include<iostream>
#include<stack>
using namespace std;
int main(void){
	int m=0;
	cin >> m;
	while(m){
		m--;
		int p, q, r, x, y, z, n, i=0, j=0, pqr, xyz;
		cin >> p >> q >> r >> x >> y >> z >> n;
		stack<int> a;
		while(true){
			pqr=(p*i*i)+(q*i)+r;
			xyz=(x*j*j)+(y*j)+z;
			if((i+j)==(n)){
				cout << a.top() << endl;
				break;
			}
			if(pqr>xyz){
				j++;
				a.push(xyz);
			}else{
				i++;
				a.push(pqr);
			}
		} 
		
	}
	return 0;
}
