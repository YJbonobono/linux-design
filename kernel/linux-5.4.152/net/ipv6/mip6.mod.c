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
	{ 0x9665211d, "rawv6_mh_filter_unregister" },
	{ 0xc3558ab5, "xfrm_unregister_type" },
	{ 0xfaf44d09, "rawv6_mh_filter_register" },
	{ 0x351b28ab, "xfrm_register_type" },
	{ 0x4db0ba1, "icmp6_send" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8e9304f, "km_report" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x581cf443, "skb_push" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4ac52f04, "ipv6_find_tlv" },
	{ 0xc5850110, "printk" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "93321DB396AAC10C837F151");
