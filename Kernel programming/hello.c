#include <linux/module.h> 
#include <linux/kernel.h>  
#include <linux/init.h> 

MODULE_LICENSE("GPL/GNU");
MODULE_AUTHOR("Amrit Chhetri, Security Rsearcher");
MODULE_DESCRIPTION("Kernel Testing Sample ");

MODULE_VERSION("1.01");
static int __init hello_start(void)
	{
	    printk(KERN_INFO "Loading X module...\n");
	    printk(KERN_INFO "Hello world\n");
	    return 0;
	}
	  
static void __exit hello_end(void)
	{
	    printk(KERN_INFO "Welcome.... Mr.\n");
	}
