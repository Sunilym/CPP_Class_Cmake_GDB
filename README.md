**cmake ..**

Runs the CMake configuration step. .. means "look in the parent directory" for CMakeLists.txt.
CMake reads your CMakeLists.txt, detects your compiler (MSVC in your case), and generates the build system files (the .vcxproj, .sln files, etc.).
This is the "planning" phase — nothing gets compiled yet.

**cmake --build .**

Runs the actual compilation and linking. . means "use the build files in the current directory."
Under the hood, this calls the native build tool (MSBuild for MSVC) to compile your .cpp files into .obj files and link them into main.exe.
This is the "building" phase — your code actually gets compiled.
