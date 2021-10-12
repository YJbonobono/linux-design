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
	{ 0xb7964a42, "scsi_change_queue_depth" },
	{ 0xf801e691, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xcf56df01, "target_register_template" },
	{ 0x34e0549f, "driver_register" },
	{ 0x55353855, "bus_register" },
	{ 0x18dc505e, "__root_device_register" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe5a01321, "device_register" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe894b08b, "root_device_unregister" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x34a33d56, "target_submit_tmr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3568c378, "scsi_add_device" },
	{ 0x5b93520e, "core_tpg_deregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x96a20d74, "target_setup_session" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x754d539c, "strlen" },
	{ 0x11a6c0c9, "target_remove_session" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0x29361773, "complete" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xff414f9b, "scmd_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xce7e46e, "target_submit_cmd_map_sgls" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x51ce92, "device_unregister" },
	{ 0xc2258b94, "core_tpg_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0xd32f90d1, "scsi_remove_device" },
	{ 0x83bb5552, "scsi_device_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa0e71bf, "core_allocate_nexus_loss_ua" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "D46B5163B23E91745F8E9FD");
