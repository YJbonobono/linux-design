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
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:apds9802als");

MODULE_INFO(srcversion, "A628813304DA2D782681599");
