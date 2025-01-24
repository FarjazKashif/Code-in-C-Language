#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for storing student details
typedef struct Student {
    int id;
    char name[50];
    char skills[100];
    char availability[50];
    struct Student *prev;
    struct Student *next;
} Student;

// Head and Tail pointers for the doubly linked list
Student *head = NULL, *tail = NULL;

// Function to create a new student node
Student *createStudent(int id, char *name, char *skills, char *availability) {
    Student *newStudent = (Student *)malloc(sizeof(Student)); // Dynamic Memry Allocation
    newStudent->id = id;
    strcpy(newStudent->name, name);
    strcpy(newStudent->skills, skills);
    strcpy(newStudent->availability, availability);
    newStudent->prev = NULL;
    newStudent->next = NULL;
    return newStudent;
}

// Function to add a student to the list
void addStudent(int id, char *name, char *skills, char *availability) {
    Student *newStudent = createStudent(id, name, skills, availability);

    if (head == NULL) {
        head = tail = newStudent;
    } else {
        tail->next = newStudent;
        newStudent->prev = tail;
        tail = newStudent;
    }
    printf("Student %s added successfully!\n", name);
}

// Function to display all students
void displayStudents() {
    if (head == NULL) {
        printf("No students in the list.\n");
        return;
    }

    Student *temp = head;
    printf("\nList of Students:\n");
    while (temp != NULL) {
        printf("ID: %d\nName: %s\nSkills: %s\nAvailability: %s\n\n", 
                temp->id, temp->name, temp->skills, temp->availability);
        temp = temp->next;
    }
}

// Function to find matches based on skills
void findMatch(char *skills) {
    if (head == NULL) {
        printf("No students in the list to match.\n");
        return;
    }

    Student *temp = head;
    int found = 0;
    printf("\nMatching students with skills: %s\n", skills);
    while (temp != NULL) {
        if (strstr(temp->skills, skills) != NULL) {
            printf("ID: %d\nName: %s\nSkills: %s\nAvailability: %s\n\n", 
                    temp->id, temp->name, temp->skills, temp->availability);
            found = 1;                                                                           
        }
        temp = temp->next;
    }

    if (!found) {
        printf("No matches found for the given skills.\n");
    }
}

// Function to delete a student by ID
void deleteStudent(int id) {
    if (head == NULL) {
        printf("No students in the list to delete.\n");
        return;
    }

    Student *temp = head;
    while (temp != NULL && temp->id != id) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        head = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    } else {
        tail = temp->prev;
    }

    free(temp);
    printf("Student with ID %d deleted successfully.\n", id);
}

int main() {
    int choice, id;
    char name[50], skills[100], availability[50];

    while (1) {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Find Match by Skills\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &id);
                getchar(); // It consumes newline
                printf("Enter Name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0; // It Removes newline
                printf("Enter Skills (comma-separated): ");
                fgets(skills, sizeof(skills), stdin);
                skills[strcspn(skills, "\n")] = 0;
                printf("Enter Availability: ");
                fgets(availability, sizeof(availability), stdin);
                availability[strcspn(availability, "\n")] = 0;
                addStudent(id, name, skills, availability);
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                printf("Enter Skills to Match: ");
                getchar();
                fgets(skills, sizeof(skills), stdin);
                skills[strcspn(skills, "\n")] = 0;
                findMatch(skills);
                break;
            case 4:
                printf("Enter ID of Student to Delete: ");
                scanf("%d", &id);
                deleteStudent(id);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

