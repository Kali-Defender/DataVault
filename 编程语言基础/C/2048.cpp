#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<easyx.h>
int IsFull();
int CamMerge();
int GetNullPos();
void CreateRandData(int count);
//用整型数组表示矩阵方格
int arr[4][4] = { 0 };
//空位数组
int nullCount = 0;//记录空位的数量
int nullPos[2][16] = { 0 };//记录空位的行列数据
//窗口句柄
HWND window = nullptr;
//图片数组
const TCHAR* Lpicture[] = { _T("Image/0.png"),_T("Image/2.png"), _T("Image/4.png"), _T("Image/8.png"), _T("Image/16.png"), _T("Image/32.png"), _T("Image/64.png"), _T("Image/128.png"), _T("Image/256.png"), _T("Image/512.png"), _T("Image/1024.png"), _T("Image/1024.png") };
//打印矩阵方格的数据
void PrintArr()
{
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			printf("%d\t", arr[row][column]);
		}
		printf("\n");
	}
}
//向左边移动
void Left()
{
	//遍历行
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
            //如果当前格子为空，则向右移动
			if (arr[row][column] == 0)
			{
				//从后面找一个不为空的格子，如果找到，则交换位置
				for (int i = column + 1; i < 4; i++)
				{
					if (arr[row][i]!= 0)
					{
						arr[row][column] = arr[row][i];
						arr[row][i] = 0;
						//处理一个非空位置后，条件不成立，不能往后走了
						break;
					}
				}
			}
			//如果不为0，表示要合并
			if (arr[row][column] != 0)
			{
				//从后面找一个和当前数据相同的数据，遇到0就跳过，遇到不同的，退出
				for (int i = column + 1; i < 4; i++)
				{
					if (arr[row][i] == arr[row][column])
					{
						//数据合并
						arr[row][column] *= 2;
						arr[row][i] = 0;
						//合并完成就结束查找
						break;
					}
					else if (arr[row][i] == 0)
						continue;

					else
						break;
				}
			}
		}
	}
	CreateRandData(1);
}
//向右边移动
void Right()
{
	for (int row = 0; row < 4; row++)
	{
		for (int column = 3; column >= 0; column--)
		{
			//如果当前格子为空，则向左移动
			if (arr[row][column] == 0)
			{
				//从后面找一个不为空的格子，如果找到，则交换位置
				for (int i = column - 1; i >= 0; i--)
				{
					if (arr[row][i] != 0)
					{
						arr[row][column] = arr[row][i];
						arr[row][i] = 0;
						//处理一个非空位置后，条件不成立，不能往后走了
						break;
					}
				}
			}
			//如果不为0，表示要合并
			if (arr[row][column] != 0)
			{
				//从后面找一个和当前数据相同的数据，遇到0就跳过，遇到不同的，退出
				for (int i = column - 1; i >=0; i--)
				{
					if (arr[row][i] == arr[row][column])
					{
						//数据合并
						arr[row][column] *= 2;
						arr[row][i] = 0;
						//合并完成就结束查找
						break;
					}
					else if (arr[row][i] == 0)
						continue;

					else
						break;
				}
			}
		}
	}
	CreateRandData(1);
}
//向上边移动
void Up()
{
	for (int column = 0; column < 4; column++)
	{
		for (int row = 0; row < 4; row++)
		{
			//如果当前格子为空，则向下移动
			if (arr[row][column] == 0)
			{
				//从后面找一个不为空的格子，如果找到，则交换位置
				for (int i = row + 1; i < 4; i++)
				{
					if (arr[i][column] != 0)
					{
						arr[row][column] = arr[i][column];
						arr[i][column] = 0;
						//处理一个非空位置后，条件不成立，不能往后走了
						break;
					}
				}
			}
			//如果不为0，表示要合并
			if (arr[row][column] != 0)
			{
				//从后面找一个和当前数据相同的数据，遇到0就跳过，遇到不同的，退出
				for (int i = row + 1; i < 4; i++)
				{
					if (arr[i][column] == arr[row][column])
					{
						//数据合并
						arr[row][column] *= 2;
						arr[i][column] = 0;
						//合并完成就结束查找
						break;
					}
					else if (arr[i][column] == 0)
						continue;

					else
						break;
				}
			}
		}
	}
	CreateRandData(1);
}
//向下边移动
void Down()
{
	for (int column = 0; column < 4; column++)
	{
		for (int row = 3; row >= 0; row--)
		{
			//如果当前格子为空，则向上移动
			if (arr[row][column] == 0)
			{
				//从后面找一个不为空的格子，如果找到，则交换位置
				for (int i = row - 1; i >= 0; i--)
				{
					if (arr[i][column] != 0)
					{
						arr[row][column] = arr[i][column];
						arr[i][column] = 0;
						//处理一个非空位置后，条件不成立，不能往后走了
						break;
					}
				}
			}
			//如果不为0，表示要合并
			if (arr[row][column] != 0)
			{
				//从后面找一个和当前数据相同的数据，遇到0就跳过，遇到不同的，退出
				for (int i = row - 1; i >= 0; i--)
				{
					if (arr[i][column] == arr[row][column])
					{
						//数据合并
						arr[row][column] *= 2;
						arr[i][column] = 0;
						//合并完成就结束查找
						break;
					}
					else if (arr[i][column] == 0)
						continue;

					else
						break;
				}
			}
		}
	}
	CreateRandData(1);
}
//是否已经满了
int IsFull()
{
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			if (arr[row][column] == 0)
			{
				//没有满
				return 1;
			}
		}
	}
	//整个循环结束没有返回1，已经满了
	return 0;
}
//是否可以合成
int CamMerge()
{
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			if (column+1<4&&(arr[row][column] == arr[row][column+1])|| row+1<4&&(arr[row][column] == arr[row+1][column ]))
			{
				//可以合并
				return 1;
			}
		}
	}
	//没有可以合并的数据
	return 0;
}
//获取空位数据
int GetNullPos()
{
	//把空位数量归零
	nullCount = 0;
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			if (arr[row][column] == 0)
			{
				//记录下来，行和列
				nullPos[0][nullCount] = row;//nullPos[0]记录行
				nullPos[1][nullCount] = column;//nullPos[1]记录列
				//更新空位个数
				nullCount++;
			}
		}
	}
	return nullCount;
}
//生成随机数据
void CreateRandData(int count)
{
	srand(time(0));
	//判断是否有空位，同时更新空位的数据
	for (int c = 0; c < count; c++)
	{
		if (GetNullPos() == 0)
			return;
		//随机：随机一个数表示在nullPos的位置
		int pos = rand() % nullCount;//0到nullCount-1

		//生成2/4
		int row = nullPos[0][pos];
		int column = nullPos[1][pos];
		arr[row][column] = (rand() % 2 + 1) * 2;
	}
}
//初始化游戏数据
void InitData()
{
	//初始化数据
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			arr[row][column] = 0;
		}
	}
	//生成2个随机数
	CreateRandData(2);
}
//-----------------------------------界面---------------------------------------//
int log(int n)
{
	if (n <= 1)
		return 0;
	int count = 0;
	while (n>1)
	{
		count++;
		n /= 2;
	}
	return count;
}

