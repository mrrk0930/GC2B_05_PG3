#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int main()
{
    
    string a(1000000, 'a');

    
    auto start_copy = chrono::high_resolution_clock::now();

    string b = a;   

    auto end_copy = chrono::high_resolution_clock::now();

    auto copy_time =
        chrono::duration_cast<chrono::microseconds>(end_copy - start_copy).count();


    auto start_move = chrono::high_resolution_clock::now();

    string c = move(a);  

    auto end_move = chrono::high_resolution_clock::now();

    auto move_time =
        chrono::duration_cast<chrono::microseconds>(end_move - start_move).count();

    
    cout << "1,000,000文字のstd::stringを比較しました。" << endl;
    cout << endl;

    cout << "コピー : " << copy_time << " μs" << endl;
    cout << "ムーブ : " << move_time << " μs" << endl;

    cout << endl;
    cout << "何かキーを押してください...";
    cin.get();

    return 0;
}