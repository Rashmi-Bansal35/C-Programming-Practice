/*
Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.
*/

#include<stdio.h>
#include<string.h>

// Declare a structure
struct Student{
    int id;
    char name[50];
    int year;
    float gpa;
};

// Declare a function
void studentStruct(struct Student *s);

int main(){
    // Declare a structure variable
    struct Student s;

    // Take input from user
    printf("Enter the details of student:\n");
    printf("Enter id: ");
    scanf("%d", &s.id);
    getchar();
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter year: ");
    scanf("%d", &s.year);
    printf("Enter gpa: ");
    scanf("%f", &s.gpa);
    getchar();

    // Call a function
    studentStruct(&s);

    return 0;
}

// Define a function
void studentStruct(struct Student *s){
    // Take input from user to modify gpa 
    float modify;
    printf("Enter the number by which you want to modify you gpa: ");
    scanf("%f", &modify);
    char op;
    printf("Enter 'I' for increment or 'D' for decrement: ");
    scanf("%s", &op);

    switch(op){
        case 'I':
            s->gpa = s->gpa + modify;
        case 'D':
            s->gpa = s->gpa - modify;
    }

    // Print the deatils
    printf("\n\nModified details:\n");
    printf("Id: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Year: %d\n", s->year);
    printf("gpa: %.2f\n", s->gpa);
}
