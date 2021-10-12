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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:mt9t112");

MODULE_INFO(srcversion, "E2CD0B75B2A4164879180C2");
