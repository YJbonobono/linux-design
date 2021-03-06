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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf50cef70, "_copy_from_iter" },
	{ 0x6618707, "set_page_dirty_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xec1964e8, "mmput" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0xe03d4223, "get_task_mm" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfef28022, "use_mm" },
	{ 0xa164179, "fput" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x39c448cd, "iov_iter_init" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x2a0cfd66, "eventfd_fget" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0x55e7fd2e, "cgroup_attach_task_all" },
	{ 0x29361773, "complete" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x15f4a35b, "unuse_mm" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3DEBA80386ACCFF9CC6BE0B");
