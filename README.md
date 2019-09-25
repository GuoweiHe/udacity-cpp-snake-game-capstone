# CPPND: Capstone Snake Game Example

## Dependencies for Running Locally

- cmake >= 3.7
  - All OSes: [click here for installation instructions](https://cmake.org/install/)
- make >= 4.1 (Linux, Mac), 3.81 (Windows)
  - Linux: make is installed by default on most Linux distros
  - Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  - Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
- SDL2 >= 2.0
  - All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  - Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
- gcc/g++ >= 5.4
  - Linux: gcc / g++ is installed by default on most Linux distros
  - Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  - Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./snakeGame`.

The README describes the project you have built. aka an overview of your code structure

The README indicates which rubric points are addressed. The README also indicates where in the code (i.e. files and line numbers) that the rubric points are addressed.
an explanation of how your submission satisfies the necessary rubric

---

The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
All class data members are explicitly specified as public, protected, or private.
All class members that are set to argument values are initialized through member initialization lists.
All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.

- Create a new class called MetaGame which will be used to get/set and store information about the game. Like platform detection

The project uses multithreading.

- Main can start a task that is responsible for outputting interesting cout stuff

The project accepts input from a user as part of the necessary operation of the program.

- App can ask for difficulty setting before beginning game.
- App can ask user if they want to see the platform detected.

The project reads data from an external file or writes data to a file as part of the necessary operation of the program.

- App can save the results of a game to a file.
- App can save each step of the game in order to replay or relive a previous game.

# Rubric Items Matched

### 1

```
The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
```

To meet this requirement, a `MetaGame` class was created (inside `metagame.h`) to hold information about the system platform. The class uses the member functions `getPlatform` and `printPlatform` to fetch and printout the user's detected system platform.

### 2

```
All class data members are explicitly specified as public, protected, or private.
```

Within `metagame.h`, the private variable `platformUsed` (line 19) is used to store the user's detected system. No other class can mutate this variable.

### 3

```
All class members that are set to argument values are initialized through member initialization lists.
```

Within `metagame.h` (line 11) the default argument for the private variable `platformUsed` is a null string which is set within the class's initiaziation list.

### 4

```
All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.
```

The [C++ Guide by Google](https://google.github.io/styleguide/cppguide.html#Function_Comments) was used to for any needed documentation. An example can be found within `metagame.h` (line 16) above the function declaration of `getPlatform` where a simple comment is used to describe what the function does.

### 5
