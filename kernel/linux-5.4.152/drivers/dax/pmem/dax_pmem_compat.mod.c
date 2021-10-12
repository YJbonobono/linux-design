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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbd0c8936, "devres_open_group" },
	{ 0x30b99988, "__nd_driver_register" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7e087b34, "__dax_pmem_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0xc6684653, "dev_dax_probe" },
	{ 0x26c000b, "devres_close_group" },
	{ 0x4b961816, "devres_release_group" },
};

MODULE_INFO(depends, "dax_pmem_core,device_dax");


MODULE_INFO(srcversion, "124D074B39DCB6C8358F475");
