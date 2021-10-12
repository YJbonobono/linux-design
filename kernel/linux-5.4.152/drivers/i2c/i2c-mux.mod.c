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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbb94b060, "rt_mutex_lock" },
	{ 0xabe384a1, "set_primary_fwnode" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x9ca38da1, "__i2c_smbus_xfer" },
	{ 0xb9394b78, "rt_mutex_trylock" },
	{ 0xf7837028, "rt_mutex_unlock" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x736825ad, "i2c_adapter_type" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4f44fe30, "i2c_smbus_xfer" },
	{ 0xb6090661, "i2c_add_numbered_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e1dbb8b, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc09f2a0, "__i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");
