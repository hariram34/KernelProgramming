#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int test_hello_init(void)
{
    printk(KERN_INFO "Hello cruel world\n");
    return 0;
}

static void test_hello_exit(void)
{
    printk(KERN_INFO "Goodbye cruel world\n");
}

module_init(test_hello_init);
module_exit(test_hello_exit);