/*A student gets grades based on score and subject: If subject is "Math" and score ≥85 → "Excellent in Math" Otherwise, grades based on score: 
 Score ≥90 → "Excellent"  Score ≥75 → "Good" Score ≥50 → "Average" Score <50 → "Poor" */
#include <stdio.h>
#include <string.h>

int main() 
{
    int marks;
    char subject[100];

    printf("Enter the subject: ");
    scanf("%s", subject);

    printf("Enter the marks: ");
    scanf("%d", &marks);

    printf("%s\n",(strcmp(subject, "Math") == 0 && marks >= 85) ? "Excellent in Math" : (marks >= 90) ? "Excellent" : (marks >= 75) ? "Good" : (marks >= 50) ? "Average" : "Poor");

    return 0;
}