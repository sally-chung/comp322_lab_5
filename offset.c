#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {

    unsigned int userNum = strtol(argv[1], NULL, 10);
    unsigned int fourKB = 4096;
    unsigned int pageNum;
    unsigned int offset;

    pageNum = userNum / fourKB;
    offset = userNum % fourKB;

    printf("The address %d contains:\n", userNum);
    printf("page number = %d\n", pageNum);
    printf("offset = %d\n", offset);
}

// take arg1 and convert into int
// save into variable (unsigned)

// take arg1 (int) and divide by 4kb (int)
// pageNum = number

// arg1 % 4kb
// offset = number

