#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false);
	cin.tie(0);	
	int n[4]={};
	while(scanf("%d%d%d%d",&n[0],&n[1],&n[2],&n[3])==4){
		int nn;
		//cin >> nn;
		scanf("%d",&nn);
		int t[4]={};
		while(nn){
			nn--;
			int nnn[4]={};
			for(int i=0; i<4; i++){
				nnn[i]=n[i];
			}
			scanf("%d%d%d%d",&t[0],&t[1],&t[2],&t[3]);
			//cin >> t[0] >> t[1] >> t[2] >> t[3];
			int a=0, b=0;
			for(int i=0; i<4; i++){
				if(t[i]==nnn[i]){
					a++;
					nnn[i]=-1;
					continue;
				}
			}
			for(int i=0; i<4; i++){
				if(nnn[i]==-1){
					continue;
				}
				for(int j=0; j<4; j++){
					if(t[i]==nnn[j] && i!=j){
						b++;
						break;
					}
				}
			}
			//cout << a << "A" << b << "B" << endl;
			printf("%dA%dB\n",a,b);
		}
	}
	return 0;
}
