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
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5959909c, "hwmon_device_register" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x848d372e, "iowrite8" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xf10de535, "ioread8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000025F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004030sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46ABFA17557A5158DAF72A7");
