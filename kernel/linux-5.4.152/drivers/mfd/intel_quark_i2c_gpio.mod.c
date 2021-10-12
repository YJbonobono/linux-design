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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x3b47a4d, "clkdev_create" },
	{ 0xebdb1357, "clk_register_fixed_rate" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000934sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B5068A3E6FFB357E449A608");
