#include"stdafx.h"

using namespace std;

//листинг 7.14 Программа ruler.cpp
// Использование рекурсии для нанесения делений линейки

const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int height, int level);



int main()
{
	foo(); // устанавлевает русскую локаь

	char ruler[Len];
	int i;
	for ( i = 1; i < Len-2; i++)
	{
		ruler[i] = ' ';
	}
	ruler[Len - 1] = '\0';
	int max = Len - 2;
	int min = 0;
	ruler[min] = ruler[max] = '|';
	cout << ruler << "\n";


	for (i = 1; i <= Divs; i++)
	{
		subdivide(ruler, min, max, i);
		cout << ruler << '\n';

		for (int j = 1; j < Len - 2; j++)
		{
			ruler[j] = ' ';
		}
	}


	cout << "git tutorial " << endl;
	


}

void subdivide(char ar[], int low, int height, int level)
{
	if (level == 0)
	{
		return;
	}
	int mid = (height + low) / 2;
	ar[mid] = '|';
	subdivide(ar, low, mid, level - 1);
	subdivide(ar, mid, height, level - 1);
}


