#include <stdio.h>

int find(int a,int b){
    int tmp;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    return a-b;
}
