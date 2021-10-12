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
	{ 0x7e0e09dd, "transport_class_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x49a9e1e0, "scsi_remove_target" },
	{ 0x754d539c, "strlen" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x28c8899d, "transport_destroy_device" },
	{ 0x481a80a5, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77df663a, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xea58b78a, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2ec4e91e, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x856b5228, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x335e4ce6, "device_add" },
	{ 0x5d28af9b, "transport_class_unregister" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebeb1328, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3750a460, "get_device" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x8a75cfe, "scsi_get_vpd_page" },
	{ 0x84ed005, "transport_remove_device" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37c7ad2e, "bsg_job_done" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xc66a63ca, "bsg_remove_queue" },
	{ 0xaec0f069, "bsg_setup_queue" },
	{ 0x35220e33, "scsi_mode_sense" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "872DD426AECA3C2AE7589E4");
