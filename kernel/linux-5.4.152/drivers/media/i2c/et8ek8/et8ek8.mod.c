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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Ctoshiba,et8ek8");
MODULE_ALIAS("of:N*T*Ctoshiba,et8ek8C*");
MODULE_ALIAS("i2c:et8ek8");

MODULE_INFO(srcversion, "7B0DEBE2F1B0D85F5E8ADEA");
