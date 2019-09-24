#include <stdio.h>
#include <stdlib.h>
#include "bloom.h"

int main(int argc, char*argv[])
{
    char line[2048];
    char bf[BLOOM_SIZE] = {0};

    printf("Insert mebers in the set. Use ENTER for each member\n");

    while (fgets(line, 2048, stdin)!=NULL) {
        bloom_insert(bf, line);
    }
 
    printf("content of BF: ");
    bloom_print(bf);

    printf("Is SNSD a member? %s\n", bloom_test(bf, "SNSD\n")? "yes": "no");

}
