#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

extern int shared_data;

static int __init consumer_init(void) {
    printk(KERN_INFO "Consumer module loaded\n");
    printk(KERN_INFO "Consumed data: %d\n", shared_data);
    return 0;
}

static void __exit consumer_exit(void) {
    printk(KERN_INFO "Consumer module unloaded\n");
}

module_init(consumer_init);
module_exit(consumer_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Consumer Module");
MODULE_AUTHOR("Your Name");

