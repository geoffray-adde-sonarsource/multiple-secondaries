#include "header1.h"
#include "header1.weird"

int f(int n, int p) {

    if(p==0) {
        return f1(n,p); // div by 0 in indexed files
    } 
    else {
        return 0;
    }
}

int f(int n, int p) {

    if(p==0) {
        return ni_f1(n,p); // div by 0 in non-indexed files
    } 
    else {
        return 0;
    }
}