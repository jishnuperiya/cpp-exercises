source: youtube: Previously Recorded: Getting started with C++ in VS Code
https://www.youtube.com/watch?v=Hxg_OuKuVFg

Watch later:
https://www.youtube.com/watch?v=ju0Y85cKH0U&list=PLHTh1InhhwT6vjwMy3RG5Tnahw0G9qIx6



c++ compilers:

### most famous compilers:

for mac: clang
for linux : gcc
for windows: msvc

if you want to use gcc for windows, you can do either by:
1) wsl
2) mingw

wsl extension in vscode is good

best way to open vscode is go to the project folder and command window: type code .

first install the compiler.

then install the c++ extension from vscode

c++ extension in vscode uses intellisense. not intellicode
visual studio uses intellicode. it is ai based. but  intellisense only gives autocomplete.

c++ extension may switch into intellicode in future


Intellisense will work out of the box. Intellisense will create a default c++ configuration based on what it is detected in your system but lot of c++ developer targets different platforms. so developer can change the configurtaions to be the platform that they need. or you can have one configuration that uses clang and one that uses gcc.



task.json - how you build the program
launch.json - how you debug the program
