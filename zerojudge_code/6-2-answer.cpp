#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double inf=99999999;
double circle[9], ans, tmp, X[9];
int n;
double my_abs(double x){
	if(x<0){
		return -x;
	}else{
		return x;
	}
}

double get_dis(int c1, int c2){
	double a=circle[c1]+circle[c2];
	double b=my_abs(circle[c1]-circle[c2]);
	return sqrt(a*a-b*b);
}

//與第i個圓鄉切的那個圓一定是x座標最遠的那個
void solve(){
	do{
		memset(X, -1, sizeof(X));
		X[1]=circle[1];
		tmp=-1;
		for(int i=2; i<=n; i++){
			double x_=circle[i];
			for(int j=1; j<i; j++){
				x_=max(x_, X[j]+get_dis(i, j));
			}
			X[i]=x_;
		}
		for(int i=1; i<=n; i++){
			tmp=max(tmp, X[i]+circle[i]);
		}
		ans=min(ans, tmp);
	}while(next_permutation(circle+1, circle+1+n));
} 

int main(void){
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> circle[i];
		}
		ans=inf;
		sort(circle+1, circle+1+n);
		solve();
		cout << fixed << setprecision(3) << ans << endl;
	}
	return 0;
}
