
#include <customarray.h>
#include <iostream>

using namespace std;

int main()
{
    //    CustomArray<int> list;

    //    cout << list.length() << endl;
    //    list.append(1);
    //    list.append(2);
    //    list.append(3);
    //    list.append(4);
    //    list.append(5);
    //    list.append(6);
    //    list.append(7);
    //    list.append(8);
    //    list.append(9);
    //    list.append(10);
    //    list.append(11);
    //    list.append(12);

    //    cout << list.length() << endl;

    //    CustomArray<long long> longList;
    //    longList.append(1999);
    //    longList.append(21231);
    //    longList.append(413321);
    //    longList.append(1412323000000);
    //    longList.append(9999999999);
    //    for (int i = 0; i < longList.length(); i++) {
    //        cout << longList[i] << endl;
    //    }

    CustomArray<string> stringList;
    stringList.append("Hello");
    stringList.append("Hi");
    stringList.append("Hey");
    stringList.removeItemByIndex(2);

    for (int i = 0; i < stringList.length(); i++) {
        cout << stringList[i] << endl;
    }
    return 0;
}
