# CPP BASE

**Contents**<br>
[About](#about)<br>
[Style](#style)<br>
[Testing](#testing)<br>
[Running and Compiling](#running-and-compiling)<br>

## About
This repo is just a starting point for a C++ project. The goal is to promote consistent style and effective testing, using the tools and heuristics listed in the following sections.

## Style
The project (tries to) adhere to the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html) using their [cpplint.py script](https://raw.githubusercontent.com/google/styleguide/gh-pages/cpplint/cpplint.py). <br>

Run ```cpplint.py```
```
./scripts/syntax_test.sh [RECENTLY_EDITED_FILE]
```

## Testing
Unit tests are done through the [Catch 2 Framework](https://github.com/catchorg/Catch2). <br>

Create a ```build ``` directory<br>
```
mkdir build
```

Run the ```test_compile.sh``` script in the scripts folder<br>
```
./scripts/test_compile.sh [NAME_OF_TEST_EXECUTABLE]
```

Run unit test executable <br>
```
./build/[NAME_OF_TEST_EXECUTABLE]
```
<br>

To check for memory leaks we use [Valgrind](https://valgrind.org/docs/manual/quick-start.html). <br>

Run ```valgrind```
```
./scripts/valgrind_compile.sh [NAME_OF_EXECUTABLE]
```

## Running and Compiling
Create a ```build ``` directory<br>
```
mkdir build
```

Run the ```compile.sh``` script in the scripts folder<br>
```
./scripts/compile.sh [NAME_OF_EXECUTABLE]
```

Run executable <br>
```
./build/[NAME_OF_EXECUTABLE]
```
