/*
------------------------------------------------------
Project Name: Medicine Information Searching System

Programmer
      Name : S. M. Narullah Hamim
      ID   : 0802420205101042
------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void addmedicine();
void showallmedicine();
void searchmedicine();

//Structure
struct Medicine {
    char name[100];
    char info[2000];
    char price[50];
};
struct Medicine contact;

int main()
{
    int choice;

    do
    {
        printf("\n   MEDICINE INFORMATION SEARCHING SYSTEM   \n");
        printf("-------------------------------------------\n\n");
        printf("1. Add medicine information\n");
        printf("2. Show all medicine information\n");
        printf("3. Search medicine information\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        printf("\n");

        switch(choice)
        {
            case 1:
            {
                addmedicine();
                break;
            }
            case 2:
            {
                showallmedicine();
                break;
            }
            case 3:
            {
                searchmedicine();
                break;
            }
            case 4:
            {
                printf("Exiting...");
                break;
            }
            default:
            {
                printf("Invalid choice.");
                break;
            }
        }
    } while (choice != 4);
}

//Adding New Medicine Information.
void addmedicine()
{
    FILE *file;

    file = fopen("medicine.txt", "a");// File : medicine.txt
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        fflush(stdin);

        printf("Enter medicine name: ");
        fgets(contact.name, sizeof contact.name, stdin);

        printf("Enter medicine information: ");
        fgets(contact.info, sizeof contact.info, stdin);

        printf("Enter unite price: ");
        fgets(contact.price, sizeof contact.price, stdin);

        fprintf(file,"%s%s%s\n",contact.name,contact.info,contact.price);
        printf("\nAdded to medicine information system\n");
        fclose(file);
    }
}

//Showing All medicine information.
void showallmedicine()
{
    FILE *file;

    file = fopen("medicine.txt", "r");
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {

        fflush(stdin);

        //Reading Medicine Information From File
        printf("Medicines.\n");
        while(fscanf(file," %[^\n] %[^\n] %[^\n]",contact.name,contact.info,contact.price) != EOF)
        {
            //Printing All Medicine Information
            printf("Medicine Name:%s \nMedicine Introduction:%s \nMedicine Price:%s\n\n",contact.name,contact.info,contact.price);
        }
        fclose(file);
    }
}

//Searching Medicine Information.
void searchmedicine()
{
    char st[100];
    fflush(stdin);
    int flag=0;

    //Taking input for searching medicine
    printf("  Search name of your medicine  ");
    printf("\n--------------------------------\n");
    gets(st);
    FILE *file;

    file = fopen("medicine.txt", "r");

    if(file==NULL)
    {
        printf("File does not exist");
    }

    else
    {
        printf("\n");
        printf("   Medicine   \n");
        printf("--------------\n");

        //Reading Medicine Information From File
        while(fscanf(file," %[^\n] %[^\n] %[^\n]",contact.name,contact.info,contact.price) != EOF)
        {

            if(strcmp(contact.name,st)==0)//Matching Medicine Name
            {
                //Printing Medicine Name
                printf("Medicine Name:%s \n\nMedicine Introduction:%s \n\nMedicine Price:%s\n\n",contact.name,contact.info,contact.price);
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            printf("Medicine Not Found.\n\n");
        }
    }
        fclose(file);
}
