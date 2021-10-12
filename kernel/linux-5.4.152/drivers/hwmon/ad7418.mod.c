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
	{ 0x37b0886c, "devm_hwmon_device_register_with_groups" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,ad7416");
MODULE_ALIAS("of:N*T*Cadi,ad7416C*");
MODULE_ALIAS("of:N*T*Cadi,ad7417");
MODULE_ALIAS("of:N*T*Cadi,ad7417C*");
MODULE_ALIAS("of:N*T*Cadi,ad7418");
MODULE_ALIAS("of:N*T*Cadi,ad7418C*");
MODULE_ALIAS("i2c:ad7416");
MODULE_ALIAS("i2c:ad7417");
MODULE_ALIAS("i2c:ad7418");

MODULE_INFO(srcversion, "B9B77CEF154BA4825525DD3");
