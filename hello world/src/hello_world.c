
#include<linux/module.h>
#include<linux/kernel.h>
// MODULE_LICENSE("Dual BSD/GPL");
static int hello_onInit()
{
    printk("<1>hello world init() ...");
    return 0;
};
static void hello_onExit()
{
    printk("<1>hello world exit() ...");
};
module_init(hello_onInit);
module_exit(hello_onExit);

