# OpenCV-CMake-MSYS2-Sample

Dependencies Installation: ```pacman -S mingw-w64-x86_64-{gcc cmake make qt5-base gdb opencv}```

Build:

  * MSYS2 Shell: 
  ```
  g++ main.cc -o build/main `pkg-config --cflags --libs opencv4`
  ```

  * Powershell: 
  ```
  g++ main.cc -o main (-split (pkg-config --cflags --libs opencv4))
  ```

Run: ```build/main.exe``
