#include <iostream>
using namespace std;
int main() {
    int n,m,a,b;
    while(cin >> n >> m){
        a = (4 * n - m) / 2;
        b = n - a;
        if (n == 0 && m == 0) {
            exit(0);
        }
        if (m % 2 == 1 || a < 0 || b < 0) {
            cout << "No answer" << endl;
        } else {
            cout << a << ' ' << b << endl;
        }
    }
        return 0;
}
/*
题目描述
已知鸡和兔的总数量n，总腿数为m。请输出鸡和兔的只数。
输入
每行两个整数（不超过100000）分别表示你n，m。遇到0 0时结束程序。
输出
每行输出两个数，分别是鸡和兔的数目。如果不能求解，则输出“No answer”
样例输入
14 32
10 16
样例输出
12 2
No answer
*/
