#include <iostream>
using namespace std;
void nhapmang(int a[], int n);
void giaima(int a[], int n);
int main()
{
	int n;
	int  a[100];
	cin >> n;
	nhapmang(a, n);
	giaima(a, n);
}
void nhapmang(int  a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void giaima(int  a[], int n) {
	int dem = 0;
	int a1 = 0;
	int a2;
	int dem1 = 0;
	for (int i = 1; i < 100000000; i++)
	{
		dem = 0;
		dem1 = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
			{
				dem = dem + 1;
			}
		}
		if (dem == 2)
		{
			a1 = i;
			for (int i = 0; i < n; i++)
			{
				if (a1 != a[i]) {
					dem1 = dem1 + 1;
				}
			}
			if (dem1 == n)
			{
				cout << a1;
				break;
			}
		}

	}
}
