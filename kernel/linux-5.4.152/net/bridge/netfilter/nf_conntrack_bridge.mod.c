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
	{ 0xa072dda9, "nf_ct_bridge_unregister" },
	{ 0xc2922d3, "nf_ct_bridge_register" },
	{ 0xb832485a, "consume_skb" },
	{ 0x27b25842, "kfree_skb_list" },
	{ 0xfd20ab8b, "ip_fraglist_prepare" },
	{ 0xad08a32c, "ip_fraglist_init" },
	{ 0x543624ad, "skb_checksum_help" },
	{ 0x7da0bf91, "br_ip6_fragment" },
	{ 0xdca04cea, "ip_frag_next" },
	{ 0xf93fe653, "ip_frag_init" },
	{ 0xe442784a, "__nf_conntrack_confirm" },
	{ 0x646dcaee, "nf_confirm" },
	{ 0x4f4db681, "nf_ct_deliver_cached_events" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xffda8933, "pskb_trim_rcsum_slow" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6f7102cd, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xd48270ee, "nf_conntrack_in" },
	{ 0xa0960447, "nf_ct_frag6_gather" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x3dd1267f, "br_dev_queue_push_xmit" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_defrag_ipv6,bridge");


MODULE_INFO(srcversion, "3F77922BAA5567129B9A49E");
