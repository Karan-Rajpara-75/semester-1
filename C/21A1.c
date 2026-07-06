#include <stdio.h>
struct employee {
    int id;
    char name[30];
    float salary;
};
int main() {
    int i, n;
    struct employee e1 = {103, "karan", 5000.2112252};
    printf("Employee Details:\n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    return 0;
}
