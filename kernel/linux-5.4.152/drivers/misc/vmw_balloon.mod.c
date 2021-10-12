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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x919d12af, "kill_anon_super" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdc3bb303, "unregister_shrinker" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xf3eb0445, "balloon_aops" },
	{ 0x6cab4652, "alloc_anon_inode" },
	{ 0xa32a6811, "kern_mount" },
	{ 0x981ffc7c, "register_shrinker" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x51c905dc, "balloon_page_alloc" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xc5850110, "printk" },
	{ 0xb572e830, "vmci_doorbell_create" },
	{ 0xa5ba9f14, "split_page" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x668b19a1, "down_read" },
	{ 0x71dc307b, "__put_page" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x63b4b552, "__SetPageMovable" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x465e516c, "__ClearPageMovable" },
	{ 0x53b954a2, "up_read" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x81cb3f6c, "balloon_page_list_dequeue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e949e0a, "vmci_doorbell_destroy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xb177d101, "seq_printf" },
	{ 0x3d557440, "kern_unmount" },
	{ 0x23e606a9, "iput" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x87a67f49, "single_open" },
	{ 0xd656bb94, "init_pseudo" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x26d24cb8, "vm_event_states" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc3a8ee85, "balloon_page_list_enqueue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vmw_vmci");


MODULE_INFO(srcversion, "C8CB7CDF5877C9D3BB2B26B");
