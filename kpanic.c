#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int8_t* message = "buffer overrun at 0x4b4ac5c0x5vbgce4";

int init_module(void){
	panic(message);
	return 0;
}
