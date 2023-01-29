#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    char cmdCommand [100] = "/k netsh wlan show profiles ";
    char keyClear [] = " key=clear";
    string netID;

    cout << "Please input your network name: ";
    cin >> netID;

    const int SIZE = netID.size();
    char sSID [SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        sSID [i] = netID [i];
    }

    strncat(cmdCommand, sSID, SIZE);
    strncat(cmdCommand, keyClear, 10);


    ShellExecute(NULL, "open", "cmd", cmdCommand, NULL, SW_SHOWNORMAL);

    return 0;
}
