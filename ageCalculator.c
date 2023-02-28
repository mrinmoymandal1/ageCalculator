#include <stdio.h>
#include <time.h>

int main()
{
    // Get current time
    time_t now = time(NULL);
    struct tm *current_time = localtime(&now);

    // Get birthdate from user
    int birth_year, birth_month, birth_day;
    printf("Enter your birth year (yyyy): ");
    scanf("%d", &birth_year);
    printf("Enter your birth month (mm): ");
    scanf("%d", &birth_month);
    printf("Enter your birth day (dd): ");
    scanf("%d", &birth_day);

    // Calculate age
    int age = current_time->tm_year + 1900 - birth_year;
    if (current_time->tm_mon + 1 < birth_month ||
        (current_time->tm_mon + 1 == birth_month && current_time->tm_mday < birth_day))
    {
        age--;
    }

    // Print age
    printf("Your age is %d years old.\n", age);

    return 0;
}
