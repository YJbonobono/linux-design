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
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdd64e639, "strscpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Cmaxim,max2175");
MODULE_ALIAS("of:N*T*Cmaxim,max2175C*");
MODULE_ALIAS("i2c:max2175");

MODULE_INFO(srcversion, "0AB276601F256CC767B36FE");
