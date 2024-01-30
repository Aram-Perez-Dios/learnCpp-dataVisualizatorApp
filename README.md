# Lean Cpp - Data Visualizator App

Small application for the visualization of data generating simple graphs. All of this with the objective of learning and applying multiple C++ concepts.

## Build

Build the project using the scripts inside the `scripts/` directory (execute them on the main project's directory):

```sh
# Build the project (generate executables and documentation)
./scripts/build.sh

# Create make files
./scripts/make.sh

# Generate all executables (main program and tests)
./scripts/cmake.sh

# Generate main executable
./scripts/cmake.sh visualizator.exe

# Generate tests executables
./scripts/cmake.sh tests.exe

# Remove all build files (executables, build/ files and doxygen documentation)
./scripts/clear.sh
```

## Execution

Execute the program using the following command:

```sh
# Execution of program
./visualizator.exe [relativePathToFile/] 

# Example of execution with example file
./visualizator.exe data/test/test-dataset.csv 
```

## Requirements and tools

|    Tool    |   Version   |
|:----------:|:-----------:|
| gcc        | 11.4.0      |
| c++        | std=23      |
| make       | 4.3         |
| cmake      | 3.22.1      |
| Doxygen    | 1.9.1       |

## Links

* Tutorial for the setup of CMake  
[https://youtu.be/V1YP7eJHDJE?si=L24Q9-UdUEFgpXvF](https://youtu.be/V1YP7eJHDJE?si=L24Q9-UdUEFgpXvF)

* Tutorial for creating a Json parser in C++ from scratch  
[https://kishoreganesh.com/post/writing-a-json-parser-in-cplusplus](https://kishoreganesh.com/post/writing-a-json-parser-in-cplusplus)

* Doxygen setup tutorial  
[https://www.youtube.com/watch?v=pnnKzkNTo4w](https://www.youtube.com/watch?v=pnnKzkNTo4w)

* Doxygen documentation  
[https://www.doxygen.nl](https://www.doxygen.nl)

* Doxygen comments tags  
[https://www.doxygen.nl/manual/commands.html](https://www.doxygen.nl/manual/commands.html)

* GoogleTest documentation start guide  
[https://google.github.io/googletest/quickstart-cmake.html](https://google.github.io/googletest/quickstart-cmake.html)

* GoogleTest Primer guide  
[http://google.github.io/googletest/primer.html](http://google.github.io/googletest/primer.html)