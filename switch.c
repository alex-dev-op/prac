#include<stdio.h>
int main(){
    int hours;

    printf("Enter number of hours: ");
    scanf("%d", &hours);

    switch(hours)
    {
        case 1:
        printf("Dangerous Practice");
            break;
        case 2:
        printf("Almost There");
            break;
        case 3:
        printf("Quite good");
            break;
        case 4:
        printf("Excellent");
            break;
        default:
        printf("RELEVANCE!");
    }
    return 0;
}