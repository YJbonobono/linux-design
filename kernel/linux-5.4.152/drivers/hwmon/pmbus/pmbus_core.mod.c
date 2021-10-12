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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xfd205417, "no_llseek" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b9c0cfa, "rdev_get_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0x541745d, "simple_attr_open" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C8652434F38E457D59D35B7");
