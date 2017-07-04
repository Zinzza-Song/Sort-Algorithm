#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

void swap(int a[], int i, int j) {

	int t = a[i];
	a[i] = a[j];
	a[j] = t;

}

void selction(int a[], int N) {

	int i, j, min;

	for (i = 0; i < N - 1; i++) {

		min = i;

		for (j = i + 1; j < N; j++) {

			if (a[j] < a[min])
				min = j;

		}

		swap(a, min, i);

		cout << "\n선택 정렬 " << i + 1 << " 단계 : " << endl;

		for (j = 0; j < N; j++) {

			Sleep(300);
			printf("%d ", a[j]);

		}
			

	}

}