#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_world(void)
{
	pr_debug("Hello world!\n");
	return 0;
}

static void __exit goodbye_world(void)
{
	pr_debug("Goodbye!\n");
}

module_init(hello_world);
module_exit(goodbye_world);
