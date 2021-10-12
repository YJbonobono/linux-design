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
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xebbb0817, "lis3lv02d_init_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xcdee9461, "regulator_bulk_get" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x5d3277e2, "regulator_bulk_free" },
	{ 0x87f94989, "lis3lv02d_remove_fs" },
	{ 0xa40b012a, "lis3_dev" },
	{ 0xbe30997b, "lis3lv02d_joystick_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf5b17bd3, "lis3lv02d_poweroff" },
	{ 0xdca2bca7, "lis3lv02d_poweron" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");

MODULE_INFO(srcversion, "454EE78B7117AD7C4931DC8");
