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
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x96848186, "scnprintf" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:blinkm");

MODULE_INFO(srcversion, "DF856334DF4A24A75EF6364");
