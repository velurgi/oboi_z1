#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int difference;
	float roomW, roomH, roomL, paperH, paperW;
	float wall1, wall2, wall3, wall4, perimeter, done, a, used, useless;
	float left, leftpercent, usage;
	usage = 0;
	done = 0;
	cout << "������� ����� ������� � ��\n";
	cin >> roomL;
	cout << "������� ������ ������� � ��\n"; // ������� ���� ������
	cin >> roomW;
	cout << "������� ������ ������� � ��\n";
	cin >> roomH;
	cout << "������� ����� ������ ����� � ��\n";
	cin >> paperH;
	cout << "������� ������ ������ ����� � ��\n";
	cin >> paperW;

	if (paperH < roomH)
	{
		cout << "�� ��������� �������� ����, ���� ������ ������ ������ ������ �����\n";
	}
	// ������ ������� ����� ��� ������������ ������
	perimeter = (roomL * 2) + (roomW * 2);
	cout << perimeter << endl;

	difference = paperH / roomH;
	cout << difference << endl;
	a = perimeter; // ��� ������� �����
	used = 0;

		while (done < a)
		{
			if (perimeter >= paperW*difference) 
			{
				perimeter -= paperW * difference; 
				done += paperW * difference;
				usage += 1;
				used += roomH * paperW * difference;
				/*cout << perimeter << "- ��������" << endl;
				cout << done << "- dont" << endl;
				cout << usage << "- usage" << endl;*/
				

			}
			else
			{
				used += paperW - perimeter;
				usage += 1;
				done = a; // ����� �� �����
				useless = (paperH * paperW) - perimeter * roomH;
			}
		}


	leftpercent = 100.0 - ((used + useless) * 100) / (usage*paperH*paperW);
	cout << "���������� �������������� ������� ���������: " << usage << endl;
	cout << "������� ���������������� ����� ��������: " << leftpercent << "%" << endl;

	return 0;
}
