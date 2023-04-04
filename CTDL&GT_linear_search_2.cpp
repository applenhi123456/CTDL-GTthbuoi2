//link tham khảo:https://sinhvientot.net/giai-thuat-tim-kiem-tuyen-tinh/
void NhapMang(int a[], int &n)
{
	printf("Cho biet so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	{
		printf("Gia tri phan tu a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i<n; i++)
		printf("%4d", a[i]);
}
int TimKiemTuyenTinh(int a[], int n, int x)
{
	for (int i = 0; i < n;i++)
		if (a[i] == x)
			return 1;
	return 0;
}
#define Max 100
void main()
{
	int A[Max];
	int N;
	int X;
	NhapMang(A, N);
	printf("Nhap phan tu can tim");
	scanf("%d", &X);
	int b=TimKiemTuyenTinh(A, N, X);
	if (b == 1)
		printf("%d co trong mang",X);
	else
	{
		printf("%d khong co trong mang", X);
	}
	getch();
}
