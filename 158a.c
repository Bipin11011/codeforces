#include<stdio.h>
  int main(){
      int i,n,k,count=0;
      scanf("%d %d",&n,&k);
     
     int scores[n];
     for(i=0;i<n;i++){
         scanf("%d",&scores[i] );
     }
     int k_score=scores[k-1];
     for(i =0;i<n;i++){
         if(scores[i]>0&&scores[i]>=k_score){
             count++;
         }
     }
     printf("%d"/n,count);
    
    return 0;
  }