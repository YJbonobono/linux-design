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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdf4b9794, "fuse_free_conn" },
	{ 0xbb6d75bb, "fuse_fill_super_common" },
	{ 0xdbe01cbe, "fuse_request_end" },
	{ 0x42506dee, "fuse_get_unique" },
	{ 0x7092be58, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x734fb869, "fuse_conn_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd45006d1, "virtqueue_kick_prepare" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6385c736, "fuse_conn_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x84a24c74, "fuse_send_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x5493de45, "virtqueue_add_sgs" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd8029dd2, "virtqueue_disable_cb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa07a37f0, "memchr" },
	{ 0xa48f0e77, "fuse_dev_install" },
	{ 0x9c3a9047, "fuse_dev_free" },
	{ 0xdd86d79b, "fuse_dev_alloc" },
	{ 0x6ef9b38c, "virtqueue_notify" },
	{ 0x211ab109, "fuse_dequeue_forget" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9f38af74, "fuse_kill_sb_anon" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe4ba58b6, "fuse_conn_get" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf750809, "sget_fc" },
	{ 0xd07f543, "get_anon_bdev" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xef11476a, "virtqueue_is_broken" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8c94dae0, "virtqueue_enable_cb" },
	{ 0xdd626ee3, "fuse_len_args" },
	{ 0x3b78d396, "register_virtio_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d0000001Av*");

MODULE_INFO(srcversion, "5FC86AAB873EF6860188645");
