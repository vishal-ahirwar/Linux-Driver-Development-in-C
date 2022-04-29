# Linux Driver Development in c
## 1.1 Check hello_world
compile the code using ..
```
cd hello_world
gcc -c ./src/hello_world.c -o ./build/hello.o
```
### to install or load the module
#### Make Sure you have permission to load modules into kernal(you must be root/super user)

```
insmod ./build/hello.o

```
### to uninstall or unload the module
```
rmmod hello

```
