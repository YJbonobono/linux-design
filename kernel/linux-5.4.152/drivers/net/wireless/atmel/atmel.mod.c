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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb177d101, "seq_printf" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x30c76023, "free_netdev" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0x5792f848, "strlcpy" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6cbbc89, "capable" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89db9f70, "dev_alloc_name" },
	{ 0x9601035f, "request_firmware" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "802EA07999807B4829A6E11");
