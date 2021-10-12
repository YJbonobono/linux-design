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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xafb91de, "init_atmel_card" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xd22cfae8, "stop_atmel_card" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atmel");

MODULE_ALIAS("pci:v00001114d00000506sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B0D2CBDD7A7EC5898FB1150");
