#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
          char str1[101],str2[101]; 
           scanf("%s",str1);
           scanf("%s",str2);
           
           for(int i=0;str1[i];i++){
                   if(str1[i]>='A'&&str1[i]<='Z'){
                             str1[i]=(char)(str1[i]-'A'+'a');
                   }  
           } 
           for(int i=0;str2[i];i++){
                     if(str2[i]>='A'&&str2[i]<='Z'){
                               str2[i]=(char)(str2[i]-'A'+'a');
                     }
           }
           int result=strcmp(str1,str2);
           if(result<0){
                     printf("-1\n");
           }
           else if(result>0){
                     printf("1\n");
           }else {
                     printf("0\n");
           }
           return 0;
}