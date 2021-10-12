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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8d1a4c69, "suni_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x9a74bbc8, "atm_dev_register" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xb07eb8b6, "atm_alloc_charge" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xfdb3a88, "atm_dev_deregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x77733870, "skb_queue_head" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "suni,atm");

MODULE_ALIAS("pci:v0000107Ed00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000107Ed00000009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F2A57D7D2432974C85E9245");
