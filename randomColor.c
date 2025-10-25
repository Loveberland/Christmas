#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

char* randomColor() {
        static int seeded = 0;
        if (!seeded) {
                srand(time(NULL));
                seeded = 1;
        }

        int random = rand() % 6;

        switch (random) {
                case 0: return RED;
                case 1: return GREEN;
                case 2: return YELLOW;
                case 3: return BLUE;
                case 4: return MAGENTA;
                case 5: return CYAN;
                default: return RESET;
        }
}