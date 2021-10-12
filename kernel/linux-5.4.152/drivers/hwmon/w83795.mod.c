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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x15e55894, "sysfs_chmod_file" },
	{ 0x5959909c, "hwmon_device_register" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:w83795g");
MODULE_ALIAS("i2c:w83795adg");

MODULE_INFO(srcversion, "2388E26FB2056254AD16263");
