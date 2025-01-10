# Template C++ Raylib Project for VS Code

This template provides a starting point for C++ Raylib projects using VS Code. It includes the following features:

1.  **CMake Build System:** The project is configured using CMake.
2.  **VS Code Build Shortcuts:** Basic VS Code shortcuts are configured (using `Ctrl+Shift+B`) to:
    *   Create a build directory.
    *   Clean the build directory.
    *   Configure the project.
    *   Build the project.
    *   Run the project.
3.  **Prerequisites:** GCC and Raylib must be installed to use this template.
    This template is configured for Linux. You can verify the installation using the following terminal commands:

    ```bash
    $ dpkg -l | grep libraylib
    ii  libraylib5-dev                                5.5.0+noble-1                            amd64        A simple and easy-to-use library to enjoy video game programming
    ```

    ```bash
    $ gcc --version
    gcc (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0
    ```

    To install the necessary packages, use the following commands:
    ```bash
    sudo add-apt-repository ppa:texus/raylib
    sudo apt install libraylib5-dev
    ```
    ```bash
    sudo apt install gcc
    ```
