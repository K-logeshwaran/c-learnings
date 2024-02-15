#include <stdio.h>
#include <stdlib.h>

/*

PROBLEM:
    Contact Management System: Create a program to manage contacts, storing information like name, phone number, and email address.

    FIXES:
        improvement_1->use dynamic arrays to store contacts (use your own dynamic_array implementation)
        improvement_2->add error handling in code [eg checking for null value on malloc];
        improvement_2->write the given detail in a csv file or text file;
    ALL IMPROVEMENTS MUST BE DONE BEFORE COMPLETING ALL THE EXERCISES IN  MONTH_2

*/
typedef struct
{
    char name[30];
    char ph_no[10];
    char email_id[20];

} contact;
contact *get_contact()
{
    printf("Enter the following details");
    contact *c = (contact *)malloc(sizeof(contact));
    printf("Enter the following details\n");
    printf("Enter name\n");
    scanf("%s", c->name);
    printf("Enter email\n");
    scanf("%s", c->email_id);
    printf("Enter ph no\n");
    scanf("%s", c->ph_no);
    return c;
}
int main()
{
    int limit = 45, added = 0, option, flag = 1;
    printf("\tWelcome to contact management Program...\n");
    printf("Enter no of contacts.. ");
    scanf("%d", &limit);
    contact contacts[limit];
    contact *xyz;

    while (flag)
    {
        printf("Enter choice.. [1->add-contact,2->view-contacts,3->view nth contact,4->end] ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            xyz = get_contact();
            contacts[added] = *xyz;
            free(xyz);
            added += 1;
            break;
        case 2:
            for (int i = 0; i < added; i++)
            {
                printf("name=%s,email=%s,phno=%s\n", contacts[i].name, contacts[i].email_id, contacts[i].ph_no);
            }

            break;
        case 3:
            printf("Enter nth term ");
            int n;
            scanf("%d", &n);
            if (n > added)
            {
                printf("Fuck u\n");
                break;
            }
            printf("name=%s,email=%s,phno=%s\n", contacts[n].name, contacts[n].email_id, contacts[n].ph_no);
            break;
        case 4:
            flag = 0;
            break;

        default:
            break;
        }
        /* code */
    }

    return 0;
}

/*
Code review by gpt
    The provided code aims to implement a basic contact management system in C. Let's go through the code to validate it:

    Header Files Inclusion:

    The code includes the necessary header files <stdio.h> and <stdlib.h> at the beginning, which is correct.
    Structure Definition:

    The contact structure is defined to store information about a contact, including name, phone number, and email address. The structure definition seems appropriate.
    Function get_contact():

    This function is responsible for getting input from the user to create a new contact.
    It correctly allocates memory for a new contact using malloc() and then prompts the user to enter the contact details.
    However, there's redundancy in printing "Enter the following details" twice.
    It returns a pointer to the newly created contact.
    Main Function:

    It declares variables and initializes the limit for the number of contacts.
    It then enters a loop to perform various operations based on user input.
    The switch-case structure handles different options like adding contacts, viewing contacts, viewing a specific contact, and ending the program.
    Overall, the logic of the main function seems correct.
    Potential Issues:

    There's no error handling for memory allocation. If malloc() fails to allocate memory, the program could crash.
    The limit for the number of contacts is fixed at compile time based on user input. Dynamic memory allocation for the array of contacts could be more flexible.
    Error messages like "Fuck u" in the code are inappropriate and should be replaced with more professional error messages or handling.
    Overall Evaluation:

    The code implements the basic functionality of a contact management system.
    It compiles and runs without syntax errors, but there are some logical and design improvements that could be made for better reliability and flexibility.
    Therefore, the provided code is valid but could be improved for better robustness and user experience.
*/