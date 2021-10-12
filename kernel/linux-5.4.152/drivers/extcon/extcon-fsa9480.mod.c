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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfcs,fsa9480");
MODULE_ALIAS("of:N*T*Cfcs,fsa9480C*");
MODULE_ALIAS("of:N*T*Cfcs,fsa880");
MODULE_ALIAS("of:N*T*Cfcs,fsa880C*");
MODULE_ALIAS("i2c:fsa9480");

MODULE_INFO(srcversion, "A2B49DB899DE498B4EE8904");
