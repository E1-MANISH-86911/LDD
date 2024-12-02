#include <linux/module.h>
#include <linux/kernel.h>
#include "export.h"

static int __init desd_init(void) {
    printk(KERN_INFO "%s: desd_init() called.\n", THIS_MODULE->name);
    printk(KERN_INFO "%s: exported_var=%d.\n", THIS_MODULE->name, exported_var);
    exported_fn();
    printk(KERN_INFO "%s: exported_var=%d.\n", THIS_MODULE->name, exported_var);
    return 0;
}

static void __exit desd_exit(void) {
    printk(KERN_INFO "%s: desd_exit() called.\n", THIS_MODULE->name);
}

module_init(desd_init);
module_exit(desd_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Kernel Module Importing Symbols");
MODULE_AUTHOR("Manish Zine <manishzine04@gmail.com>");
