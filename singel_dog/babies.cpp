#include<stdio.h>
#include <windows.h>
int main()
{	int t=0,a=0,i=0,b[10];	
	printf("测测你离找到对象还有几步,接下来将询问你几个问题\n\n");
	Sleep(500);
	printf("你有对象吗？有输入1，没有输入0\n");
	scanf("%d",&b[5]);
	if(b[5]==1){
		printf("doge.jpg\n");
		Sleep(500);
		printf("微笑再见jpg\n");
		Sleep(500);
		return 0;
	}
	printf("你有喜欢的人吗？有输入1，没有输入0\n"); 
	scanf("%d",&b[0]); 
	if(b[0]==0) {
			printf("\n滚");
			goto c;}
	
	printf("他有喜欢的人吗？有输入1，没有输入0\n");
	scanf("%d",&b[1]);
	if(b[1]==0)
	{printf("给他找一个\n");
	t++; 
	}
	printf("\n等他分手\n"); 
	Sleep(500);
	printf("追他\n");
	Sleep(500);
	printf("结婚\n\n");
	t+=3;
	Sleep(500);
	printf("要不要小崽？要输1，不要输0\n");
	scanf("%d",&b[2]);
	if(b[2]==0) 
	{
		printf("%d",t);
	}
	else
	{t++; 
	printf("要不要一堆小崽？要输1，不要输0\n") ;
		scanf("%d",&b[3]);
		if(b[3]==1)
		t++;
	}
	
	printf("\n你离完成人生目标还有%d步",t);
	Sleep(2000);
	system("pause");
	c:return 0; 
}
