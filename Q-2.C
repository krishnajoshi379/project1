#include<stdio.h>

int main() {
    float base_salary,hra,da,ta,gross_salary;

    printf(" enter base salary: ");
    scanf("%f", &base_salary);

    printf(" enter hra percentege: ");
    scanf("%f", &hra);

    printf(" enter da percrntege: ");
    scanf("%f", &da);

printf(" enter ta percentege: ");
    scanf("%f", &ta);

gross_salary = base_salary + (base_salary * hra / 100) + ( base_salary * da / 100) +
(base_salary * ta / 100);

printf ("gross salary: rs.%2f\n", gross_salary);
return 0;
}