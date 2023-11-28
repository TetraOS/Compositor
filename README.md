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

## CAUTION:

Please note that the specific implementation details may vary depending on the code within the repository. Always refer to the actual README.md file and code within the repository for accurate and up-to-date information.




   
     
