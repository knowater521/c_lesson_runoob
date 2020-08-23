// 题目：

// 企业发放的奖金根据利润提成。

// 利润(I)低于或等于10万元时，奖金可提10%；
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
// 20万到40万之间时，高于20万元的部分，可提成5%；
// 40万到60万之间时高于40万元的部分，可提成3%；
// 60万到100万之间时，高于60万元的部分，可提成1.5%；
// 高于100万元时，超过100万元的部分按1%提成。

// 从键盘输入当月利润I，求应发放奖金总数？

#include "common/common.h"

const int W = 10000;

int main(int argc, char const *argv[])
{
    // 键盘输入当月利润I
    double I;
    printf("输入当月利润：\n");
    scanf("%lf", &I);
    double a10 = 10 * W * 0.1;    // 10w
    double a20 = 10 * W * 0.075;  // 20w
    double a40 = 20 * W * 0.05;   // 40w
    double a60 = 20 * W * 0.03;   // 60w
    double a100 = 40 * W * 0.015; // 100w
    double a;
    if (I < 10 * W)
    {
        a = I * 0.1;
    }
    else if (I < 20 * W)
    {
        a = a10 + (I - 10 * W) * 0.075;
    }
    else if (I < 40 * W)
    {
        a = a10 + a20 + (I - 20 * W) * 0.05;
    }
    else if (I < 40 * W)
    {
        a = a10 + a20 + a40 + (I - 40 * W) * 0.03;
    }
    else if (I < 60 * W)
    {
        a = a10 + a20 + a40 + a60 + (I - 60 * W) * 0.015;
    }
    else
    {
        a = a10 + a20 + a40 + a60 + a100 + (I - 100 * W) * 0.01;
    }
    printf("奖金总数: %lf\n", a);
    return 0;
}