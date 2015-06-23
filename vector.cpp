//可変長配列
//vector
//sort

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vc;  // <T>でT型のvector
	int n;
	cout << "Iterate Time > " << flush;
	cin >> n;
	cout << "Add Ellements > " << endl;
	while (n--) {
		int x;
		cin >> x;
		vc.push_back(x);  // 配列の最後の要素にxを追加
	}

	// vector<T>のイテレータはvector<T>::iterator型
	vector<int>::iterator it = vc.begin();  // begin()はvectorの最初の要素を指すイテレータを返す
	vector<int>::iterator endIt = vc.end();  // end()はvectorの終端位置を指すイテレータを返す
	cout << endl << "vc[n] = " << flush;
	while (it != endIt)
	{
		cout << *it << "  " << flush;  // イテレータの指す要素はポインタのように*演算子でアクセス
		it++;
	}
	cout << endl << endl;

	//sortにはソートする範囲のイテレータを渡す
	sort(vc.begin(), vc.end());  // Cのqsortより高速
	cout << "vc[n] = " << flush;
	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << "  " << flush;
	}
	cout << endl << endl;

	system("pause");
}