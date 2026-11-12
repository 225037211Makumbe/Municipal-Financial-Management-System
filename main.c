
#include <stdio.h>

int main(void)
{
    char municipalityName[100];
    char mayorName[100];
    int population;

    printf("========================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n");

    printf("\nWelcome to Windhoek Municipality!\n\n");

    printf("Enter Municipality Name: ");
    fgets(municipalityName, sizeof(municipalityName), stdin);

    printf("Enter Mayor's Name: ");
    fgets(mayorName, sizeof(mayorName), stdin);

    printf("Enter Population: ");
    if (scanf("%d", &population) != 1 || population < 0)
    {
        printf("Invalid population entered.\n");
        return 1;
    }

    printf("\n========================================\n");
    printf("       MUNICIPALITY INFORMATION REPORT\n");
    printf("========================================\n");

    printf("Municipality Name: %s", municipalityName);
    printf("Mayor's Name: %s", mayorName);
    printf("Population: %d\n", population);

    printf("========================================\n");
    printf("             END OF REPORT\n");
    printf("========================================\n");

    return 0;
}
