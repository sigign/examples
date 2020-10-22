Example of calling C++ library from C code by using a wrapper.
This example shows using log4cplus from C or C++.  Note that the wrapper
hides this dependency from the C/C++ main function.

To build:
mkdir build
cd build
cmake ..
./log (runs the C++ main)
./logc (runs the C main)

