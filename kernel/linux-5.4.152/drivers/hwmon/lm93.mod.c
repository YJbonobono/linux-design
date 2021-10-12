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
	{ 0x6e724099, "param_array_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0xf9a482f9, "msleep" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x702c769b, "i2c_smbus_read_block_data" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("i2c:lm93");
MODULE_ALIAS("i2c:lm94");

MODULE_INFO(srcversion, "F560B6009CC9FD388DE953E");
