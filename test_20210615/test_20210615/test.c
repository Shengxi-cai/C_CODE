#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_mystrlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - str;
}
int main()
{
	char arr[] = "bit";
	int i = 0;
	i = is_mystrlen(arr);
	printf("%d\n", i);
	return 0;
}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	i = (++i) + (++i) + (++i);
//	printf("%d\n", i);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer = 0;
//	answer = fun() - fun()*fun();
//	printf("%d\n", answer);
//	return 0;
//}

//int main()
//{
//	char c = 0;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(!c));
//	return 0;
//}