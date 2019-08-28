#include<stdio.h>
#include<string.h>
int main()
{
 int i;
 int encryptStatus=1;
 char str[1000];
 gets(str); 
 i=0;
 while(str[i]!='\0')
 {
 	if(encryptStatus==1){
		if ((str[i]==40)&&(str[i+1]==39))
		{
			encryptStatus=0;
		}
	}else{
		if((str[i]==39)&&(str[i+1]==41)){
			encryptStatus=1;
		}
	}
 	if(!((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127))&&encryptStatus==1)
	{
		if(str[i]>='A'&&str[i]<='Z')
		printf("%c",'Z'+'A'-str[i]);
		if(str[i]>='a'&&str[i]<='z')
		printf("%c",'z'+'a'-str[i]);
	}
    if(((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127))||encryptStatus==0)
    {
      printf("%c",str[i]);    
    }
   i++;
 }
  return 0;
}