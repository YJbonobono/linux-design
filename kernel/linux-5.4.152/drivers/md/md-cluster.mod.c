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
	{ 0x15bafe29, "unregister_md_cluster_operations" },
	{ 0xd062490e, "register_md_cluster_operations" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcd224e1d, "dlm_new_lockspace" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb5126fb6, "md_check_recovery" },
	{ 0x5abd715f, "md_update_sb" },
	{ 0xa9109000, "md_bitmap_update_sb" },
	{ 0x7d470cff, "get_bitmap_from_slot" },
	{ 0x16757b3a, "md_bitmap_free" },
	{ 0x6006847, "current_task" },
	{ 0x72ec148d, "md_cluster_ops" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x774caa39, "md_bitmap_sync_with_cluster" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2b547850, "revalidate_disk" },
	{ 0x4f530362, "mddev_unlock" },
	{ 0x81903784, "md_reload_sb" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x5c32d7b5, "md_bitmap_resize" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedd86ae8, "md_find_rdev_nr_rcu" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x66cfd587, "kobject_uevent_env" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcf9f3328, "dlm_release_lockspace" },
	{ 0x99d797cf, "md_unregister_thread" },
	{ 0x393b6e1f, "md_bitmap_copy_from_slot" },
	{ 0x37a0cba, "kfree" },
	{ 0x91b42f02, "md_register_thread" },
	{ 0x4b62826c, "dlm_unlock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x29361773, "complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x647d6170, "dlm_lock" },
	{ 0x754d539c, "strlen" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3528552, "md_wakeup_thread" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dlm");


MODULE_INFO(srcversion, "CFBDCB381664792C2557EDB");
