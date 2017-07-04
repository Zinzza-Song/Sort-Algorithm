#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include "selction.h"
#include "sort.h"

using namespace std;

const int N = 8;

void main() {

	int a[N];
	int i, choice, check = 1;
	double start_time;

	for (i = 0; i < N; i++)
		a[i] = rand();

	cout << "정렬할 원소" << endl;

	for (i = 0; i < N; i++) {

		Sleep(1000); 
		printf("%d  ", a[i]);

	}
		
	cout << " " << endl;
	
	while (check) {
		
		cout << "정렬 방식을 선택하시오.\n1.선택 정렬 2. 버블 정렬" << endl;
		cin >> choice;
		
		start_time = clock();

		if (choice == 1) {

			selction(a, N);

			cout << "\n정렬완료" << endl;
			cout << "선택정렬의 실행시간(N = " << N << ") : " << (clock() - start_time) / 1000 << "초\n\n" << endl;

		}

		else if (choice == 2) {

			bubble(a, N);

			cout << "\n정렬완료" << endl;
			cout << "버블정렬의 실행시간(N = " << N << ") : " << (clock() - start_time) / 1000 << "초\n\n" << endl;

		}

		cout << "그만두고 싶으면 0을 계속하실려면 아무 숫자난 입력해주세요" << endl;
		cin >> check;

	}

}