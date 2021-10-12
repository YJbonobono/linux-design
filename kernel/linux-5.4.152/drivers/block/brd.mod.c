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
	{ 0xc3eedd3f, "param_ops_ulong" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x514a3117, "blk_register_region" },
	{ 0xc5850110, "printk" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x56470118, "__warn_printk" },
	{ 0x284e5c6, "bio_endio" },
	{ 0x3aaba8b, "page_endio" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6006847, "current_task" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x861cd726, "put_disk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe84ec9c3, "get_disk_and_module" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x96333815, "blk_queue_physical_block_size" },
	{ 0x903cda76, "blk_queue_max_hw_sectors" },
	{ 0xacf0053e, "blk_queue_make_request" },
	{ 0xcce31aa4, "blk_alloc_queue" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C62A31351CEC557C8F228C");
