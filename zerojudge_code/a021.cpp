#include<bits/stdc++.h>
using namespace std;
int main(void){
	char aa[500]={};
	int aaa[500]={};
	char bb[500]={};
	int bbb[500]={};
	int ccc[500]={};
	bool a=false;
	bool s=false;
	bool m=false;
	bool d=false;
	int i=0, j=0;
	while(true){
		cin >> aa[i];
		if(aa[i]=='+'){
			aa[i]=0;
			a=true;
			break;
		}else if(aa[i]=='-'){
			aa[i]=0;
			s=true;
			break;
		}else if(aa[i]=='*'){
			aa[i]=0;
			m=true;
			break;
		}else if(aa[i]=='/'){
			aa[i]=0;
			d=true;
			break;
		}
		i++;	
	}
	char t;
	while(cin >> t){
//		cin >> t;
		bb[j]=t;
		j++;
	}
	//cout << i << endl;
	//cout << j << endl;
	for(int ii=0; ii<i; ii++){
		aaa[ii]=(int)aa[ii]-48;
		//cout << aaa[ii];
	}
	//cout << endl;
	for(int ii=0; ii<j; ii++){
		bbb[ii]=(int)bb[ii]-48;
		//cout << bbb[ii];
	}
	if(a){
		int ti=i;
		int tj=j;
		if(ti>tj){
			while(ti){
				ccc[ti-1]=aaa[ti-1]+bbb[tj-1];
				ti--;
				tj--;
				if(tj==0||ti==0){
					break;
				}
			}
			while(ti){
				ccc[ti-1]=aaa[ti-1];
				ti--;
			}
			for(int ii=i-1; ii>0; ii--){
				if(ccc[ii]>=10){
					ccc[ii-1]++;
					ccc[ii]-=10;
				}
			}
			for(int ii=0; ii<i; ii++){
				cout << ccc[ii];
			}
		}else{
			while(tj){
				ccc[tj-1]=aaa[ti-1]+bbb[tj-1];
				ti--;
				tj--;
				if(tj==0 || ti==0){
					break;
				}
			}
			while(tj){
				ccc[tj-1]=bbb[tj-1];
				tj--;
			}
			for(int ii=j-1; ii>0; ii--){
				if(ccc[ii]>=10){
					ccc[ii-1]++;
					ccc[ii]-=10;
				}
			}
			for(int ii=0; ii<j; ii++){
				cout << ccc[ii];
			}
		}
		
	}else if(s){
		int ti=i;
		int tj=j;
		if(ti>tj){
			while(ti){
				ccc[ti-1]=aaa[ti-1]-bbb[tj-1];
				ti--;
				tj--;
				if(tj==0||ti==0){
					break;
				}
			}
			while(ti){
				ccc[ti-1]=aaa[ti-1];
				ti--;
			}
			for(int ii=i-1; ii>0; ii--){
				if(ccc[ii]<0){
					ccc[ii-1]--;
					ccc[ii]+=10;
				}
			}
			for(int ii=0; ii<i; ii++){
				cout << ccc[ii];
			}
		}else if(tj>ti){
			while(tj){
				ccc[tj-1]=bbb[tj-1]-aaa[ti-1];
				ti--;
				tj--;
				if(tj==0 || ti==0){
					break;
				}
			}
			while(tj){
				ccc[tj-1]=bbb[tj-1];
				tj--;
			}
			for(int ii=j-1; ii>0; ii--){
				if(ccc[ii]<0){
					ccc[ii-1]--;
					ccc[ii]+=10;
				}
			}
			cout << "-";
			for(int ii=0; ii<j; ii++){
				cout << ccc[ii];
			}
		}else{
			if(aaa[0]>bbb[0]){
				while(ti){
				ccc[ti-1]=aaa[ti-1]-bbb[tj-1];
				ti--;
				tj--;
				if(tj==0||ti==0){
					break;
				}
			}
			while(ti){
				ccc[ti-1]=aaa[ti-1];
				ti--;
			}
			for(int ii=i-1; ii>0; ii--){
				if(ccc[ii]<0){
					ccc[ii-1]--;
					ccc[ii]+=10;
				}
			}
			for(int ii=0; ii<i; ii++){
				cout << ccc[ii];
			}
			}else{
				while(tj){
				ccc[tj-1]=bbb[tj-1]-aaa[ti-1];
				ti--;
				tj--;
				if(tj==0 || ti==0){
					break;
				}
			}
			while(tj){
				ccc[tj-1]=bbb[tj-1];
				tj--;
			}
			for(int ii=j-1; ii>0; ii--){
				if(ccc[ii]<0){
					ccc[ii-1]--;
					ccc[ii]+=10;
				}
			}
			cout << "-";
			for(int ii=0; ii<j; ii++){
				cout << ccc[ii];
			}
			}
		}
	}else if(m){
		int ti=i;
		int tj=j;
		for(int ii=ti-1; ii>=0; ii--){
			for(int jj=tj-1; jj>=0; jj--){
				ccc[ii+jj]+=(aaa[ii]*bbb[jj]);
			}
		}
		for(int ii=(ti+tj-2); ii>0; ii--){
			int temp;
			temp=ccc[ii]/10;
			ccc[ii]%=10;
			ccc[ii-1]+=temp;
		}
		for(int ii=0; ii<=(ti+tj-2); ii++){
			cout << ccc[ii];
		} 
	}else if(d){
		
		int ti=i;
		int tj=j;
		int temptemp[10][500]={};
		for(int ii=0; ii<=ti-1; ii++){
			//cout << aaa[ii];
		}
		for(int ii=0; ii<=tj-1; ii++){
			//cout << bbb[ii];
		}
		//cout << endl;
		for(int ii=0; ii<=tj-1; ii++){
			for(int jj=0; jj<=9; jj++){
				temptemp[jj][ii]=bbb[ii];
			}
		}
		for(int jj=0; jj<=9; jj++){
			for(int co=tj-1; co>=0; co--){
				temptemp[jj][co]*=jj;
			}
			for(int co=tj-1; co>0; co--){
				int ttt=temptemp[jj][co]/10;
				temptemp[jj][co]%=10;
				temptemp[jj][co-1]+=ttt;
			}
			for(int co=0; co<=tj-1; co++){
				//cout << jj << " " << temptemp[jj][co] << endl;
			}
		}
		//cout << aaa[0] << endl << bbb[0] << endl;
		vector<int> cccc;
		if(tj>ti){
			cout << 0;
		}else if(tj==ti && aaa[0]<bbb[0]){
			cout << 0;
		}else{
			int out=0;
			for(int ii=0; ii<=(ti-tj); ii++){
				out=0;
				for(int kk=0; kk<=9; kk++){
					int test[500]={};
					for(int jj=0+ii; jj<=tj-1+ii; jj++){
						test[jj]=aaa[jj]-temptemp[kk][jj];
						if(test[jj]<0){
							out=-1;
							cccc.push_back(kk-1);
							break;
						}else if(test[jj]>0){
							out=1;
							break;
						}
						/*
						if(temptemp[kk][jj]>aaa[jj]){
							cccc.push_back(kk-1);
							out=true;
							break;
						}
						*/
					}
					if(out==-1){
						for(int jj=0+ii; jj<=tj-1+ii; jj++){
							aaa[jj]-=temptemp[kk-1][jj];
						}
						for(int jj=tj-1+ii; jj>=0+ii; jj--){
							if(aaa[jj]<0){
								aaa[jj-1]--;
								aaa[jj]+=10;
							}
						}
						break;
					}else if(out == 1){
						continue;
					}
					
				}
				
			}
			for(vector<int>::iterator it=cccc.begin(); it!=cccc.end(); it++){
				cout << *it;
			}
		}
		
	}
	return 0;
}
