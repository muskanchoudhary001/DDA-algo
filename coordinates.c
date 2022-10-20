#include<stdio.h>
#include<math.h>
int main(){
    int x0,x2,y0,y2;
    scanf("%d %d %d %d",&x0,&x2,&y0,&y2);
     float dx=x2-x0;
     float dy=y2-y0;
    int steps =(dx>dy)?dx:dy;
    float Xin=dx/(float)steps;
    float Yin=dy/(float)steps;
    float xnext=x0;
    float ynext=y0;
    while(steps--){
           xnext=xnext+Xin;
           ynext=ynext+Yin;
           printf("\n%.0f %.0f",round(xnext),round(ynext));

    }
    return 0;
}
