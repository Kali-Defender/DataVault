#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, s, area;
    printf("输入三边边长：\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形面积为：%lf\n", area);
    } else {
        printf("不是三角形\n");
    }
    return 0;
}
