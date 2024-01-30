gcc -c  *.c -fpic
gcc *.o -shared -o libdynamic.so
lld libdynamic.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
ldd len
