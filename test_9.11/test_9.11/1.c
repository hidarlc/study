#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("你是煞筆嗎？1/0\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("恭喜凝視傻逼\n");
//	}
//	else
//	{
//		printf("哈哈哈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("努力吧\n");
//	while (line < 20000)
//	{
//		printf("你的line正在蒸蒸日上：%d", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("你真的達到了%d\n",line);
//	}
//	else
//	{
//		printf("慢慢來不急\n");
//	}
//	return 0;
//}
#include <stdio.h>
int add(int x, int y)
{
	return x+y;
}
int main()
{
	int num1 = 0; int num2 = 0;
	scanf("%d %d", & num1, &num2);
	int sum = add(num1, num2);
	printf("這是你想要的結果：%d", sum);
	return 0;
}