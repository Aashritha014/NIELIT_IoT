#include <stdio.h> 

int main() {
    for (int i = 0; i < 3; i++) {
        switch(i) {
            case 0:
                printf("*\n");
                break;
            case 1:
                printf("**\n");
                break;
            case 2:
                printf("***\n");
                break;
        }
    }
    return 0;
}