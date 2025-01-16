//Display the current Date & Time. [#include <time.h> for time and ctime function and
//time_t datatype.]
#include <stdio.h>
#include<time.h>
void main() {

    time_t currentTime;
    
    time(&currentTime);
    
    char* timeString = ctime(&currentTime);
    
    printf("Current Date and Time: %s", timeString);
}