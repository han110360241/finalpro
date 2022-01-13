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


		if (skill1 == 1 && skill2 == 1)
		{
			printf("雙方裝子彈所以沒事\n1號玩家子彈+1\n2號玩家子彈+1\n");
			bullet1++;
			bullet2++;
			printf("\n");
		}


		if (skill1 == 1 && skill2 == 2)
		{
			if (bullet2 == 0)
			{
				printf("2號玩家無子彈所以無效\n1號玩家子彈+1");
				bullet1++;
			}
			else
			{
				printf("2號玩家對1號玩家射擊，所以1號玩家HP-1\n1號玩家子彈+1\n2號玩家子彈-1\n");
				HP1--;
				bullet1++;
				bullet2--;
			}
			printf("\n");
		}

		if (skill1 == 1 && skill2 == 3)
		{
			printf("1號裝子彈所以1號玩家子彈+1\n2號玩家保護無事\n");
			bullet1++;
			printf("\n");
		}

		if (skill1 == 1 && skill2 == 4)
		{
			printf("1號裝子彈所以1號玩家子彈+1\n2號玩家反彈無效\n");
			bullet1++;
			printf("\n");
		}

		if (skill1 == 2 && skill2 == 1)
		{
			if (bullet1 == 0)
			{
				printf("1號玩家無子彈所以無效\n");
			}
			else
			{
				printf("1號玩家對2號玩家射擊，所以2號玩家HP-1，1號玩家子彈-1\n2號玩家裝子彈，子彈+1\n");
				HP2--;
				bullet1--;
				bullet2++;
			}
			printf("\n");
		}

		if (skill1 == 2 && skill2 == 2)
		{
			if (bullet1 == 0 && bullet2 == 0)
			{
				printf("1號玩家、2號玩家無子彈所以無效\n");
			}
			if (bullet1 > 0 && bullet2 == 0)
			{
				printf("1號玩家對2號玩家射擊，2號玩家HP-1\n2號玩家無子彈所以無效");
				bullet1--;
				HP2--;
			}
			if (bullet1 == 0 && bullet2 > 0)
			{
				printf("2號玩家對1號玩家射擊，1號玩家HP-1\n1號玩家無子彈所以無效");
				bullet2--;
				HP1--;
			}
			if (bullet1 > 0 && bullet2 > 0)
			{
				printf("1號玩家和2號玩家互射\n1號玩家HP-1 子彈-1\n2號玩家HP-1 子彈-1");
				HP1--;
				HP2--;
				bullet1--;
				bullet2--;
			}
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