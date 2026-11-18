#include <stdio.h>

int main() {
    int year;
    int month, day, startDay, i;
    int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonths[1] = 29;
    }

    startDay = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1) % 7;
    printf("\n************** Calendar for %d **************\n", year);

    for (month = 0; month < 12; month++) {
        printf("\n\n ------------- %s %d ------------- \n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        for (i = 0; i < startDay; i++) {
            printf("    ");
        }

        for (day = 1; day <= daysInMonths[month]; day++) 
        {
            printf("%4d", day);

            if ((startDay + day) % 7 == 0)
            {
                printf("\n");
            }
        }

        printf("\n");
        startDay = (startDay + daysInMonths[month]) % 7;
    }
    return 0;
}
