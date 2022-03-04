//file name: binary_search_tree.cpp
//use binary search tree to deal with data (loading, storing, adding, deleting, revising, output)
#include<bits/stdc++.h>
using namespace std;
//定義student結構
struct student{
	char name[20];	//學生姓名 
	int score;		//學生成績 
	struct student *llink;	//左子連結 
	struct student *rlink;	//右子連結 
};
int d[100], j, conut=0;
void load_f(void);		//載入函數 
void save_f(void);		//儲存函數 
void insert_f(void);	//新增函數 
void delete_f(void);	//刪除函數 
void modify_f(void); 	//修改函數
void show_f(void);
void show_post(void);	//輸出函數 
void show_preorder(void);
void access(char [], int);	//將資料加入二元搜尋樹
void removing(char []);	//將資料從二元搜尋樹中移除
struct student *replace( struct student *);	//尋找替代節點
void connect(struct student *, char); 
