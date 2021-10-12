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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x84529583, "blk_queue_segment_boundary" },
	{ 0xc2312e2, "blk_queue_max_segments" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5108542d, "blk_mq_init_queue" },
	{ 0xef247d9d, "blk_mq_alloc_tag_set" },
	{ 0xfb578fc5, "memset" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x29361773, "complete" },
	{ 0x153696b9, "blk_mq_stop_hw_queues" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x58027eea, "blk_rq_map_sg" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x754d539c, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x986bc26c, "blk_mq_start_hw_queues" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x23045299, "blk_mq_end_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x83e3f2e3, "blk_mq_tag_to_rq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x103eea0, "blk_execute_rq_nowait" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x526dc16f, "blk_mq_alloc_request" },
	{ 0xc5850110, "printk" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x861cd726, "put_disk" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "366D86C744E5B7C86A9FA24");
