#include <stdio.h>
#include <string.h>

struct Company {
    char companyName[50];
    char city[50];
    int staff;
    char category[30];
    int established;
};

int main() {
    struct Company data[100];
    int total = 0, option;
    char key[50];

    do {
        printf("\n--- Organisation System ---\n");
        printf("1. Add Organisation\n");
        printf("2. Show All\n");
        printf("3. Search by Location\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &option);
        getchar();

        switch(option) {
            case 1:
                if(total >= 100) {
                    printf("Storage is full!\n");
                    break;
                }

                printf("Enter name: ");
                fgets(data[total].companyName, 50, stdin);
                data[total].companyName[
                    strcspn(data[total].companyName, "\n")
                ] = '\0';

                printf("Enter location: ");
                fgets(data[total].city, 50, stdin);
                data[total].city[
                    strcspn(data[total].city, "\n")
                ] = '\0';

                printf("Enter type (IT, Bank etc): ");
                fgets(data[total].category, 30, stdin);
                data[total].category[
                    strcspn(data[total].category, "\n")
                ] = '\0';

                printf("Enter employees number: ");
                scanf("%d", &data[total].staff);

                printf("Enter founded year: ");
                scanf("%d", &data[total].established);
                getchar();

                total++;
                printf("Added!\n");
                break;

            case 2:
                if(total == 0) {
                    printf("No data yet\n");
                }

                for(int j = 0; j < total; j++) {
                    printf("\n[%d] Name: %s\n",
                           j + 1, data[j].companyName);
                    printf("Location: %s\n", data[j].city);
                    printf("Type: %s\n", data[j].category);
                    printf("Employees: %d\n", data[j].staff);
                    printf("Year: %d\n", data[j].established);
                }
                break;

            case 3: {
                printf("Enter location to search: ");
                fgets(key, sizeof(key), stdin);
                key[strcspn(key, "\n")] = '\0';

                int matched = 0;

                for(int j = 0; j < total; j++) {
                    if(strcmp(data[j].city, key) == 0) {
                        printf("\nName: %s | Employees: %d | Type: %s\n",
                               data[j].companyName,
                               data[j].staff,
                               data[j].category);
                        matched = 1;
                    }
                }

                if(!matched) {
                    printf("Not found\n");
                }
                break;
            }

            case 4:
                break;

            default:
                printf("Wrong choice\n");
        }

    } while(option != 4);

    return 0;
