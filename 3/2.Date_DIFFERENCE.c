#include <stdio.h>

 int is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

 int days_in_month(int year, int month) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (month == 2 && is_leap_year(year)) {
        return 29;
    }
    return days[month];
}

 long long days_since_epoch(int year, int month, int day) {
    long long days = 0;
    
    for (int y = 1; y < year; y++) {
        days += is_leap_year(y) ? 366 : 365;
    }
    
    for (int m = 1; m < month; m++) {
        days += days_in_month(year, m);
    }
    
    days += day;
    
    return days;
}

int main() {
    int year1, month1, day1;
    int year2, month2, day2;

    printf("Enter the first date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &year1, &month1, &day1);

    printf("Enter the second date (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &year2, &month2, &day2);

    // Calculate the days since the epoch for both dates
    long long days1 = days_since_epoch(year1, month1, day1);
    long long days2 = days_since_epoch(year2, month2, day2);

    // Calculate the absolute difference
    long long date_difference = days2 - days1;
    if (date_difference < 0) {
        date_difference = -date_difference;
    }

    printf("The difference between Date 2 and Date 1 is: %lld days.\n", date_difference);

    return 0;
}
