#include "include/Table.h"
#include <iostream>

using namespace std;

int main()
{
    Table<char, char*> table(10);

    table.Add("2", 'b');
    table.Add("4", 'c');
    table.Add("1", 'd');
    table.Add("7", 'a');
    table.Add("3", 'e');

    cout << table['c']
         << " "
         << table['e']
         << " "
         << table['b']
         << endl;

    table.getall();
    table.Del('e');
    table.Del('d');

    cout << endl;
    table.getall();

    return 0;
}