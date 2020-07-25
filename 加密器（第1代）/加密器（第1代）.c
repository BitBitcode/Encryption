// 加密器（第2代）
// 简单的随机数加密


#include<stdio.h>
#include<stdlib.h>


int main()
{
	char password_origin[20];
	char password_encode[20] = { 0 };
	int encode_number[20] = { 0 };
	int i;


	// 输入
	printf("密码：");
	scanf_s("%s", password_origin, 20);
	printf("%s\n", password_origin);

	printf("\n\n*****************************\n\n");

	// 生成随机数
	int num_candidate = 200;

	for (i = 0; i < 20; )
	{
		num_candidate = rand();
		if (num_candidate < 100)
		{
			printf("√\n");
			encode_number[i] = num_candidate;
			i++;
		}
	}

	for (i = 0; i < 20; i++)
	{
		printf("%d\n", encode_number[i]);
	}
	
	printf("\n\n*****************************\n\n");

	// 加密
	for (i = 0; i < 20; i++)
	{
		password_encode[i] = password_origin[i] + encode_number[i];
	}


	// 输出
	printf("%s\n", password_encode);


	// 解密
	
	return 0;
}