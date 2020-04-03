#include<stdio.h>
#include<math.h>
void main()
{
    long sum=1,i,s,b,n;

   for(i=3;i<=100;i++)
  {
     
    sum=sum*i;
    s=sum+1;
   b=sqrt(s);
   for(n=2;n<=b;n++)
    
     if(s%n==0) break;
     if(n>=b+1)
      printf("%d!+1是合数\n",i);

    else
      printf("%d!+1是素数\n",i);
   
}

}