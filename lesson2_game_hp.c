#include <stdio.h>

int main()
{
    int hp = 30;                    /* 声明变量hp，初始血量30 */
    printf("当前血量：%d\n", hp);   /* 打印当前血量 */
    hp = 80;                        /* 使用药水后回血到80 */
    printf("使用药品后：%d\n", hp); /* 打印回血后的血量 */
    return 0;                       /* 程序正常结束 */
}
