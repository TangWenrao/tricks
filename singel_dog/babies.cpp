#include<stdio.h>
#include <windows.h>
int main()
{	int t=0,a=0,i=0,b[10];	
	printf("��������ҵ������м���,��������ѯ���㼸������\n\n");
	Sleep(500);
	printf("���ж�����������1��û������0\n");
	scanf("%d",&b[5]);
	if(b[5]==1){
		printf("doge.jpg\n");
		Sleep(500);
		printf("΢Ц�ټ�jpg\n");
		Sleep(500);
		return 0;
	}
	printf("����ϲ��������������1��û������0\n"); 
	scanf("%d",&b[0]); 
	if(b[0]==0) {
			printf("\n��");
			goto c;}
	
	printf("����ϲ��������������1��û������0\n");
	scanf("%d",&b[1]);
	if(b[1]==0)
	{printf("������һ��\n");
	t++; 
	}
	printf("\n��������\n"); 
	Sleep(500);
	printf("׷��\n");
	Sleep(500);
	printf("���\n\n");
	t+=3;
	Sleep(500);
	printf("Ҫ��ҪС�̣�Ҫ��1����Ҫ��0\n");
	scanf("%d",&b[2]);
	if(b[2]==0) 
	{
		printf("%d",t);
	}
	else
	{t++; 
	printf("Ҫ��Ҫһ��С�̣�Ҫ��1����Ҫ��0\n") ;
		scanf("%d",&b[3]);
		if(b[3]==1)
		t++;
	}
	
	printf("\n�����������Ŀ�껹��%d��",t);
	Sleep(2000);
	system("pause");
	c:return 0; 
}
