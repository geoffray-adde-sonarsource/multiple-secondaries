#define issue_with_all_indexed_secondaries
#define issue_with_some_unindexed_secondaries

#ifdef issue_with_all_indexed_secondaries
#include "header1.h"

int f(int n, int p) {
    if(p==0) {
        return f1(n,p); // div by 0 in indexed files
    } 
    else {
        return 0;
    }
}
#endif

#ifdef issue_with_some_unindexed_secondaries
#include "header1.weird"

int g(int n, int p) {
    if(p==0) {
        return ni_f1(n,p); // div by 0 in non-indexed files
    } 
    else {
        return 0;
    }
}
#endif



