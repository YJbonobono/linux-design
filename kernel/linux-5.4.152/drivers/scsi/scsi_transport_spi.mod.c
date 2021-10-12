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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x7e0e09dd, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xf683007f, "scsi_get_device_flags_keyed" },
	{ 0x24757444, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1818f30d, "anon_transport_class_register" },
	{ 0x481a80a5, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xed71a6c, "scsi_autopm_get_device" },
	{ 0xe1586c7a, "scsi_device_quiesce" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x15e55894, "sysfs_chmod_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xaa1ff60, "__scsi_execute" },
	{ 0x5a921311, "strncmp" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0x856b5228, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5d28af9b, "transport_class_unregister" },
	{ 0x2d721cca, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc94ac6ca, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x18c448a4, "scsi_target_quiesce" },
	{ 0x39917476, "scsi_is_target_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1cbc34b6, "scsi_device_get" },
	{ 0xbb9a4483, "scsi_autopm_put_device" },
	{ 0x412f3c25, "anon_transport_class_unregister" },
	{ 0xd9059eac, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DF85DE377092F32A8FF325C");
