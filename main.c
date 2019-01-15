#include <stdio.h>

int main()
{
    int qian = 0;
    printf("jinruquqianxitong\n");

    while (1)
    {
        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---yu e\n");
        printf("4---tuichu\n");
        printf("qingxuanzexiangyinggongnengbianhao\n");

        int code;
        scanf("%d", &code);

        if (code = 1)
        {
            printf("qingshucunchujine,dianjihuichejixu\n");
            int cun;
            scanf("%d", &cun);
            qian += cun;
            printf("cunqianchenggong,dianjihuichejixu\n");

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code = 2)
        {
            printf("qingshuruquqianjine\n");
            int qu;
            scanf("%d", &qu);

            if (qu > qian)
            {
                printf("yuebuzu,quqianshibai,dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian -= qu;
                printf("quqianchenggong,dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code = 3)
        {
            printf("yuewei:\n");
            printf("%d\n", qian);
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code = 4)
        {
            printf("jieshu\n");
            break;
        }
    }

    return 0;
}