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
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xfa8e5b1e, "intel_th_driver_unregister" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x61fe9a28, "intel_th_driver_register" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa8fc2ae7, "intel_th_output_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "intel_th");


MODULE_INFO(srcversion, "526A42ABDD8F82BD35AA96A");
