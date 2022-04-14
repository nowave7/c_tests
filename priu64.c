#include <stdio.h>
#include <inttypes.h>

int main (int argc, char *argv[]) {

    // Only requires stdint.h to compile:
    uint64_t myvar = UINT64_C(0) - UINT64_C(1);

    // Requires inttypes.h to compile:
    printf("something ""myvar=%" PRIu64 "\n", myvar);  
}
