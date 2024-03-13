#include <stdio.h>

int main() {
    int height, width, perimeter;

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &height);
    
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &width);
    
    perimeter = 2 * (height + width)  ; 
    printf("Chu vi hinh chu nhat la: %d\n", perimeter);

    return 0;
}
