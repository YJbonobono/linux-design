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
	{ 0x9c0a44f3, "__blk_mq_end_request" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xe62c1ea0, "mtd_table_mutex" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x13f3aab9, "blk_mq_unfreeze_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf3270a4e, "__put_mtd_device" },
	{ 0x6b1c0ae3, "blk_mq_freeze_queue" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9f17e68b, "__get_mtd_device" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe6a551a4, "blk_queue_max_discard_sectors" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0xa3b6e721, "register_mtd_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaea75fa6, "__mtd_next_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x7cac63d5, "unregister_mtd_user" },
	{ 0xe714e8a1, "blk_update_request" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x91c4878, "blk_queue_flag_clear" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x6e7100e5, "blk_mq_init_sq_queue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6d26156c, "blk_queue_flag_set" },
	{ 0x861cd726, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6b347276, "__module_get" },
	{ 0x146eb90a, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a4ae873, "blk_mq_quiesce_queue" },
	{ 0x18cbf39, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x9f4af172, "blk_queue_logical_block_size" },
	{ 0x19f1f7cc, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "3561D640AA8701323854A99");
