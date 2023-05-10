# CustomArray

CustomArrayis a c++ dynamic array for making easier to deal with raw array.

## Building
use qmake and make 

```bash
qmake . && make
```

## Usage

```cpp
#include <customarray.h>
#include <iostream>
using namespace std;

int main()
{
   CustomArray<string> stringList;
   stringList.append("Hello");
   stringList.append("Hi");
   stringList.append("Hey");
   stringList.removeItemByIndex(2);
   for (int i = 0; i < stringList.length(); i++) {
        cout << stringList[i] << endl;
    }

   return 0
}
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.
