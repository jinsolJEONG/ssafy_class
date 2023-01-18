//#include <iostream>
//using namespace std;
//int main()
//{
//    char arr[3][3] = {  };
//    char a = 'A';
//    for (int y = 0; y < 3; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            arr[y][x] = a; 
//            a++;
//        }
//    }
//    int y1, x1, y2, x2;
//    cin >> y1 >> x1 >> y2 >> x2;
//    char temp;
//    temp = arr[y1][x1];
//    arr[y1][x1] = arr[y2][x2];
//    arr[y2][x2] = temp;
//    for (int y = 0; y < 3; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            cout << arr[y][x];
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    char arr[6][2] = {  };
//    for (int y = 0; y < 6; y++)
//    {
//        for (int x = 0; x < 2; x++)
//        {
//            cin >> arr[y][x]; 
//        }
//    }
//    int cnt = 0;
//    for (int y = 0; y < 6; y++)
//    {
//        char temp;
//        if (arr[y][0] < arr[y][1])
//        {
//            temp = arr[y][0];
//            arr[y][0] = arr[y][1];
//            arr[y][1] = temp;
//            cnt++;
//        } 
//    }
//
//    for (int y = 0; y < 6; y++)
//    {
//        for (int x = 0; x < 2; x++)
//        {
//            cout << arr[y][x] << ' ';
//        }
//        cout << endl;
//    }
//    cout << cnt << "명";
//    return 0;
//}

#include <iostream>
using namespace std;

void BBQ(int a, int b) {
    cout << "합:" << a + b << endl;
    cout << "차:" << a - b << endl;
    cout << "곱:" << a * b << endl;
    cout << "몫:" << a / b << endl;

}

int main()
{
    int a, b;
    cin >> a >> b;

    BBQ(a, b);
    return 0;
}

