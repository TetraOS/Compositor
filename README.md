# TetraOS Compositor


1. **Overview:** This C++ repository demonstrates the creation of a compositor using the QtWayland library.


2. **Dependencies:** Ensure you have the following installed:

     - Qt 5.x or higher
     - Wayland server
     - Xorg X server (optional, for running on X11)
  

3. **Setup:** To compile the compositor, open a terminal in the root directory of the repository and run the following command:

      `qmake && make`


4. **Running the Compositor:** After successful compilation, you can run the compositor by executing the following command:

      `./compositor`

   By default, the compositor will run on Wayland. To run it on X11, use the following command:

     `./compositor --platform x11`

5. **Contributing:** To contribute to this project, feel free to fork the repository and submit a pull request with your proposed changes. Here are some specific ideas for contributions:

      - Add support for more window managers or compositors
      - Improve the performance and efficiency of the compositor
      - Add more advanced visual effects, such as scaling
      - Implement support for additional Wayland protocols
      - Create new utilities for working with Wayland surfaces and X11 windows
  
6. **License:** This project is licensed under the MIT License. For more information, please refer to the LICENSE file included in the repository.

## File Tree Structure

The following content below is the file structure of this repository in the format as a file tree.

     `
          /my_compositor
      /build
         CMakeLists.txt
      /src
         /main
           main.cpp
         /core
           /config
             config.h
           /display
             display.h
             display.cpp
           /compositor
             compositor.h
             compositor.cpp
           /event_handler
             event_handler.h
             event_handler.cpp
           /window_manager
             window_manager.h
             window_manager.cpp
         /libs
           /QtWayland
             CMakeLists.txt
             qtwayland_client.cpp
             qtwayland_client.h
             qtwayland_server.cpp
             qtwayland_server.h
         /qml
           main.qml
      /resources
         compositor.png
      /docs
         /usage
           usage.md
         /architecture
           architecture.md
      .gitignore
      README.md
      COPYING
      LICENSE
     `

## ⚠️ CAUTION:

Please note that the specific implementation details may vary depending on the code within the repository. Always refer to the actual README.md file and code within the repository for accurate and up-to-date information.




   
     
