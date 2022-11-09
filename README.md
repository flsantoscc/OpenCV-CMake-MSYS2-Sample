# OpenCV-CMake-MSYS2-Sample

Dependencies Installation: ```pacman -S mingw-w64-x86_64-{gcc cmake make qt5-base gdb opencv}```

Build:

* MSYS2 Shell: 
```
g++ src/main.cc -o build/main `pkg-config --cflags --libs opencv4`
```

* Powershell: 
```
g++ src/main.cc -o build/main (-split (pkg-config --cflags --libs opencv4))
```

Run: ```cd build/``` then ```./main.exe```
