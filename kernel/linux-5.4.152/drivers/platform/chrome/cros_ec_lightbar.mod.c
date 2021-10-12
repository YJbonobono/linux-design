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
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6bcf731, "cros_ec_cmd_xfer" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6006847, "current_task" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "20E56D01174BEED9AECBC8C");
