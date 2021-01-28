#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
char* name = NULL;
int   age = 0;

module_param(name, charp, 0);
module_param(age, int, S_IRUGO);
static void say_hello(void)
{
    pr_info("name = %s age = %d", name, age);
}
static int test_hello_init(void)
{
    printk(KERN_INFO "Hello cruel world\n");
    say_hello();
    return 0;
}

static void test_hello_exit(void)
{
    printk(KERN_INFO "Goodbye cruel world\n");
}

module_init(test_hello_init);
module_exit(test_hello_exit);