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
	{ 0xc5850110, "printk" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x2cdb3bda, "w1_add_master_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5534d64, "ioread16" },
	{ 0xf065f629, "ioread16be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0xcbb347e9, "w1_remove_master_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x848d372e, "iowrite8" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "DE9D860A7F2FC5EE87D5B60");
