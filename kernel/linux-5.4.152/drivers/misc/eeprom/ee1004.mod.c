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
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2da35042, "i2c_new_dummy_device" },
	{ 0xff85df97, "sysfs_create_bin_file" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x3d0a5ea8, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf18898ab, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ee1004");

MODULE_INFO(srcversion, "63E9EE52305B0272908D1CE");
