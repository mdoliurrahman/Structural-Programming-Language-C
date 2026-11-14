#include <stdio.h>
#include <string.h>

struct Organisation {
    char name[50];
    char location[50];
    int employees;
};

int main() {

    struct Organisation org[50];

    int choice, count = 0;
    int i, found, total, largest;
    char search[50];

    while (1) {

        printf("\n===== ORGANISATION SYSTEM =====\n");
        printf("1. Add Organisation\n");
        printf("2. Show All Organisations\n");
        printf("3. Search Organisation\n");
        printf("4. Search by Location\n");
        printf("5. Total Employees\n");
        printf("6. Largest Organisation\n");
        printf("7. Exit\n");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

            case 1:

                if (count >= 50) {
                    printf("Storage Full!\n");
                    break;
                }

                printf("Enter Name: ");
                fgets(org[count].name, 50, stdin);
                org[count].name[strcspn(org[count].name, "\n")] = '\0';

                printf("Enter Location: ");
                fgets(org[count].location, 50, stdin);
                org[count].location[strcspn(org[count].location, "\n")] = '\0';

                printf("Enter Employees: ");
                scanf("%d", &org[count].employees);
                getchar();

                count++;

                printf("Organisation Added Successfully!\n");

                break;

            case 2:

                if (count == 0) {
                    printf("No Data Available!\n");
                }
                else {

                    i = 0;

                    while (i < count) {

                        printf("\nOrganisation %d\n", i + 1);
                        printf("Name: %s\n", org[i].name);
                        printf("Location: %s\n", org[i].location);
                        printf("Employees: %d\n", org[i].employees);

                        i++;
                    }
                }

                break;

            case 3:

                printf("Enter Name: ");
                fgets(search, 50, stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;
                i = 0;

                while (i < count) {

                    if (strcmp(org[i].name, search) == 0) {

                        printf("\nOrganisation Found!\n");
                        printf("Name: %s\n", org[i].name);
                        printf("Location: %s\n", org[i].location);
                        printf("Employees: %d\n", org[i].employees);

                        found = 1;
                        break;
                    }

                    i++;
                }

                if (found == 0) {
                    printf("Organisation Not Found!\n");
                }

                break;

            case 4:

                printf("Enter Location: ");
                fgets(search, 50, stdin);
                search[strcspn(search, "\n")] = '\0';

                found = 0;
                i = 0;

                while (i < count) {

                    if (strcmp(org[i].location, search) == 0) {

                        printf("\nName: %s\n", org[i].name);
                        printf("Employees: %d\n", org[i].employees);

                        found = 1;
                    }

                    i++;
                }

                if (found == 0) {
                    printf("No Organisation Found!\n");
                }

                break;

            case 5:

                total = 0;
                i = 0;

                while (i < count) {
                    total = total + org[i].employees;
                    i++;
                }

                printf("Total Employees: %d\n", total);

                break;

            case 6:

                if (count == 0) {
                    printf("No Data Available!\n");
                    break;
                }

                largest = 0;
                i = 1;

                while (i < count) {

                    if (org[i].employees > org[largest].employees) {
                        largest = i;
                    }

                    i++;
                }

                printf("\nLargest Organisation:\n");
                printf("Name: %s\n", org[largest].name);
                printf("Employees: %d\n", org[largest].employees);

                break;

            case 7:

                printf("Program Ended!\n");
                return 0;

            default:

                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
