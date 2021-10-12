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
	{ 0x7195fca, "scsi_unregister_device_handler" },
	{ 0xc5850110, "printk" },
	{ 0x317f1cbe, "scsi_register_device_handler" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8a75cfe, "scsi_get_vpd_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xaa1ff60, "__scsi_execute" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FA0AAEA6D556DC1D890526E");
