//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

#include<stdio.h>
int main()
{
    int killer=0;
    for(killer='a';killer<='d';killer++)
    {
        if((killer!='a')+(killer="c')+(killer='d')+(killer!='d')==3)
        {
            printf("killer=%c\n",killer);
        }
    }
    return 0;
}