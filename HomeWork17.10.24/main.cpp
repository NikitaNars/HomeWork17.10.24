#include <iostream>

void arrMaxMin()
{
	const int size = 5;
	int arr[size];
	int arrMax = INT_MIN, arrMin = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		if (arrMax < arr[i])
		{
			arrMax = arr[i];
		}
		if (arrMin > arr[i])
		{
			arrMin = arr[i];
		}
	}
	std::cout << "Max value: " << arrMax << "\nMin value: " << arrMin << "\n";

}

void sumArr()
{
	const int size = 5;
	int arr[size];
	int more, less, sum{};
	while (true)
	{
		std::cout << "������� ����������� �������� �����: ";
		std::cin >> less;
		std::cout << "������� ������������ �������� �����: ";
		std::cin >> more;
		if (more >= less)
		{
			break;
		}
		std::cout << "����������� �������� �� ����� ���� ������ �������������!";
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		if (arr[i] >= less && arr[i] <= more)
		{
			sum += arr[i];
		}
	}
	std::cout << "����� �����: " << sum << "\n";


}
void profit()
{
	const int size = 12;
	float arr[size];
	int beginMonth, endMonth, maxProfit = INT_MIN, MinProfit = INT_MAX, dataMaxProfit, dataMinProfit;
	for (int i = 0; i < size; i++)
	{
		std::cout << "������� ������� �� ����� " << i + 1 << ": ";
		std::cin >> arr[i];

	}

	while (true)
	{

		std::cout << "������� ��������� �����: ";
		std::cin >> beginMonth;
		std::cout << "������� �������� �����: ";
		std::cin >> endMonth;
		if (beginMonth < endMonth && beginMonth > 0 && endMonth > 0)
		{
			break;
		}
		std::cout << "Error!\n";
	}
	for (int i = beginMonth - 1; i < endMonth - 1; i++)
	{
		if (arr[i] > maxProfit)
		{
			maxProfit = arr[i];
			dataMaxProfit = i + 1;
		}
		if (arr[i] < MinProfit)
		{
			MinProfit = arr[i];
			dataMinProfit = i + 1;
		}
	}
	std::cout << "���������� ������� ���� �(�) " << dataMinProfit << " ������! " << "���������:" << MinProfit
		<< "\n������������ ������� ���� �(�) " << dataMaxProfit << " ������! " << "���������: " << maxProfit;





}


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	arrMaxMin();
	sumArr();
	profit();

}