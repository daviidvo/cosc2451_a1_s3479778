#include <stdio.h>
#include <stdbool.h>

int main() {
    int input = 0;
    int max = 0;
    bool start = true;

    while (true) {
        int n = scanf("%i", &input);

        // If there is an invalid input
        if (n < 1) {
            int c = 0;
            // flush the line
            while ((c = getc(stdin)) != '\n' && c != EOF) {
                printf("Bad input: %c\n", c);
            }
            // stop the loop when reaching EOF
            if (c == EOF) {
                break;
            }
        } else { //successfully read
            // initiate max based on input
            if(start){
                max = input;
                start = false;
            }

            // update max
            if (input > max){
                max = input;
            }
            printf("Read integer %i\n", input);
        }
    }
    printf("The largest number is: %i\n", max);

    return 0;
}