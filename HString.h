#ifndef _HSTRING_
#define _HSTRING_
#define MAXSIZE 20
#define u_char unsigned char
#include <string.h>
#include <stdio.h> 
#include<malloc.h>
#include<assert.h>
typedef struct HString{
	char *ch;
	int length;
}HString;
void InitString(HString *S);
void StrAssign(HString *S,char *str);
void StrCopy(HString *S,HString *T);
void StrAssign(HString *S,HString *T);
bool StrEmpty(HString *S);
int StrCompare(HString *S,HString *T);
int StrLength(HString *S);

void StrConcat(HString *T,HString *s1,HString *s2);
//void StrIndex(SString S,SString T,int pos);
//void StrReplace(SString S,SString T,SString V);
void StrInsert(HString *S,int pos,HString *T);
void StrDele(HString *S,int pos,int len);
void StrClear(HString *S);
void PrintString(HString *S);
void SubString(HString *S,HString *sub,int pos,int len);




#endif
