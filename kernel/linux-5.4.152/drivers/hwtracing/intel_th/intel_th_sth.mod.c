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
	{ 0xfa8e5b1e, "intel_th_driver_unregister" },
	{ 0x61fe9a28, "intel_th_driver_register" },
	{ 0x3509b34e, "stm_unregister_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xffefeb6f, "intel_th_set_output" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0x547bb29c, "stm_register_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "intel_th,stm_core");


MODULE_INFO(srcversion, "5E568602BBCEA43DACFD9B2");
