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
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc,videodev");

MODULE_ALIAS("i2c:mt9t001");

MODULE_INFO(srcversion, "BC6F1134996C66DBAA9E692");
