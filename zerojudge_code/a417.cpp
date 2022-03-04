#include<bits/stdc++.h>
using namespace std;
int main(){
	int dx2[4]={0, 1, 0, -1};
	int dy2[4]={1, 0, -1, 0};
	int dx1[4]={1, 0, -1, 0};
	int dy1[4]={0, 1, 0, -1};
	int t;
	while(cin >> t){
		while(t){
			t--;
			int n, m;
			cin >> n >> m;
			const int cn=n;
			int ma[cn+2][cn+2]={};
			for(int i=0; i<cn+2; i++){
				for(int j=0; j<cn+2; j++){
					if(i==0 || j==0 || i==cn+1 || j==cn+1){
						ma[i][j]=-1;
					}else{
						ma[i][j]=0;
					}
				}
			}
			for(int i=0; i<cn+2; i++){
				for(int j=0; j<cn+2; j++){
					//cout << setw(5) << ma[i][j] << " ";
				}
				//cout << endl;
			}
			int x=1, y=1;
			int now=1;
			if(m==1){
				int dir=0;
				while(now<=(n*n)){
					if(dir==0){
						ma[y][x]=now;
						now++;
						if(ma[y-1][x]!=0&&ma[y][x+1]!=0){
							dir=1;
						}
						x+=dx1[dir];
						y+=dy1[dir];
					}else if(dir==1){
						ma[y][x]=now;
						now++;
						if(ma[y+1][x]!=0&&ma[y][x+1]!=0){
							dir=2;
						}
						x+=dx1[dir];
						y+=dy1[dir];
					}else if(dir==2){
						ma[y][x]=now;
						now++;
						if(ma[y+1][x]!=0&&ma[y][x-1]!=0){
							dir=3;
						}
						x+=dx1[dir];
						y+=dy1[dir];
					}else{
						ma[y][x]=now;
						now++;
						if(ma[y-1][x]!=0&&ma[y][x-1]!=0){
							dir=0;
						}
						x+=dx1[dir];
						y+=dy1[dir];
					}
				}
			}else{
				int dir=0;
				while(now<=(n*n)){
					if(dir==0){
						ma[y][x]=now;
						now++;
						if(ma[y+1][x]!=0&&ma[y][x-1]!=0){
							dir=1;
						}
						x+=dx2[dir];
						y+=dy2[dir];
					}else if(dir==1){
						ma[y][x]=now;
						now++;
						if(ma[y+1][x]!=0&&ma[y][x+1]!=0){
							dir=2;
						}
						x+=dx2[dir];
						y+=dy2[dir];
					}else if(dir==2){
						ma[y][x]=now;
						now++;
						if(ma[y-1][x]!=0&&ma[y][x+1]!=0){
							dir=3;
						}
						x+=dx2[dir];
						y+=dy2[dir];
					}else{
						ma[y][x]=now;
						now++;
						if(ma[y-1][x]!=0&&ma[y][x-1]!=0){
							dir=0;
						}
						x+=dx2[dir];
						y+=dy2[dir];
					}
				}
			}
			for(int i=1; i<cn+1; i++){
				for(int j=1; j<cn+1; j++){
					cout << setw(5) << ma[i][j];
				}
				cout << endl;
			}
		}
	}
	
	return 0;
} 
