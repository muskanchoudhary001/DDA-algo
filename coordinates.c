#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
     float dx=x2-x1;
     float dy=y2-y1;
    int steps =(dx>dy)?dx:dy;
    float Xin=dx/(float)steps;
    float Yin=dy/(float)steps;
    float xnext=x1;
    float ynext=y1;
    while(steps--){
           xnext=xnext+Xin;
           ynext=ynext+Yin;
           printf("\n%.0f %.0f",round(xnext),round(ynext));

    }
    return 0;
}