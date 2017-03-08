//
// Created by david on 3/8/17.
//
#include <stdio.h>
#include <stdbool.h>

int main() {
    int input = 0;
    int first = 0;
    int count = 0;
    int position = 0;
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
            // initiate first based on input
            if(start){
                first = input;
                start = false;
            }

            else{
                // update if found
                if (input == first){
                    printf("Number %i was found at position: %i\n", first, position);
                    count++;
                }
            }

            // keep updating position
            position++;
            //printf("Read integer %i\n", input);
        }
    }
    printf("Number %i was found %i times\n", first, count);

    return 0;
}
