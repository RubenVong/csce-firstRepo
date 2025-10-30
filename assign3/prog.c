
/*int main(int argc, char *argv[]){
    MyStruct myData;
        initializeMyStruct(&myData, 1, "Example Struct", 10.5f);
        printMyStruct(&myData);
        return 0;

}*/

//build the shared/static library
//gcc -shared -fPIC -o libmy_library.so mylibrary1.c mylibrary2.c
//ar rcs libthislibrary.a mylibrary1.o mylibrary2.o

//intialized the files to .o files
//gcc -c mylibrary1.c -o mylibrary1.o

//compiling into c program
//gcc prog.c -L\static -lthislibrary -o app
//gcc prog.c -L/shared -lvector -o app -Wl,-rpath=/shared
//gcc prog.c -L. -lmylibrary -o myapp
//export LD_LIBRARY_PATH=/shared:$LD_LIBRARY_PATH

//shared library steps:
//        export LD_LIBRARY_PATH=/shared:$LD_LIBRARY_PATH
//        gcc prog.c -o app -L\shared -lvector -Wl,-rpath=\shared