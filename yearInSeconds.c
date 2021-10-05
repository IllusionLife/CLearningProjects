#include <stdio.h>

#define DAYS_IN_YEAR 365.25
#define HOURS_IN_DAY 24
#define MINUTES_IN_HOURS 60
#define SECONDS_IN_MINUTES 60

int main() {
    int year = 1;
    float days = year * DAYS_IN_YEAR;
    float hours = days * HOURS_IN_DAY;
    double minutes = hours * MINUTES_IN_HOURS;
    double seconds = minutes * SECONDS_IN_MINUTES;

    printf("%.0f", seconds);
    return 0;
}
