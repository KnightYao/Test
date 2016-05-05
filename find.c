#include <stdio.h>
int IsEven(int a){
    if(a%2) return 0;
    else return 1;
}
int find(int x,int y){
    if(x<y) return find(y,x);
    if(y==0) return x;
    else{
        if(IsEven(x)){
            if(IsEven(y))
                return (find(x>>1,y>>1)<<1);
            else
                return find(x>>1,y);
        }
        else{
            if(IsEven(y))
                return find(x,y>>1);
            else
                return find(y,x-y);
        }
    }
}
