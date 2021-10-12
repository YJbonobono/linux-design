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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc6ba1c5f, "queue_ch_frame" },
	{ 0xb2f5caad, "dchannel_senddata" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xc3b456ac, "bchannel_senddata" },
	{ 0x78f098d5, "recv_Dchannel" },
	{ 0x7e728570, "get_next_dframe" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfc396865, "bchannel_get_rxbuf" },
	{ 0x416d8e47, "recv_Bchannel" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x12ef153d, "create_l1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xa404fad3, "mISDN_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe64b92b6, "mISDN_initbchannel" },
	{ 0xc2613dab, "mISDN_initdchannel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x588886a6, "l1_event" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xac554140, "mISDN_freedchannel" },
	{ 0x4c2839db, "mISDN_freebchannel" },
	{ 0xeebd20ca, "mISDN_unregister_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0x6006847, "current_task" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x31a4dee5, "get_next_bframe" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7e6a3684, "mISDN_ctrl_bchannel" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9cc93f3a, "mISDN_clear_bchannel" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDN_core");

MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000182Dd00003069sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A03CA639E9B726C79E48CD0");
