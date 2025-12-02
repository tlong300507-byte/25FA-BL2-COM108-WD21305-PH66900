#include <stdio.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}
void sapXepPhanTuMang()
{
	int mangSoNguyen[100];
	int length;
	printf("Nhap kich thuoc mang: ");
	scanf_s("%d", &length);
	printf("Nhap du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = ", i);
		scanf("%d", &mangSoNguyen[i]);
	}
	printf("Nhap du lieu cho mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d", i, mangSoNguyen);
		
	}
}
void demoMang2chieu()
{
	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("mang[%d][%d]: ", i, j);
			scanf_s("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ", array[i][j]);
		}
		printf("\n");
	}
}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepPhanTuMang();
			break;
		case 3:
			demoMang2chieu();
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf_s("%d", &tiepTuc);
		system("cls");
	}
}
int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Sap xep phan tu mang 1 chieu");
		printf("\n");
		printf("3. demoMang2chieu");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf_s("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}