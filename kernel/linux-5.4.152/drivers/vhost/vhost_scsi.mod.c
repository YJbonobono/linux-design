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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xce7e46e, "target_submit_cmd_map_sgls" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x80d98361, "iov_iter_npages" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xa1fc2508, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0xc2258b94, "core_tpg_register" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0xcf56df01, "target_register_template" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x5b93520e, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5da63c61, "vhost_dev_cleanup" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc28bafa5, "vhost_log_access_ok" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xcca42041, "vhost_enable_notify" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfb68b04, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xb7db7b7d, "vhost_disable_notify" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x7849b3be, "vhost_signal" },
	{ 0x6bcedaa8, "vhost_dev_ioctl" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xea916907, "iov_iter_get_pages" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48817f5, "vhost_get_vq_desc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x11a6c0c9, "target_remove_session" },
	{ 0xf02dc0eb, "vhost_work_queue" },
	{ 0x7fd79fff, "target_undepend_item" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x37e95f64, "vhost_add_used_and_signal" },
	{ 0x96a20d74, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0xef1135da, "transport_send_check_condition_and_sense" },
	{ 0xf801e691, "target_unregister_template" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2404e57f, "vhost_exceeds_weight" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x4d2b9164, "vhost_vq_init_access" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x39c448cd, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6fa446, "vhost_dev_init" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0x91ba5c52, "vhost_dev_stop" },
	{ 0xf37e1fef, "vhost_vq_access_ok" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2bbdd369, "vhost_vring_ioctl" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x96365ef0, "target_depend_item" },
	{ 0x93082893, "misc_deregister" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0x73a1f550, "vhost_add_used" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "target_core_mod,vhost");


MODULE_INFO(srcversion, "BE1CBF5E8210FF5F0232711");
