# Eigen Template

This is a simple C++ project template for starting work using the [Eigen library](https://eigen.tuxfamily.org/) for linear algebra.

## Prerequisites

Make sure that you have [CMake](https://cmake.org/) installed.
For most systems, you can install it using the default package manager.

If you are on a Mac and have [Homebrew](https://brew.sh/) installed, run the following command:

```bash
brew install cmake
```

On Ubuntu it can be installed by running

```bash
sudo apt install cmake
```

On other Linux distributions it should work similar using their respective package manager.

## Usage

The usage of this template is very simple.

First clone it using the following command:

```bash
git clone --recursive https://github.com/Zollerboy1/eigen-template.git
```

This creates a directory called `eigen-template`, which you can enter like this:

```bash
cd eigen-template
```

To see if everything is working correctly, create a build folder, enter it, and build the template project using the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

You should now have an executable which can be run like so:

```bash
./src/main
```

This should print the following output:

```
1 2 3
4 5 6
```

If it doesn't, feel free to open an issue on this repository and tell me what error(s) you are getting where and which OS/hardware you are using.

---

Otherwise you can now start to write your own program that uses Euler.

Put source files (i.e. `.h` and `.cpp` files) into the `src` folder. In this folder you already see some source files (you can delete `foo.h` and `foo.cpp` but you have to remove `foo.cpp` from the first line of the `src/CMakeLists.txt` file as well). Whenever you add a `.cpp` file, you also have to add it to the list of source files inside the `add_executable` command in `src/CMakeLists.txt` (just separate the file names using a space), otherwise it won't be compiled when you invoke `cmake` and `make`.  
To build the project when you made some changes, you go again into the `build` folder and invoke the `cmake ..` and `make` commands from above.
