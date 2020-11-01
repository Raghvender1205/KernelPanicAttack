## Kernel Panic Attack

### Prerequisits
1. gcc
2. make

### Create the File
Create a kernel panic C source code file in /tmp dir 
with the code
```
#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int8_t* message = "buffer overrun at 0x4b4ac5c0x5vbgce4";

int init_module(void){
        panic(message);
        return 0;
}

```
## Create the Makefile
Create the file either on Terminal by writing the code under 
```
prinf '<code>' > Makefile
```
The Code:-

```
obj-m += kpanic.o
all:
        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
```
Now Execute the command to make the makefile
```
make
```

#Last command
This commands execute the Kernel Panic
```
insmod kpanic.ko
```
