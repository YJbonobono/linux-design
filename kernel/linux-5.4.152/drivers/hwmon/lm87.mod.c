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
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x4a12be89, "regulator_get_voltage" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa916b694, "strnlen" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("of:N*T*Cti,lm87");
MODULE_ALIAS("of:N*T*Cti,lm87C*");
MODULE_ALIAS("of:N*T*Cadi,adm1024");
MODULE_ALIAS("of:N*T*Cadi,adm1024C*");
MODULE_ALIAS("i2c:lm87");
MODULE_ALIAS("i2c:adm1024");

MODULE_INFO(srcversion, "E0782348AF4D5E0ACBB0A7C");
