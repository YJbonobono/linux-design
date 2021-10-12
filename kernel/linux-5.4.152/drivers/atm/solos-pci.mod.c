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
	{ 0x656e4a6e, "snprintf" },
	{ 0x6006847, "current_task" },
	{ 0x754d539c, "strlen" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x627cee2c, "atm_charge" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x581cf443, "skb_push" },
	{ 0x8675eae7, "atm_dev_signal_change" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a74bbc8, "atm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfdb3a88, "atm_dev_deregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc5850110, "printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9601035f, "request_firmware" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9b553753, "skb_pull" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v000010EEd00000300sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9E1B5A29D38669973761FF1");
