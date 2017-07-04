#pragma once
#pragma once
#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

void bubble(int a[], int N) {

	int i, j, t;

	for (i = N - 1; i > 0; i--) {

		cout << "\n\n버블 정렬 " << N - i << " 단계" << endl;

		for (j = 0; j < i; j++) {

			if (a[j] > a[j + 1]) {

				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;

			}

			cout << " " << endl;

			for (int k = 0; k < N; k++) {

				Sleep(300);
				printf("%d ", a[k]);

			}

		}

	}

}