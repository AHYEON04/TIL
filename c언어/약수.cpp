#include <stdio.h>

main()
{
	int n;
	int i;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);

	printf("%d�� ��� : ", n);
	
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	
}
