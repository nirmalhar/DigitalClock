#include <stdio.h>
#include <unistd.h> // for sleep function

int main() {
    int hour = 0, minute = 0, second = 0; // Initialize variables for time

    while (1) { // Infinite loop
        // Print the current time
        printf("%02d : %02d : %02d\n", hour, minute, second);
        
        // Increment seconds and update minutes and hours accordingly
        second++;
        if (second == 60) {
            second = 0;
            minute++;
            if (minute == 60) {
                minute = 0;
                hour++;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }

        // Wait for 1 second
        sleep(1);
    }

    return 0;
}
