#include<stdio.h>
int main(){
    str[10] vehicle;
    int cost;
    int distance;
    printf("Enter the vehicle of choice: ");
    scanf("%s", &vehicle);
    printf("Enter Distance to travel: ");
    scanf("%d", &distance);
    if(vehicle== bus)
    {
        if(distance <= 50)
        {
            printf("The cost of fare is 100 bob");
        }
        else if(distance >= 51 && distance <= 150)
        {
            printf("The cost of travel is 250 bob");
        }
        else if(distance >= 151 && distance <= 400)
        {
            int fare;
            fare=(0.12*1500) + 1500;
            printf("The cost of travel is, %d" fare);
        }
        else(distance > 401)
        {
            int fare_2;
            fare_2=(0.12*1500) + 1500;
            printf("The cost of travel is, " fare_2);
        }
    }
    else(vehicle ==taxi)
    {
        if(distance <= 50)
        {
            printf("The cost of fare is 1000 bob");
        }
        else if(distance >= 51 && distance <= 150)
        {
            printf("The cost of travel is 1500 bob");
        }
        else if(distance >= 150 && distance <= 400)
        {
            int fare_3;
            fare_3=(0.15*4000) + 4000;
            printf("The cost of travel is, %d" fare_3);
        }
        else(distance > 401)
        {
            int fare_4;
            fare_2=(0.12*7000) + 7000;
            printf("The cost of travel is, " fare_4);
        }
    }
return 0;
}