# Architecture

The compositor is structured into several components:

- **Main**: The main entry point of the compositor, located in the `main.cpp` file.
- **Core**: This module contains the core functionality of the compositor, such as configuring, displaying, and composing windows.
- **Libraries**: This module contains third-party libraries, such as QtWayland.
- **QML**: This module contains the QML files for the user interface.
- **Resources**: This module contains the necessary resources for the compositor, such as icons or images.
- **Documentation**: This module contains the documentation for the compositor, including usage instructions and architecture details.

These components are organized into separate folders for better modularity and maintainability.

The `CMakeLists.txt` file is used to generate the build system. It includes the necessary libraries and dependencies, such as Qt and Wayland, and so on.

The compositor is designed to be modular and extensible. This allows for the easy addition of new features or the integration of third-party libraries.

The architecture is designed to be scalable and efficient, capable of handling multiple windows and complex graphical effects.
