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
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0xfd205417, "no_llseek" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x95178ca5, "pmbus_do_remove" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x458d4be7, "pmbus_set_page" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x96848186, "scnprintf" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xda3ba270, "devm_gpiochip_add_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa5f03404, "pmbus_get_debugfs_dir" },
	{ 0x36024a74, "pmbus_do_probe" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x702c769b, "i2c_smbus_read_block_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x376a831a, "pmbus_get_driver_info" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x541745d, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pmbus_core");

MODULE_ALIAS("of:N*T*Cti,ucd9000");
MODULE_ALIAS("of:N*T*Cti,ucd9000C*");
MODULE_ALIAS("of:N*T*Cti,ucd90120");
MODULE_ALIAS("of:N*T*Cti,ucd90120C*");
MODULE_ALIAS("of:N*T*Cti,ucd90124");
MODULE_ALIAS("of:N*T*Cti,ucd90124C*");
MODULE_ALIAS("of:N*T*Cti,ucd90160");
MODULE_ALIAS("of:N*T*Cti,ucd90160C*");
MODULE_ALIAS("of:N*T*Cti,ucd9090");
MODULE_ALIAS("of:N*T*Cti,ucd9090C*");
MODULE_ALIAS("of:N*T*Cti,ucd90910");
MODULE_ALIAS("of:N*T*Cti,ucd90910C*");
MODULE_ALIAS("i2c:ucd9000");
MODULE_ALIAS("i2c:ucd90120");
MODULE_ALIAS("i2c:ucd90124");
MODULE_ALIAS("i2c:ucd90160");
MODULE_ALIAS("i2c:ucd9090");
MODULE_ALIAS("i2c:ucd90910");

MODULE_INFO(srcversion, "2E307F3E8E69E3ADF5C7F73");
