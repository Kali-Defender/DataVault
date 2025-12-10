#include <stdio.h>
#include <string.h>

void Structure()
{
    struct student {
       char name[20];
       char studentid[20];
        int classes;
    };
    struct student Li = {0};
    strcpy_s(Li.name, sizeof(Li.name), "LiMing");//strcpy_s函数用于字符串拷贝，第一个参数为目标字符串，第二个参数为目标字符串的长度，第三个参数为源字符串
    strcpy_s(Li.studentid, sizeof(Li.studentid), "2019001");
    Li.classes = 3;
    printf("Li's name is %s, studentid is %s, class is %d\n", Li.name, Li.studentid, Li.classes);//

    typedef struct Data {//定义结构体Data
        int year;
        int month;
        int day;
    }Date;//定义别名Date
    Date data = { 0 };//声明结构体变量data
    data.year = 2021;
    data.month = 10;
    data.day = 1;//结构体变量的成员独立内存
    printf("Today is %d-%d-%d\n", data.year, data.month, data.day);

    union a {
        int a;
        char b[10];
    };
    union a ua;
    ua.a = 1234;
    strcpy_s(ua.b, sizeof(ua.b), "hello"); // 注意：联合体变量ua的成员共享内存空间，写入字符串会覆盖整数值
    printf("a = %d, b = %s\n", ua.a, ua.b);
}