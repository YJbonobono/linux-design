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
	{ 0x6e724099, "param_array_ops" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x26236de8, "mISDN_clock_update" },
	{ 0x232bc380, "recv_Bchannel_skb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x12ef153d, "create_l1" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6006847, "current_task" },
	{ 0xa404fad3, "mISDN_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe64b92b6, "mISDN_initbchannel" },
	{ 0xc2613dab, "mISDN_initdchannel" },
	{ 0x85bd1608, "__request_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc3401729, "mISDN_register_clock" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe8f617eb, "mISDN_unregister_clock" },
	{ 0xeebd20ca, "mISDN_unregister_device" },
	{ 0xac554140, "mISDN_freedchannel" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c2839db, "mISDN_freebchannel" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc6ba1c5f, "queue_ch_frame" },
	{ 0xb2f5caad, "dchannel_senddata" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x588886a6, "l1_event" },
	{ 0xc3b456ac, "bchannel_senddata" },
	{ 0x7e6a3684, "mISDN_ctrl_bchannel" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x9cc93f3a, "mISDN_clear_bchannel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x78f098d5, "recv_Dchannel" },
	{ 0x416d8e47, "recv_Bchannel" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xfc396865, "bchannel_get_rxbuf" },
	{ 0x58e26693, "recv_Dchannel_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x7e728570, "get_next_dframe" },
	{ 0x31a4dee5, "get_next_bframe" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDN_core");

MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B567bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B566bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B569bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B560bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B568bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd000008B4bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B520bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B620bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d0000B410sv0000D161sd0000B410bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B540bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B550bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd00001234bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E888bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E884bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B761bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B762bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B562bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B56Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd000016B8bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B522bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B552bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B622bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000E998bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B55Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B563bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B56Abc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B565bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B564bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd000030B1bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B523bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000C523bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003136bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003137bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B553bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BD03E8F03E200586FFDE03C");
