#include <linux/errno.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/cdev.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/ioport.h>
#include <linux/io.h>
#include <linux/device.h>
#include <linux/gpio.h>

int __init gec210_led_init(void)
{
	printk("hello gec210 led driver\n");
	gpio_direction_output(S5PV210_GPD0(0),0);
	return 0;
}

void __exit gec210_led_exit(void)
{
	printk("good bye gec210 led driver\n");
}


module_init(gec210_led_init);
module_exit(gec210_led_exit);

MODULE_AUTHOR("Stephen.Wen");
MODULE_DESCRIPTION("S5PV210 LED driver");
MODULE_LICENSE("GPL");
