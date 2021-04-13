#include "HString.h"
void InitString(HString *S){
	S->ch=NULL;
	S->length=0;
}
void StrAssign(HString *S,char *str){
	int len=strlen(str);
	if(S->ch!=NULL)
	free(S->ch);
	S->ch=(char*)malloc(sizeof(char)*len);
		assert(S->ch!=NULL);
		for(int i=0;i<len;i++)
		{
			S->ch[i]=str[i];
		}S->length=len;
}
void PrintString(HString *S){
	printf("%s",S->ch);
}
int StrLength(HString *S){
	return S->length;
}
void StrCopy(HString *S,HString *T){
	int len=StrLength(T);
	if(S->ch!=NULL)
	free(S);
	S->ch=(char*)malloc(sizeof(char)*len);
	assert(S->ch!=NULL);
	for(int i=0;i<len;i++)
	{
		S->ch[i]=T->ch[i];
		
	}
	S->length=len;
}
bool StrEmpty(HString *S){
	return S->length==0;
}
int StrCompare(HString *S,HString *T){
	int flag=0;
	if(S->length==0&&T->length==0)
	return 0;
	int i=0;
	int j=0;
	while(i<S->length&&j<T->length)
	{
		if(S->ch[i]>T->ch[i])
		return  1;
		else
		if(S->ch[i]<T->ch[i])
		return -1;
		else {
			j++;
			i++;
		}
	}
	if(i<S->length)
	return 1;
	if(j>T->length)
	return -1;
	return 0;
}
void StrConcat(HString *T,HString *s1,HString *s2){
	if(T->ch!=NULL)
	free(T->ch);
	int len1=StrLength(s1);
	int len2=StrLength(s2);
	T->ch=(char*)malloc(sizeof(char)*(len1+len2));
	assert(T->ch);
	int i=0;
	for(i=0;i<len1;i++)
	{
		T->ch[i]=s1->ch[i];
	}
	for(int j=0;j<len2;j++)
	{
		T->ch[i+j]=s2->ch[j];
	}
	T->length=len1+len2;
}
void SubString(HString *S,HString *sub,int pos,int len){
	if(pos<0||pos>S->length||len<0||len>S->length-pos)
	return;
	if(sub->ch!=NULL)
	free(sub->ch);
	sub->ch=(char*)malloc(sizeof(char)*len);
	assert(sub->ch!=NULL);
	for(int i=0;i<len;i++)
	{
		sub->ch[i]=S->ch[pos+i];
	}
	sub->length=len;
}
void StrInsert(HString *S,int pos,HString *T){
	int len1=StrLength(S);
	int len2=StrLength(T);
	if(T->length==0||pos<0||pos>S->length)
	return;
	else{
		char *ch=(char*)realloc(S->ch,sizeof(char)*(S->length+T->length));
	 assert(ch!=NULL);
	 S->ch=ch;
	 
	 for(int j=S->length-1;j>pos;--j)
	 {
	 	S->ch[j+T->length]=S->ch[j];
	 }
	 for(int i=0;i<T->length;++i)
{
	S->ch[i+pos]=T->ch[i];
	
	 }	 
}
S->length=S->length+T->length;

}