void updata()
{
	//生成矩阵格子
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			int pos = log(arr[row][column]);
			//加载图片
			IMAGE	img;
			loadimage(&img, Lpicture[pos]);
		
			//显示图片
			putimage(20+(150+10)*column, 70+(150+10)*row, &img);
		}
	}
}

void InitWindow()
{
	//创建一个窗口
	window=initgraph(750, 750);
	//设置标题
	settextcolor(WHITE);//确定颜色
	settextstyle(60, 0, _T("黑体"));//设置字体
	outtextxy(250, 0, _T("2048"));//标题位置
}

void DrawGameOver()
{
	cleardevice();
	settextstyle(60, 0, _T("黑体"));
	outtextxy(250, 250, _T("Game Over"));
}

int main()
{
	// 初始化数据
	InitData();
	// 初始化窗口
	InitWindow();

	// 游戏的主逻辑
	while (IsWindow(window))
	{
		// 每帧更新并处理事件
		updata();

		// 如果游戏结束，绘制一次并进入等待逻辑
		if (GetNullPos() == 0 && CamMerge() == 0)
		{
			DrawGameOver();

			// 等待玩家操作：Enter 重启，Esc 退出
			while (IsWindow(window))
			{
				ExMessage msg;
				if (peekmessage(&msg))
				{
					if (msg.message == WM_KEYDOWN)
					{
						if (msg.vkcode == VK_RETURN) // 回车重启
						{
							InitData();
							cleardevice();
							break; // 退出等待，回到主循环
						}
						else if (msg.vkcode == VK_ESCAPE) // Esc 退出
						{
							closegraph();
							return 0;
						}
					}
				}
				Sleep(50); // 降低 CPU 占用，避免高频重绘
			}
		}

		// 处理输入并移动（保持原有逻辑）
		ExMessage msg;
		if (peekmessage(&msg))
		{
			if (msg.message == WM_KEYDOWN)
			{
				switch (msg.vkcode)
				{
				case VK_UP:
					Up();
					break;
				case VK_DOWN:
					Down();
					break;
				case VK_LEFT:
					Left();
					break;
				case VK_RIGHT:
					Right();
					break;
				default:
					break;
				}
			}
		}
		// 小睡一会儿，避免空循环耗尽 CPU
		Sleep(10);
	}

	closegraph();
	return 0;
}