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
	{ 0xb4facf8b, "simple_open" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x95178ca5, "pmbus_do_remove" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xa5f03404, "pmbus_get_debugfs_dir" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x36024a74, "pmbus_do_probe" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xd0d6b5aa, "pmbus_read_byte_data" },
	{ 0xf1b1555c, "pmbus_read_word_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x702c769b, "i2c_smbus_read_block_data" },
	{ 0x458d4be7, "pmbus_set_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cibm,cffps1");
MODULE_ALIAS("of:N*T*Cibm,cffps1C*");
MODULE_ALIAS("of:N*T*Cibm,cffps2");
MODULE_ALIAS("of:N*T*Cibm,cffps2C*");
MODULE_ALIAS("i2c:ibm_cffps1");
MODULE_ALIAS("i2c:ibm_cffps2");

MODULE_INFO(srcversion, "A6FB8DFDBDCA2A30E8B0575");
