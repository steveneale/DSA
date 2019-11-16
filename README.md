# DSA++

*DSA++* is a library implementing a range of data structures and algorithms in C++. The library currently contains implementations of the following algorithms:

* Sorting
  * Insertion sort

## Package structure

```bash
├── CMakeLists.txt
├── README.md
├── include
│   └── DSA++
│       └── arrays
│           └── sorting.hpp
└── src
    ├── arrays
    │   └── sorting.cpp
    └── example.cpp
```

## Building the library

*DSA++* includes a `CMakeLists.txt` file, allowing it to be built using [cmake](https://cmake.org/). To do so, navigate to the library's root directory in a terminal and type:

```bash
cmake .
```

This will create a `Makefile` (among other files). Then, the library can be built by simply typing:

```bash
make
```

The `example.out` file will now be present in the root directory, and can be run to see examples of the algorithms in action:

```bash
./example.out
```