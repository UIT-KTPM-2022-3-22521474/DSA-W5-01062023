#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() 
{
    int N, Q;
    cin >> N >> Q;
    unordered_map<string, string> database;
    for (int i = 0; i < N; i++)
    {
        string username, password;
        cin >> username >> password;
        database[username] = password;
    }
    for (int i = 0; i < Q; i++)
    {
        string username;
        cin >> username;
        if (database.find(username) != database.end())
        {
            cout << database[username] << endl;
        }
        else
        {
            cout << "Chua Dang Ky!" << endl;
        }
    }
    return 0;
}