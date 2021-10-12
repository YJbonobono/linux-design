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
	{ 0x138133c8, "param_ops_charp" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf10de535, "ioread8" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000100bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000202bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000202bc*sc*i*");

MODULE_INFO(srcversion, "B7DA180C0ABF83DC2E619FE");
