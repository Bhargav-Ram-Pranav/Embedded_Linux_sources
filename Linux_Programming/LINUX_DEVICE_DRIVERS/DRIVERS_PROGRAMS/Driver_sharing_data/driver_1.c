#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

// Data to be shared
int shared_data = 42;

EXPORT_SYMBOL(shared_data);

static int __init producer_init(void) {
    printk(KERN_INFO "Producer module loaded\n");
    return 0;
}

static void __exit producer_exit(void) {
    printk(KERN_INFO "Producer module unloaded\n");
}

module_init(producer_init);
module_exit(producer_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Producer Module");
MODULE_AUTHOR("Your Name");

