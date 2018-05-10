#include<iostream>
#include<cstdlib>

using namespace std;

//状态代码

#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

//线性表初始量
#define Sqlist_Init_size 100
#define Init_length 0

//状态定义

typedef int Status;
typedef double ElemType;

//线性表

class Sqlist
{
public:
	Sqlist()
	{
		elem=(ElemType *)malloc(Sqlist_Init_size * sizeof(ElemType));
		list_size=Sqlist_Init_size;
		length=Init_length;
	}

	Status InitSqlist()
	{
		if(!elem) exit(OVERFLOW);
		cout << "线性表初始化成功" << endl;

		return OK;
	}

private:
	ElemType *elem;
	int list_size;
	int length;

protected:

};



//主函数

int main()
{
	Sqlist A;
	A.InitSqlist();

	return 0;
}