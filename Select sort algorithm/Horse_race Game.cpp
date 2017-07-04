#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int N = 5;
const int TRUE = 1;
const int FALSE = 0;

void swap(int a[], int i, int j, char horse[]) {

	int t = a[i]; 
	a[i] = a[j]; 
	a[j] = t;

	char q = horse[i];
	horse[i] = horse[j];
	horse[j] = q;

}

void selectionsort(int a[], int N, char horse[]) {

	int i, j, min;

	for (i = 1; i < N; i++) {

		min = i;

		for (j = i + 1; j <= N; j++) {
			
			if (a[j] < a[min])
				min = j;

		}

		swap(a, min, i, horse);

	}

}

void play(int a[], char horse[], char choice) {

	int i, result = 0;

	selectionsort(a, N, horse);

	for (i = 1; i <= N; i++) {

		printf("%d�� �� : ", i);
		printf("%c", horse[i]);
		printf("\n");

		if (choice == horse[i])
			result += i;

	}

	if (choice == horse[1])
		cout << "1�� ���� ���߼̽��ϴ�!!!" << endl;

	else
		cout << result << "��� ��� Ʋ���̽��ϴ� �̤�" << endl;

}

int main() {

	int i, a[N + 1];
	char choice;
	char horse[N + 1];

	horse[1] = 'A'; horse[2] = 'B'; horse[3] = 'C';
	horse[4] = 'D'; horse[5] = 'E';

	for (i = 1; i <= N; i++) {
		
		printf("%d�� �� : ", i);
		printf("%c", horse[i]);
		printf("\n");

	}


	srand(time(NULL));

	for (i = 1; i <= N; i++)
		a[i] = rand();

	cout << "1�� �� �� ���� ���� �������ּ���.\n(������� ���� �Է��ϸ� ����� �ȳ��ɴϴ�.)\n A  B  C  D  E" << endl;
	cin >> choice;
	
	play(a, horse, choice);

}