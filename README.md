## TetraOS Compositor

[![Build Status](https://travis-ci.org/TetraOS/Compositor.svg?branch=master)](https://travis-ci.org/TetraOS/Compositor)
[![License: GPL v3](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)



TetraOS Compositor is a lightweight and customizable compositing window manager built using the QtWayland library. This project is designed to be modular, extensible, and efficient, capable of handling multiple windows and complex graphical effects.

## Features 🚀

* Lightweight and efficient compositing window manager
* Modular and extensible architecture
* Customizable user interface
* Handles multiple windows and complex graphical effects
* Built using the QtWayland library

## Requirements 📋

To build and run TetraOS Compositor, make sure you have the following prerequisites installed:

* Operating System: Any modern Linux distribution
* Compiler: C++17 or higher
* Qt: Qt 5.15 or higher
* QtWayland

## Building 👷

1. Clone the repository:

     ```
      git clone https://github.com/TetraOS/Compositor.git
     ```

2. Navigate to the project directory:

    ``` 
    cd Compositor
    ```

3. Create a build directory and navigate to it:

    ```
    mkdir build && cd build
    ```


4. Run CMake to generate the build system:

   ```
   cmake
   ```

5. Build the project:

   ```
   make
   ```

6. Run Compositor:

   ```
   ./Compositor
   ```

## To-do List ✅📋

***None of the to-do list content is finished due to the early stage development of this project***

- [ ] Implement window management, input handling, and graphical effects
- [ ] Implement support for additional Wayland protocols and multiple displays
- [ ] Implement support for window focus, stacking, hints, and properties
- [ ] Implement support for interfacing with other window managers and compositors
- [ ] Implement support for window transitions, hotkeys, gestures, and sessions
- [ ] Implement support for accessibility, notifications, security, and themes
- [ ] Implement support for window toolkits and extensions

## Configuration ⚙️

You can configure the behaviour of the compositor by modifying the `config.h` file.

## Customization 🎨

The `main.qml` file located in the `/qml` directory contains the code for the user interface. You can customize the appearance and behaviour of the user interface by modifying this file.

## License 📝

TetraOS Compositor is released under the GNU GPL v3.0. For more information, see the `LICENSE` file in the repository.

## Contributing 🤝

We welcome contributions to the TetraOS Compositor project. To contribute, please fork the repository and submit a pull request with your proposed changes. Some ideas for contributions include:

- Add support for more window managers or compositors
- Improve the performance and efficiency of the compositor
- Add more advanced visual effects, such as scaling
- Implement support for additional Wayland protocols
- Create new utilities for working with Wayland surfaces and X11 windows

Please refer to the [contributing guidelines](CONTRIBUTING.md) for more information.

## Questions ❓

If you have any questions or need help with TetraOS Compositor, please don't hesitate to start a discussion or an issue request with your question(s)
