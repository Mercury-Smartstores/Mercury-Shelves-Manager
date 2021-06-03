# Mercury Shelves Manager 🗃️

An application to control Mercury Smart Shelves built for Windows. 
The program reads from the [Arduino Serial bus](https://www.arduino.cc/reference/en/language/functions/communication/serial/)
any information regarding the state changes in the shelves. 

### 🔧 Installation

We are using [CLion](https://www.jetbrains.com/clion/) for dev work, the libraries used are
the standard [cstdio](https://www.cplusplus.com/reference/cstdio/) and [cstdlib](https://www.cplusplus.com/reference/cstdlib/).
We also use the [Win32 API](https://docs.microsoft.com/en-us/windows/win32/api/winbase/) to be able to read
from COM ports in Windows. In case you want to add support to any other Operating System make sure
you replace the I/O communication file creation in Windows for the corresponding API calls.

### 📦 Deploying
After deploying you have to update the main file to implement the expected logic to connect
this component with the Store Manager from [Mercury](https://github.com/Mercury-Smartstores).


### 📄 License
This repository is licensed under the [MIT License](LICENSE).

### ♦️ About Mercury

This repository contains the code for a package from the Mercury infrastructure.
If you want to know more about Mercury check out the [Mercury Organization](https://github.com/Mercury-Smartstores).