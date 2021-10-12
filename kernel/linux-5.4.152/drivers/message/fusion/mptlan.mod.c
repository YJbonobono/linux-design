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
	{ 0x981efe92, "mpt_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x4cd3f3b8, "mpt_device_driver_register" },
	{ 0x16981a49, "mpt_reset_register" },
	{ 0xde456b20, "mpt_register" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0xd6744089, "mpt_event_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d3ff91, "mpt_free_msg_frame" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe296672d, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x434a61c7, "alloc_fcdev" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88a32e80, "mpt_put_msg_frame" },
	{ 0x574259aa, "mpt_get_msg_frame" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "48A454EAB80C0F2D811C2DA");
