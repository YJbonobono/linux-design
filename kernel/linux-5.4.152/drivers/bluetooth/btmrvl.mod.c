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
	{ 0x77733870, "skb_queue_head" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x924d91a2, "debugfs_create_u8" },
	{ 0x399818dd, "__hci_cmd_sync" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x9364b8, "debugfs_create_x16" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0x581cf443, "skb_push" },
	{ 0xb4facf8b, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "26430B0CBEB3559E1E3F861");
