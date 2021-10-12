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
	{ 0x63effe55, "param_ops_ushort" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5959909c, "hwmon_device_register" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "72B57F526144C4C9D4EA53F");
