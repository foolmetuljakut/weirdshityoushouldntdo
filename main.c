#include <stdio.h>
#include "cwithnamespaces.h"

int main(int argc, char** argv) {
    int i = 2;
    printf("2*%d=%d\n", i, Namespace.fn(i));
    return 0;
}