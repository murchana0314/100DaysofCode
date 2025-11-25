//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char day[3], month[3], year[5], date[50], new_date[50];

    printf("Enter the date in dd/mm/yyyy format: ");
    scanf("%s", date);

    sscanf(date, "%2s/%2s/%4s", day, month, year);

    if (strcmp(month, "04") == 0) {
        sprintf(new_date, "%s-Apr-%s", day, year);
    } else {
        sprintf(new_date, "%s-%s-%s", day, month, year);
    }

    printf("Converted date: %s\n", new_date);

    return 0;
}