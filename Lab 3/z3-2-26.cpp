#include <iostream>
#include <math.h>

using namespace std;

void FindMax(int **Array, int n, int &x, int &y)
{
	int max;
	max = Array[0][0];
	x = 0;
	y = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Array[i][j] > max)
			{
				max = Array[i][j];
				x = i;
				y = j;
			}
		}
	}
}

int main()
{
	int n;

	randomize();

	cout << "Enter array's size: ";
	cin >> n;

	int **InitialArray = new int *[n];                                              //�������� ������ ��� �������� ������
	for (int i = 0; i < n; i++)
	{
		InitialArray[i] = new int[n];
	}

	for (int i = 0; i < n; i++)                                                     //��������� ������ ���������� ����������
	{
		for (int j = 0; j < n; j++)
		{
			InitialArray[i][j] = random(30);
		}
	}

	for (int i = 0; i < n; i++)                                                     //����� ��������� �������
	{
		for (int j = 0; j < n; j++)
		{
			cout << InitialArray[i][j] << " ";
		}
		cout << '\n';
	}

	int MaxCoordX = 0;                                                              //������� ���������� ������������� ��������
	int MaxCoordY = 0;
	FindMax(InitialArray, n, MaxCoordX, MaxCoordY);

	int **ResultArray = new int *[n - 1];                                           //�������� ������ ��� �������������� ������
	for (int i = 0; i < n - 1; i++)
	{
		ResultArray[i] = new int[n - 1];
	}



	for (int i = 0; i < n - 1; i++)                                                                 //������������ �������� � ����� ������,
	{                                                                                               //��� "���������" ������ � �������
		for (int j = 0; j < n - 1; j++)
		{
			if (i < MaxCoordX && j < MaxCoordY) ResultArray[i][j] = InitialArray[i][j];
			if (i >= MaxCoordX && j < MaxCoordY) ResultArray[i][j] = InitialArray[i + 1][j];
			if (i < MaxCoordX && j >= MaxCoordY) ResultArray[i][j] = InitialArray[i][j + 1];
			if (i >= MaxCoordX && j >= MaxCoordY) ResultArray[i][j] = InitialArray[i + 1][j + 1];
		}
	}

	//����� ������ ���� �������� ���������� �������

	for (int i = 0; i < n - 1; i++)                                                                 //������������� �������� ����� �� ����� ������������
	{
		for (int j = 0; j < ceil((double)(n - 1) / 2); j++)
		{
			swap(ResultArray[i][j], ResultArray[n - i - 2][n - j - 2]);
		}
	}

	cout << endl;

	for (int i = 0; i < n - 1; i++)                                                                 //����� ��������������� �������
	{
		for (int j = 0; j < n - 1; j++)
		{
			cout << ResultArray[i][j] << " ";
		}
		cout << '\n';
	}

	system("pause");

	return 0;
}
