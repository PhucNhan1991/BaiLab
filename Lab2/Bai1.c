#include<stdio.h>
int main()
{
    float x, y; //Khai bao 2 bien x, y
    printf("Nhap 2 so x va y\n"); // Hiển thị nội dung câu " Nhập 2 số x và y"
    scanf("%f %f",&x, &y); // Câu lệnh dùng để nhập 2 số x và y
    printf("Tong 2 so x + y = %.1f\n", x+y); // In ra màn hình tổng của 2 số x +y
    printf("Hieu 2 so x - y = %.1f", x-y); // In ra màn hình hiệu của 2 số x -y
    return 0;

}
