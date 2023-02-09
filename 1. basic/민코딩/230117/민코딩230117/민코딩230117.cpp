//#include <iostream>
//using namespace std;
//int main()
//{
//	int vector[8] = { 4, 3, 6, 1, 3, 1, 5, 3 };
//	int target;
//	int i;
//	int cnt;
//	cin >> target;
//	cnt = 0;
//	for (i = 0; i < 8; i++)
//	{
//		if (vector[i] == target)
//		{
//			cnt++;
//		}
//	}
//	cout << "숫자" << target << "개수는" << cnt << "개";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr[3][5] = {
//        {'A','B','C','D','E'},
//        {'E','A','B','A','B'},
//        {'A','C','D','E','R'},
//    };
//    char a;
//    cin >> a;
//	int cnt= 0;
//	for (int i = 0; i < 3; i++)
//	{
//        for (int t = 0; t < 5; t++)
//        {
//            if (arr[i][t] == a )
//            {
//                cnt++;
//            }  
//        }
//	}
//    if (cnt >= 3)
//    {
//        cout << "대발견";
//    }
//    else if (cnt == 2 || cnt == 1)
//    {
//        cout << "발견";
//    }
//    else
//    {
//        cout << "미발견";
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr[6] = {'A','F','G','A','B','C'};
//    char a, b;
//    cin >> a >> b;
//    int cnt = 0;
//    int count = 0;
//    for (int i = 0; i < 6; i++)
//    {
//            if (arr[i] == a)
//            {
//                cnt++;
//            }
//             if (arr[i] == b)
//            {
//                count++;
//            }
//       
//    }
//    if (cnt >= 1 && count >=1)
//    {
//        cout << "와2개";
//    }
//    else if (cnt >= 1 || count >= 1)
//    {
//        cout << "오1개";
//    }
//    else if (cnt == 0 && count == 0)
//    {
//        cout << "우0개";
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main(){
//    
//    int arr[6] = { 3,4,2,5,7,9 };
//    int a, b, s;
//    cin >> a >> b;
//    s = arr[b];
//    arr[b] = arr[a];
//    arr[a] = s;
//    for (int i = 0; i < 6; i++)
//    {
//        cout << arr[i];
//    } 
//    return 0;
//}

#include <iostream>
using namespace std;

int main(){
    
    struct ABC {
        int x;
        int y;
}
    ABCt;
    cin >> t.x;
    cin >> t.y;
    cout << t.y + t.x;
    return 0;
}