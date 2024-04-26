#include <stdio.h>
#include <string.h>

int main()
{
    char name[30], ch[30];
    int age;

    // int length = strlen(name);

    FILE *file;
    file = fopen("test.txt", "a");
    if (file == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        // for (int i = 0; i < length; i++)
        // {
        //     fputc(name[i], file);
        // }
        // printf("File is written\n");

        // printf("Enter your name:");
        // gets(name);
        // printf("Enter your Age:");
        // scanf("%d", &age);

        // fprintf(file, "Name : %s\nAge : %d\n", name, age);

        // char ch = fgetc(file);
        // while (!feof(file))
        // {
        //     //     printf("%c", ch);
        //     //     ch = fgetc(file);
        //     fgets(ch, 100, file);
        //     printf("%s", ch);
        // }

        // fscanf(file, "%s",&ch);
        // printf("%s", ch);

        printf("Enter Number of students: ");
        int n, number;
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++)
        {
            getchar();
            printf("Enter your name: ");
            gets(name);
            printf("Enter your Age: ");
            scanf("%d", &age);
            printf("Enter your Number: ");
            scanf("%d", &number);
            fprintf(file, "%s\t\t%d \t\t%d\n", name, age, number);
        }

        printf("File is written\n");

        fclose(file);
    }

    return 0;
}