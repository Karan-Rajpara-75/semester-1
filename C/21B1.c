#include <stdio.h>

struct employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct employee e = {101, "Karan", 55000.75};
    struct employee *ptr;

    ptr = &e;   // Pointer to structure

    printf("Employee Details using Structure Pointer:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
