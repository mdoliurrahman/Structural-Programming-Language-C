#include <stdio.h>

#include <string.h>



  struct Organisation {
    char name[50];
    char location[50];
    int employees;
    char type[30];
    int year;

    };

  int main() {
    struct Organisation org[100];
    int n = 0;
    int choice;
    char search[50];

    while(1) {
        printf("\n--- Organisation System ---\n");
        printf("1. Add Organisation\n");
        printf("2. Show All\n");
        printf("3. Search by Location\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        if(choice == 1) {
            printf("Enter name: ");
            gets(org[n].name);

            printf("Enter location: ");
            gets(org[n].location);

            printf("Enter type (IT, Bank etc): ");
            gets(org[n].type);

            printf("Enter employees number: ");
            scanf("%d", &org[n].employees);

            printf("Enter founded year: ");
            scanf("%d", &org[n].year);
            getchar();

            n++;
            printf("Added!\n");
        }
        else if(choice == 2) {
            if(n==0) {
                printf("No data yet\n");
            }
            for(int i=0; i<n; i++) {
                printf("\n[%d] Name: %s\n", i+1, org[i].name);
                printf("Location: %s\n", org[i].location);
                printf("Type: %s\n", org[i].type);
                printf("Employees: %d\n", org[i].employees);
                printf("Year: %d\n", org[i].year);
            }
        }
        else if(choice == 3) {
            printf("Enter location to search: ");
            gets(search);
            int found = 0;
            for(int i=0; i<n; i++) {
                if(strcmp(org[i].location, search) == 0) {
                    printf("\nName: %s | Employees: %d | Type: %s\n", org[i].name, org[i].employees, org[i].type);
                    found = 1;
                }
            }
            if(found==0) printf("Not found\n");
        }
        else if(choice == 4) {
            break;
        }
        else {
            printf("Wrong choice\n");
        }
    }
    return 0;
}
