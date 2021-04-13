#include "HString.h"
int main()
{
	
	HString S;
	InitString(&S);
	StrAssign(&S,"abcdEF");
//	PrintString(&S);
	HString T;
		
	InitString(&T);
//	StrCopy(&T,&S);
	StrAssign(&T,"abc");
//	PrintString(&T);
	HString Z;
	InitString(&Z);
	/*
	StrConcat(&Z,&S,&T);
	PrintString(&Z);*/
//	SubString(&S,&Z,2,4);
//	PrintString(&Z);
	StrInsert(&S,1,&T);
		PrintString(&S);
	return 0;
}
