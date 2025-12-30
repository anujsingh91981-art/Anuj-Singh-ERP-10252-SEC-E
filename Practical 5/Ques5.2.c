//Name Anuj Singh Erp-10252
//Maximum of three numbers using if–else

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Maximum = %d", a);
    else if (b > a && b > c)
        printf("Maximum = %d", b);

    else
        printf("Maximum = %d", c);

    return 0;
}

/*Enter three numbers: 23 45 5
Maximum = 45*/