#include<stdio.h>
int main()
{
    float x, y; //Khai bao 2 bien x, y
    printf("Nhap 2 so x va y\n");
    scanf("%f %f",&x, &y);
    printf("Tong 2 so x + y = %.1f\n", x+y); // In ra màn hình tổng của 2 số x +y
    printf("Hieu 2 so x - y = %.1f", x-y); // In ra màn hình hiệu của 2 số x -y
    return 0;

}
