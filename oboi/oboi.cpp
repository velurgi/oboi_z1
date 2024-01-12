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
	cout << "Введите длину комнаты в см\n";
	cin >> roomL;
	cout << "Введите ширину комнаты в см\n"; // СДЕЛАТЬ УЧЁТ ОШИБОК
	cin >> roomW;
	cout << "Введите высоту комнаты в см\n";
	cin >> roomH;
	cout << "Введите длину рулона обоев в см\n";
	cin >> paperH;
	cout << "Введите ширину рулона обоев в см\n";
	cin >> paperW;

	if (paperH < roomH)
	{
		cout << "Не получится поклеить обои, если высота рулона меньше высоты стены\n";
	}
	// ПОВТОР ВОПРОСА ВВОДА ПРИ НЕПРАВИЛЬНЫХ ДАННЫХ
	perimeter = (roomL * 2) + (roomW * 2);
	cout << perimeter << endl;

	difference = paperH / roomH;
	cout << difference << endl;
	a = perimeter; // Для условий цикла
	used = 0;

		while (done < a)
		{
			if (perimeter >= paperW*difference) 
			{
				perimeter -= paperW * difference; 
				done += paperW * difference;
				usage += 1;
				used += roomH * paperW * difference;
				/*cout << perimeter << "- периметр" << endl;
				cout << done << "- dont" << endl;
				cout << usage << "- usage" << endl;*/
				

			}
			else
			{
				used += paperW - perimeter;
				usage += 1;
				done = a; // Выход из цикла
				useless = (paperH * paperW) - perimeter * roomH;
			}
		}


	leftpercent = 100.0 - ((used + useless) * 100) / (usage*paperH*paperW);
	cout << "Количество использованных рулонов составило: " << usage << endl;
	cout << "Остаток неиспользованных обоев составил: " << leftpercent << "%" << endl;

	return 0;
}
