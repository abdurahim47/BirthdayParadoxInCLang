#include <stdio.h>
#include <stdlib.h>

int main()
{
    int personNumber = 0, i;
    float rate = 1;
    printf("Please Give Us Person Number: ");
    scanf("%d",&personNumber);
    for(i=0;i<personNumber;i++)
    {
        rate *= ((365-i)/365.0); //Possibility of not being rate
    }
    printf("Rate: %.9f\n",(1.0 - rate)); // After dot 9 number sensitive and possibility of being rate
    system("pause"); // After compiling if you wanna run from exe, this makes pause for a while
    return 0;
}
