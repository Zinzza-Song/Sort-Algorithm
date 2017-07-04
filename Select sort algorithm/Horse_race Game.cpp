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

		printf("%d등 말 : ", i);
		printf("%c", horse[i]);
		printf("\n");

		if (choice == horse[i])
			result += i;

	}

	if (choice == horse[1])
		cout << "1등 말을 맞추셨습니다!!!" << endl;

	else
		cout << result << "등말을 골라서 틀리셨습니다 ㅜㅜ" << endl;

}

int main() {

	int i, a[N + 1];
	char choice;
	char horse[N + 1];

	horse[1] = 'A'; horse[2] = 'B'; horse[3] = 'C';
	horse[4] = 'D'; horse[5] = 'E';

	for (i = 1; i <= N; i++) {
		
		printf("%d번 말 : ", i);
		printf("%c", horse[i]);
		printf("\n");

	}


	srand(time(NULL));

	for (i = 1; i <= N; i++)
		a[i] = rand();

	cout << "1등 할 것 같은 말을 선택해주세요.\n(보기외의 것을 입력하면 결과가 안나옵니다.)\n A  B  C  D  E" << endl;
	cin >> choice;
	
	play(a, horse, choice);

}