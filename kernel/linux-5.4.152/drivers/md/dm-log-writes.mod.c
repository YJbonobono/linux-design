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
	{ 0x845aa525, "dm_unregister_target" },
	{ 0xa8db51d6, "dm_register_target" },
	{ 0x56470118, "__warn_printk" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x320fbc9a, "iov_iter_revert" },
	{ 0xf50cef70, "_copy_from_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x549f4073, "dax_copy_from_iter" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x754d539c, "strlen" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x994dbb68, "submit_bio" },
	{ 0xd45edd46, "bio_add_page" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6006847, "current_task" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xd0832e10, "bio_associate_blkg" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0x968a4ef3, "fs_bio_set" },
	{ 0x29361773, "complete" },
	{ 0xc5850110, "printk" },
	{ 0x4122186, "bio_put" },
	{ 0x55aea56, "bio_free_pages" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaa4b4d90, "dm_put_device" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x37a0cba, "kfree" },
	{ 0xeddddc33, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x130b568, "wake_up_process" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x126a75a3, "dm_per_bio_data" },
	{ 0x96848186, "scnprintf" },
	{ 0x3efd1889, "dax_direct_access" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaa3e4b80, "dax_copy_to_iter" },
	{ 0xa3a8d76d, "bdev_dax_pgoff" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EF3676FA3A5A2DDC0EEAB76");
