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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xb07eb8b6, "atm_alloc_charge" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x77733870, "skb_queue_head" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfdb3a88, "atm_dev_deregister" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x9a74bbc8, "atm_dev_register" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x999e8297, "vfree" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v0000111Ad00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000111Ad00000005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1988DF026F489DB6FBEA4A7");
