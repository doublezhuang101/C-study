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

//long long f[40][40], flag[40][40];//f[i][j]��ʾ���i��j����·�ߣ�flag��ʾ�õ��Ƿ�Ϊ��Ŀ��Ƶ� 
//int main()
//{
//	int n, m, i, j, a, b;
//	f[0][0] = 1;//��ʼ�� 
//	cin >> m >> n >> a >> b;//a��b����������� 
//	if (a >= 2 && b >= 1) flag[a - 2][b - 1] = 1;
//	if (a >= 2) flag[a - 2][b + 1] = 1;
//	if (a >= 1 && b >= 2) flag[a - 1][b - 2] = 1;
//	if (a >= 1) flag[a - 1][b + 2] = 1;
//	if (b >= 2) flag[a + 1][b - 2] = 1;
//	flag[a + 1][b + 2] = 1;
//	if (b >= 1) flag[a + 2][b - 1] = 1;
//	flag[a + 2][b + 1] = 1;
//	flag[a][b] = 1;//�ӵ�һ��if�����ﶼ�Ǳ����Ŀ��Ƶ㣬ע�����в�Ȼ��Խ�� 
//	for (i = 1; i <= n; i++)
//	{
//		if (flag[i][0] == 0) f[i][0] = f[i - 1][0];//�ڱ߽磬�����i��0�� ������Ŀ��Ƶ��򵽴�˵��·��Ϊ1 
//		else break;//�ڱ߽磬�����i��0������Ŀ��Ƶ��򵽴�˵��·��Ϊ0����i+1��n���е㶼�޷����� 
//	}
//	for (i = 1; i <= m; i++)
//	{
//		if (flag[0][i] == 0) f[0][i] = f[0][i - 1];//�ڱ߽磬�����0��i�� ������Ŀ��Ƶ��򵽴�˵��·��Ϊ1 
//		else break;//�ڱ߽磬�����0��i������Ŀ��Ƶ��򵽴�˵��·��Ϊ0����i+1��n���е㶼�޷����� 
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			if (flag[i][j] == 1) continue;//����˵�Ϊ��Ŀ��Ƶ������� 
//			f[i][j] = f[i - 1][j] + f[i][j - 1];//����Ϊ�����ϵ�������·��֮�� 
//		}
//	}
//	printf("%lld", f[n][m]);//��������ע��long long 
//	return 0;
//}