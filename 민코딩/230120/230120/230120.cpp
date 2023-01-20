//#include <iostream>
//using namespace std;
//
//char arr[2][3] = { 'F', 'E', 'W', 'D', 'C', 'A' };
//
//
//void findCh(char a) {
//    int cnt = 0;
//    for (int y = 0; y < 2; y++)
//    {   
//        for (int x = 0; x < 3; x++)
//        {
//            if (a == arr[y][x])
//            {
//                cnt++;
//            }
//        }
//
//    }
//    if (cnt > 0)
//    {
//        cout << "발견";
//    }
//    else
//    {
//        cout << "미발견";
//    }
//}
//
//int main()
//{
//    char a;
//    cin >> a;
//    findCh(a);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//
//char arr[5] = { };
//int i = 0;
//
//void checkChar(char a) {
//
//    if (a >= 'A' && a <= 'Z')
//    {
//        cout << "대";
//    }
//    else
//    {
//        cout << "소";
//    }
//}
//
//int main()
//{
//    cin >> arr[0]>>arr[1]>>arr[2]>> arr[3] >> arr[4];
//    for (int i = 0; i < 5; i++)
//    {
//        char a = arr[i];
//        checkChar(a);
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	struct Person
//	{
//		int age;
//		int height;
//	};
//	Person a, b;
//
//	cin >> a.age >> a.height >> b.age >> b.height;
//	int avg_age, avg_height;
//	avg_age = (a.age + b.age) / 2;
//	avg_height = (a.height + b.height) / 2;
//
//	cout << avg_age << ' ' << avg_height;
//	
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arrA[5] = { 2,1,2,4,5 };
//	int arrB[3][3] = {
//		{2,5,3},
//		{4,5,7},
//		{8,7,2}
//	};
//	int cnt = 0;
//	int a;
//	cin >> a;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arrA[i]==a)
//		{
//			cnt++;
//		}
//	}
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arrB[y][x] == a)
//			{
//				cnt++;
//			}
//		}
//	}
//	cout << cnt;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
//	char arr[5] = { };
//	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//	int cnt = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] == 'A')
//		{
//			cnt++;
//		}
//	}
//	cout << "문자A는 "<<cnt<<"개발견" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] == 'A')
//		{
//			cout << i << "번" << endl;
//		}
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[5][3] = {
//		{'D','A','A'},
//		{'B','C','D'},
//		{'E','F','A'},
//		{'A','A','D'},
//		{'F','G','E'}
//	};
//	char a;
//	cin >> a;
//	for (int y = 0; y < 5; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] == a)
//			{
//				cout << '(' << y << ',' << x << ')' << endl;
//			}
//		}
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][3] = {
//		{10,3,20},
//		{60,30,40},
//		{20,30,40}
//	};
//	int cnt = 0;
//	int a, b;
//	cin >> a >> b;
//
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] >= a && arr[y][x] <= b)
//			{
//				cnt++;
//			}
//		}
//	}
//	cout << cnt;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//char arr[2][3] = {};
//int cntA = 0;
//int cntB = 0;
//
//
//void input(char arr[2][3]) {
//
//
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			cin >> arr[y][x];
//		}
//	}
//
//
//}
//
//void findUpper(char arr[2][3]) {
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] >= 'A' && arr[y][x] <= 'Z')
//			{
//				cntA++;
//				
//			}
//		}
//	}
//	cout << "대문자" << cntA << "개"<<endl;
//}
//
//void findLower(char arr[2][3]) {
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] >= 'a' && arr[y][x] <= 'z')
//			{
//				cntB++;
//			}
//		}
//	}
//	cout << "소문자" << cntB << "개";
//}
//
//int main()
//{
//	input(arr);
//	findUpper(arr);
//	findLower(arr);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//char arr[2][3] = {};
//int cntA = 0;
//int cntB = 0;
//
//
//void input(char arr[2][3]) {
//
//
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			cin >> arr[y][x];
//		}
//	}
//
//
//}
//
//void findUpper(char arr[2][3]) {
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] >= 'A' && arr[y][x] <= 'Z')
//			{
//				cntA++;
//				
//			}
//		}
//	}
//	cout << "대문자" << cntA << "개"<<endl;
//}
//
//void findLower(char arr[2][3]) {
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] >= 'a' && arr[y][x] <= 'z')
//			{
//				cntB++;
//			}
//		}
//	}
//	cout << "소문자" << cntB << "개";
//}
//
//int main()
//{
//	input(arr);
//	findUpper(arr);
//	findLower(arr);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][3] = {
//		{3,5,14},
//		{2,3,9},
//		{6,2,7}
//	};
//	int cnt = 0;
//	int a;
//	cin >> a;
//
//
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] % a == 0)
//			{
//				cnt++;
//			}
//		}
//	}
//	cout << cnt;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	struct PROJECT
//	{
//		int num;
//		char id;
//		int vect[4] = {};
//	};
//	PROJECT z;
//	int a;
//	cin >> a;
//	
//	if (a<10)
//	{
//		z.num = 5;
//		z.id = 'G';
//		z.vect[0] = 1;
//		z.vect[1] = 2;
//		z.vect[2] = 3;
//		z.vect[3] = 4;
//	}
//	else if (a<100)
//	{
//		z.num = 8;
//		z.id = 'T';
//		z.vect[0] = 5;
//		z.vect[1] = 1;
//		z.vect[2] = 2;
//		z.vect[3] = 3;
//	}
//	else
//	{
//		z.num = 10;
//		z.id = 'Q';
//		z.vect[0] = 9;
//		z.vect[1] = 1;
//		z.vect[2] = 6;
//		z.vect[3] = 2;
//	}
//	
//	cout << z.num << endl << z.id << endl << z.vect[0] << ' ' << z.vect[1] << ' ' << z.vect[2] << ' ' << z.vect[3];
//    return 0;
//}
