//�ϒ��z��
//vector
//sort

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vc;  // <T>��T�^��vector
	int n;
	cout << "Iterate Time > " << flush;
	cin >> n;
	cout << "Add Ellements > " << endl;
	while (n--) {
		int x;
		cin >> x;
		vc.push_back(x);  // �z��̍Ō�̗v�f��x��ǉ�
	}

	// vector<T>�̃C�e���[�^��vector<T>::iterator�^
	vector<int>::iterator it = vc.begin();  // begin()��vector�̍ŏ��̗v�f���w���C�e���[�^��Ԃ�
	vector<int>::iterator endIt = vc.end();  // end()��vector�̏I�[�ʒu���w���C�e���[�^��Ԃ�
	cout << endl << "vc[n] = " << flush;
	while (it != endIt)
	{
		cout << *it << "  " << flush;  // �C�e���[�^�̎w���v�f�̓|�C���^�̂悤��*���Z�q�ŃA�N�Z�X
		it++;
	}
	cout << endl << endl;

	//sort�ɂ̓\�[�g����͈͂̃C�e���[�^��n��
	sort(vc.begin(), vc.end());  // C��qsort��荂��
	cout << "vc[n] = " << flush;
	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i] << "  " << flush;
	}
	cout << endl << endl;

	system("pause");
}