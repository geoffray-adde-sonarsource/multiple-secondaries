#pragma once
#include "header2.h"

int f1(int n, int p) {
    if(p!=n) {
        return f2a(n,p);
    }
    else {
        return f2b(n);
    }
}

int ff(int i) {
    if(i==0) {
        return i;
    } else {
        return i+1;
    }
}