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
	{ 0x2b3da341, "tpm_pm_resume" },
	{ 0x7c53209d, "tpm_pm_suspend" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x146b7fc7, "tpm_chip_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe40d3439, "tpmm_chip_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xaa37bd45, "tpm_chip_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tpm_i2c_atmel");

MODULE_INFO(srcversion, "D10727FBF7E04B1CA105B9E");
