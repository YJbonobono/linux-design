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
	{ 0x138133c8, "param_ops_charp" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x581cf443, "skb_push" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x627cee2c, "atm_charge" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x652032cb, "mac_pton" },
	{ 0x9a74bbc8, "atm_dev_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x1000e51, "schedule" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xfdb3a88, "atm_dev_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v0000111Dd00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CDEC4E21D84CA9A6654358D");
