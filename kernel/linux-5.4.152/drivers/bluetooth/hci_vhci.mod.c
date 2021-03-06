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
	{ 0xfd205417, "no_llseek" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x93082893, "misc_deregister" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0x9b553753, "skb_pull" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x77733870, "skb_queue_head" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6ee078b2, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x581cf443, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "190B54CC3BC7791EF1FEA69");
