#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int
main(int argc, char *argv[]){
    
    if(argc != 2){
        printf("./sleep <time>");
        exit(1);
    }
    
    if(*argv[1] > '9' || *argv[1] < '0'){
        printf(" 0 <= time <= 9");
        exit(1);
    }

    sleep(atoi(argv[1]));
    exit(0);
}