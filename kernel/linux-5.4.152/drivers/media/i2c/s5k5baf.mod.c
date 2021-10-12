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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9601035f, "request_firmware" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x9326bd3d, "media_create_pad_link" },
	{ 0xabdf8cd1, "v4l2_device_register_subdev" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("of:N*T*Csamsung,s5k5baf");
MODULE_ALIAS("of:N*T*Csamsung,s5k5bafC*");
MODULE_ALIAS("i2c:s5k5baf");

MODULE_INFO(srcversion, "080252C337A77A3746F25BB");
