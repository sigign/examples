Example of calling C++ library from C code by using a wrapper.
This example shows using log4cplus from C or C++.  Note that the wrapper
hides this dependency from the C/C++ main function.

Dependecy: log4cplus 2.x
https://sourceforge.net/projects/log4cplus/

Alternatively, you could change to wrapper and adapter code to use some other
library besides log4cplus.

To build:
mkdir build
cd build
cmake ..
make
./log (runs the C++ main)
./logc (runs the C main)

