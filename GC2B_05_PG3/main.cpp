#include <iostream>
#include <string>
#include <chrono>
#include <Windows.h>


using namespace std;

int main()
{

    SetConsoleOutputCP(65001);
    
	string a(1000000, 'a');

	

	auto start_copy = chrono::high_resolution_clock::now();

	string b = a;	

	auto end_copy = chrono::high_resolution_clock::now();

	auto copy_duration =
		chrono::duration_cast<chrono::microseconds>(end_copy - start_copy).count();

	auto start_move = chrono::high_resolution_clock::now();

	string c = std::move(a);	

	auto end_move = chrono::high_resolution_clock::now();

	auto move_duration =
		chrono::duration_cast<chrono::microseconds>(end_move - start_move).count();


	cout << "1,000,000文字のコピーと移動を比較しました。" << endl;
	cout << "コピー : " << copy_duration << " μs" << endl;
	cout << "移動 : " << move_duration << " μs" << endl;

	// 終了待機
	cout << endl;
	cout << "何かキーを押してください...";
	cin.get();

	return 0;
}
