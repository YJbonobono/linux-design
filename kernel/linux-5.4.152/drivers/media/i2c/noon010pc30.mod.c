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
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7cfdb8a, "gpiod_export" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xd0c189ae, "v4l2_ctrl_handler_log_status" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:NOON010PC30");

MODULE_INFO(srcversion, "5B6D6FA7FC289422423D16A");
