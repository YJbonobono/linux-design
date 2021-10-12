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
	{ 0xd6b0a642, "st_lsm6dsx_pm_ops" },
	{ 0xb424b398, "i3c_driver_unregister" },
	{ 0x66e59966, "i3c_driver_register_with_owner" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bc482b4, "st_lsm6dsx_probe" },
	{ 0x7fe99c13, "__devm_regmap_init_i3c" },
	{ 0xb216457b, "i3c_device_match_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_lsm6dsx,i3c,regmap-i3c");


MODULE_INFO(srcversion, "7FF00C302290D133BC0C377");
