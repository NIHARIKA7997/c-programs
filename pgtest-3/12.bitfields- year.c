#include <stdio.h>

 struct Date {
    unsigned int day : 5;    // 5 bits for day (1-31)
    unsigned int month : 4;  // 4 bits for month (1-12)
    unsigned int year : 11;  // 11 bits for year (0-2047)
};

int main() {
    struct Date  dt = { 02, 10, 2023 };
    printf("Date is %d/%d/%d", dt.day , dt.month , dt.year );    
    return 0;
}
