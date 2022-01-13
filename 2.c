#include<stdio.h>
#include<stdlib.h>

int main()
{
	int skill1,skill2, HP1,HP2, bullet1, bullet2;
	printf("007小遊戲\n=======================\n規則說明\n1.需要裝子彈才能射\n2.一人有三條命其中一人死亡遊戲結束\n3.保護可抵擋一次攻擊\n4.反彈可反彈攻擊\n========================\n");
	srand(time(NULL));
	int i = 1;
	bullet1 = 0;
	bullet2 = 0;
	HP1 = 3;
	HP2 = 3;
	while (HP1 != 0 && HP2 != 0)
	{
		printf("第%d輪\n==========================================================\n",i);
		printf("1:裝子彈    2:射死你    3:保護    4:反彈\n");
		printf("請輸入你要的招式:");
		scanf_s("%d", &skill1);
		printf("\n");
		skill2 = rand() % 4 + 1;
		printf("電腦所使用的技能是%d\n", skill2);




		if (skill1 == 2 && skill2 == 3)
		{
			if (bullet1 == 0)
			{
				printf("1號玩家無子彈所以無效");
			}
			else
			{
				printf("1號玩家射擊2號玩家\n2號玩家保護生效，1號玩家射擊無效\n1號玩家子彈-1");
				bullet1--;
			}
			printf("\n");
		}

		if (skill1 == 2 && skill2 == 4)
		{
			if (bullet1 == 0)
			{
				printf("1號玩家無子彈所以無效");
			}
			else
			{
				printf("1號玩家射擊2號玩家，2號玩家反彈生效\n1號玩家子彈-1 HP-1");
				bullet1--;
				HP1--;
			}
			printf("\n");
		}

		if (skill1 == 3 && skill2 == 1)
		{
			printf("2號裝子彈所以2號玩家子彈+1\n2號玩家保護無事\n");
			bullet2++;
			printf("\n");
		}

		if (skill1 == 3 && skill2 == 2)
		{
			if (bullet2 == 0)
			{
				printf("2號玩家無子彈所以無效");
			}
			else
			{
				printf("2號玩家射擊1號玩家\n1號玩家保護生效，2號玩家射擊無效\n1號玩家子彈-1");
				bullet2--;
			}
			printf("\n");
		}

		if (skill1 == 3 && skill2 == 3)
		{
			printf("雙方保護，無事");
			printf("\n");
		}

		
	


		printf("1號玩家HP  :%d\n",HP1);
		printf("       子彈:%d\n", bullet1);
		printf("2號玩家HP  :%d\n", HP2);
		printf("       子彈:%d\n", bullet2);
		i++;
		printf("\n");
	}



	if (HP1 == 0)
	{
		printf("遊戲結束");
		printf("你輸了!");
	}
	if (HP2 == 0)
	{
		printf("遊戲結束");
		printf("你贏了!");
	}








	system("pause");
	return 0;
}