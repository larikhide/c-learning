#include <stdio.h>


int main(int argc, const char* argv[]) {
    char answer;
    printf("Do you want mw to salute you? (y/n)");
    scanf("%c", &answer);
    if(answer == 'y') {
        printf("Hello, user!");
    } else if (answer == 'n'){
        printf("I didnt want to salute you anyway!");
    } else {
        printf("I cant understand your input!");
    }

        return 0;
}
// something what i want to remove
