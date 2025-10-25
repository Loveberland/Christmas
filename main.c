#include <stdio.h>
#include <unistd.h>
#include "randomColor.h"

#define RESET   "\x1b[0m"
#define BROWN "\x1b[38;5;94m"

void getTree() {
        int treeSize = 9;
        while (treeSize--) {
                for (int space = 0; space < treeSize; space++) printf(" ");
                for (int star = treeSize * 2; star < 17; star++) printf("%s*", randomColor());
                printf("%s\n", RESET);
        }
        printf("       %s|||%s\n\n", BROWN, RESET);
}

int main(void) {
        getTree();
        sleep(1);
        main();
        return 0;
}