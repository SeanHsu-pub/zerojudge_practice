//file name: binary_search_tree.cpp
//use binary search tree to deal with data (loading, storing, adding, deleting, revising, output)
#include<bits/stdc++.h>
using namespace std;
//�w�qstudent���c
struct student{
	char name[20];	//�ǥͩm�W 
	int score;		//�ǥͦ��Z 
	struct student *llink;	//���l�s�� 
	struct student *rlink;	//�k�l�s�� 
};
int d[100], j, conut=0;
void load_f(void);		//���J��� 
void save_f(void);		//�x�s��� 
void insert_f(void);	//�s�W��� 
void delete_f(void);	//�R����� 
void modify_f(void); 	//�ק���
void show_f(void);
void show_post(void);	//��X��� 
void show_preorder(void);
void access(char [], int);	//�N��ƥ[�J�G���j�M��
void removing(char []);	//�N��Ʊq�G���j�M�𤤲���
struct student *replace( struct student *);	//�M����N�`�I
void connect(struct student *, char); 
