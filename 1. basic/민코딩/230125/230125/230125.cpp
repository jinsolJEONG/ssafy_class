//#include <iostream>
//using namespace std;
//
//int main()
//{
//	struct PROFILE
//	{
//		char name[7];
//		int age;
//		int weight;
//	};
//	PROFILE pr1, pr2;
//	cin >> pr1.name >> pr1.age >> pr1.weight;
//	cin >> pr2.name >> pr2.age >> pr2.weight;
//	cout << pr1.name << " & " << pr2.name<<endl;
//	cout << "평균" << (pr1.age + pr2.age) / 2 << "세"<<endl;
//	cout << "평균" << (pr1.weight + pr2.weight) / 2 << "KG";
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[7] = { 4,2,5,1,6,7,3 };
//	char a, b;
//
//	cin >> a >> b;
//	int dtc = 0;
//	if (a>b)
//	{
//		for (int i = b - 'A' + 1; i < a - 'A'; i++)
//		{
//			dtc = dtc + arr[i];
//		}
//	}
//	else {
//		for (int i = a - 'A' + 1; i < b - 'A'; i++)
//		{
//			dtc = dtc + arr[i];
//		}
//	}
//	cout << dtc;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr1[5];
//	int arr2[5];
//	int arr3[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr1[i];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr2[i];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr3[i];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr1[i] * arr2[i] + arr3[i]<<' ';
//	}
//	return 0;
//}

//#include <iostream>
////#include <string> 길이 함수
//using namespace std;
//
//int main()
//{
//	char arr[6] = { 1,5,2,2,2,9 };
//	int dat[10] = { 0 };
//
//	//int n = strlen(arr); // 문자열 길이 
// 	for (int i = 0; i < n; i++)
//	{
//		int it = arr[i];
//		dat[it]++;
//		//dat[arr[i]]++;
//	}
//	
//	for (int i = 1; i <= 3; i++)
//	{
//		cout << i << ':' << dat[i] << endl;
//	}
//	return 0;
//}


#include <iostream>
using namespace std;
void getMax(int* dy, int* dx, int arr[2][3]) {
	
	for (int i = 0; i < 2; i++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[i][x] > *dy)
			{
				*dy = arr[i][x];
			}
			if (arr[i][x] > *dx)
			{
				*dx = arr[i][x];
			}
		}
	}
};
void getMin(int* dy, int* dx, int arr[2][3]) {

	for (int i = 0; i < 2; i++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[i][x] < *dy)
			{
				*dy = arr[i][x];
			}
			if (arr[i][x] < *dx)
			{
				*dx = arr[i][x];
			}
		}
	}
};

int main()
{
	int arr[2][3];
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[0][i];
		}
		for (int i = 30; i < 3; i++)
		{
			cin >> arr[1][i];
		}
		int maxY = -99;
		int maxX= -99;
		int minY = 99;
		int minX= 99;

	getMax(&maxY, &maxX, arr);
	getMin(&minY, &minX, arr);

	cout << maxY << maxX;
	return 0;
}