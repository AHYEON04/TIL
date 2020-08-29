#include <stdio.h>

main()
{
	int n;
	int i;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &n);

	printf("%d의 약수 : ", n);
	
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	
}
