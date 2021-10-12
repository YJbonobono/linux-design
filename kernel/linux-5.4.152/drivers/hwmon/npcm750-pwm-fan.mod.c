#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf10de535, "ioread8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc5850110, "printk" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x378694b5, "devm_hwmon_device_register_with_info" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x848d372e, "iowrite8" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnuvoton,npcm750-pwm-fan");
MODULE_ALIAS("of:N*T*Cnuvoton,npcm750-pwm-fanC*");

MODULE_INFO(srcversion, "89CD76C7EBB9CC6B9B98752");
