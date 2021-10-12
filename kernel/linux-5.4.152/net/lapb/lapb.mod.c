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
	{ 0x77733870, "skb_queue_head" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9099b9f0, "skb_append" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x581cf443, "skb_push" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AEC94F5B375B368B80A7482");
