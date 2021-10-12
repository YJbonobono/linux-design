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
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0xc5850110, "printk" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x75d94971, "pci_match_id" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d0000746Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C16EC3F7B5F2BA3E75B8136");
