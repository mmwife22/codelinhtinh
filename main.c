#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int d1,d2,m1,m2,y1,y2;
    //scanf("%d %d %d %d %d %d", &d1,&m1,&y1,&d2,&m2,&y2);
    int sum;
    sum=0;
    y1=2017; y2=2017;m1=12;m2=12;d1=1;d2=24;
    while ((m1!=m2)&&(y1!=y2)&&(d1!=d2)){
        if ((m1==m2)&&(y1==y2)){
            sum+=d2-d1;
            d1=d2;
        } else {
        switch (m1){
         case 1:
           sum+=31-d1+1;
           m1++;
           d1=1;
           break;
         case 2:
           if (y1%4==0){sum+=29-d1+1;}
            else sum+=28-d1+1;
           m1++;
           d1=1;
           break;
         case 3:
           sum+=31-d1+1;
           m1++;
           d1=1;
           break;
         case 4:
           sum+=30-d1+1;
           m1++;
           d1=1;
           break;
         case 5:
           sum+=31-d1+1;
           m1++;
           d1=1;
           break;
         case 6:
           sum+=30-d1+1;
           m1++;
           d1=1;
           break;
         case 7:
           sum+=31-d1+1;
           m1++;
           d1=1;
           break;
         case 8:
           sum+=31-d1+1;
           m1++;
           d1=1;
           break;
         case 9:
           sum+=30-d1+1;
           m1++;
           d1=1;
           break;
         case 10:
           sum+=31-d1+1;
           m1++;
           d1=1;
           break;
         case 11:
           sum+=30-d1+1;
           m1++;
           d1=1;
           break;
         default:
           sum+=31-d1+1;
           m1=1;
           y1++;
           d1=1;
        }
    }
    }
    printf("%d", sum);
    return 0;
}
