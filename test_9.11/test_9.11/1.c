#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("����ɷ�P�᣿1/0\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��ϲ��ҕɵ��\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("Ŭ����\n");
//	while (line < 20000)
//	{
//		printf("���line�����������ϣ�%d", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("������_����%d\n",line);
//	}
//	else
//	{
//		printf("��������\n");
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
	printf("�@������Ҫ�ĽY����%d", sum);
	return 0;
}