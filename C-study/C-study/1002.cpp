#include<iostream>
using namespace std;
long long chess[30][30];
int flag[30][30];
int main()
{
	int a, b, c, d,i,j;
	cin >> a >> b >> c >> d;
	a += 5; b += 5; c += 5; d += 5;
	chess[5][5] = 1;
	flag[c][d] = 1;
	flag[c - 1][d + 2] = 1;
	flag[c - 1][d - 2] = 1;
	flag[c + 1][d + 2] = 1;
	flag[c + 1][d - 2] = 1;
	flag[c - 2][d + 1] = 1;
	flag[c - 2][d - 1] = 1;
	flag[c + 2][d + 1] = 1;
	flag[c + 2][d - 1] = 1;
	for ( i = 5; i <= a; i++)
	{
		for ( j = 5; j <= b; j++)
		{
			if (flag[i][j]==1)
				continue;
			chess[i][j] = chess[i - 1][j] + chess[i][j - 1];
			chess[5][5] = 1;
		}
	}
	cout << chess[i-1][j-1];
	system("pause");
}

//long long f[40][40], flag[40][40];//f[i][j]表示到达（i，j）的路线，flag表示该点是否为马的控制点 
//int main()
//{
//	int n, m, i, j, a, b;
//	f[0][0] = 1;//初始化 
//	cin >> m >> n >> a >> b;//a，b代表马的坐标 
//	if (a >= 2 && b >= 1) flag[a - 2][b - 1] = 1;
//	if (a >= 2) flag[a - 2][b + 1] = 1;
//	if (a >= 1 && b >= 2) flag[a - 1][b - 2] = 1;
//	if (a >= 1) flag[a - 1][b + 2] = 1;
//	if (b >= 2) flag[a + 1][b - 2] = 1;
//	flag[a + 1][b + 2] = 1;
//	if (b >= 1) flag[a + 2][b - 1] = 1;
//	flag[a + 2][b + 1] = 1;
//	flag[a][b] = 1;//从第一个if到这里都是标记马的控制点，注意特判不然会越界 
//	for (i = 1; i <= n; i++)
//	{
//		if (flag[i][0] == 0) f[i][0] = f[i - 1][0];//在边界，如果（i，0） 不是马的控制点则到达此点的路线为1 
//		else break;//在边界，如果（i，0）是马的控制点则到达此点的路线为0，且i+1到n所有点都无法到达 
//	}
//	for (i = 1; i <= m; i++)
//	{
//		if (flag[0][i] == 0) f[0][i] = f[0][i - 1];//在边界，如果（0，i） 不是马的控制点则到达此点的路线为1 
//		else break;//在边界，如果（0，i）是马的控制点则到达此点的路线为0，且i+1到n所有点都无法到达 
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			if (flag[i][j] == 1) continue;//如果此点为马的控制点则跳过 
//			f[i][j] = f[i - 1][j] + f[i][j - 1];//否则为到达上点与左点的路线之和 
//		}
//	}
//	printf("%lld", f[n][m]);//最后输出，注意long long 
//	return 0;
//}