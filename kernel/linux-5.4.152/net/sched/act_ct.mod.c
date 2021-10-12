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
	{ 0xf1cf7179, "tcf_unregister_action" },
	{ 0xc6d3c7ab, "tcf_register_action" },
	{ 0x91001d14, "nf_ct_delete" },
	{ 0xe442784a, "__nf_conntrack_confirm" },
	{ 0x7a149757, "nf_ct_nat_ext_add" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xffda8933, "pskb_trim_rcsum_slow" },
	{ 0x4e6f46de, "nf_connlabels_replace" },
	{ 0x4f4db681, "nf_ct_deliver_cached_events" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6f7102cd, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa0960447, "nf_ct_frag6_gather" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb07343c0, "ipv6_find_hdr" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x581cf443, "skb_push" },
	{ 0xd48270ee, "nf_conntrack_in" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xc93d22a5, "nf_nat_icmpv6_reply_translation" },
	{ 0xc6ad0c0e, "ipv6_skip_exthdr" },
	{ 0xdd35019a, "nf_nat_setup_info" },
	{ 0xe4c79e0d, "nf_nat_icmp_reply_translation" },
	{ 0x5e21446f, "nf_nat_packet" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xcf91bea9, "nf_nat_alloc_null_binding" },
	{ 0x63109fd0, "__tcf_idr_release" },
	{ 0xc7539d63, "tcf_idr_cleanup" },
	{ 0x7fa68ab7, "tcf_idr_create" },
	{ 0xa672ce62, "tcf_chain_put_by_act" },
	{ 0xfb9ae09d, "tcf_action_set_ctrlact" },
	{ 0x16a87d8a, "nf_ct_tmpl_alloc" },
	{ 0x91f4559e, "tcf_action_check_ctrlact" },
	{ 0xbd50b5d, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x564e10f2, "nf_connlabels_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xfb578fc5, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x45d7658c, "tcf_idr_search" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb1375a6b, "tcf_generic_walker" },
	{ 0x37a0cba, "kfree" },
	{ 0x2eae7c54, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd94cdc47, "nf_connlabels_put" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_nat,nf_defrag_ipv6");


MODULE_INFO(srcversion, "6DA4BFA6F70D9F779C334EF");
