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

	cout << "������ ����" << endl;

	for (i = 0; i < N; i++) {

		Sleep(1000); 
		printf("%d  ", a[i]);

	}
		
	cout << " " << endl;
	
	while (check) {
		
		cout << "���� ����� �����Ͻÿ�.\n1.���� ���� 2. ���� ����" << endl;
		cin >> choice;
		
		start_time = clock();

		if (choice == 1) {

			selction(a, N);

			cout << "\n���ĿϷ�" << endl;
			cout << "���������� ����ð�(N = " << N << ") : " << (clock() - start_time) / 1000 << "��\n\n" << endl;

		}

		else if (choice == 2) {

			bubble(a, N);

			cout << "\n���ĿϷ�" << endl;
			cout << "���������� ����ð�(N = " << N << ") : " << (clock() - start_time) / 1000 << "��\n\n" << endl;

		}

		cout << "�׸��ΰ� ������ 0�� ����ϽǷ��� �ƹ� ���ڳ� �Է����ּ���" << endl;
		cin >> check;

	}

}