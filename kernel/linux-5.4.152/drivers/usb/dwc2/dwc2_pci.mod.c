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
	{ 0x441518ac, "platform_device_add_properties" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xb4f41d9d, "usb_phy_generic_register" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0xf1fafafe, "usb_phy_generic_unregister" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "phy-generic");

MODULE_ALIAS("pci:v000016C3d0000ABC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad0000CC02sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "71F4CB0FD585EEB306D139E");
