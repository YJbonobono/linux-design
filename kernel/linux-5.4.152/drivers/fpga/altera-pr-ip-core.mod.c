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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x45cf8d12, "devm_fpga_mgr_create" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf5db98f, "fpga_mgr_register" },
	{ 0x8ba76927, "fpga_mgr_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf9b525f7, "devm_kmalloc" },
};

MODULE_INFO(depends, "fpga-mgr");


MODULE_INFO(srcversion, "401A6DCDD3037A133E1CAC7");
