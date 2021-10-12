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
	{ 0x94e48364, "param_ops_short" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb07eb8b6, "atm_alloc_charge" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x8d1a4c69, "suni_init" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9a74bbc8, "atm_dev_register" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xfdb3a88, "atm_dev_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,suni");

MODULE_ALIAS("pci:v00001127d00000400sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8321E550195469E8677733");
