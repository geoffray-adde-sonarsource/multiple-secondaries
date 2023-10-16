#include "header1.h"

int f(int n, int p) {

    if(p==0) {
        return f1(n,p); // div by 0 in indexed files
    } 
    else {
        return 0;
    }
}
