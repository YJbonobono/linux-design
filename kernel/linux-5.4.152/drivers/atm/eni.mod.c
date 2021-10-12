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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x77733870, "skb_queue_head" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb832485a, "consume_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xb07eb8b6, "atm_alloc_charge" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8d1a4c69, "suni_init" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x9a74bbc8, "atm_dev_register" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xc5850110, "printk" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xfdb3a88, "atm_dev_deregister" },
	{ 0xedc03953, "iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,suni");

MODULE_ALIAS("pci:v0000111Ad00000000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FC25D1593DE36B1B25C5396");
