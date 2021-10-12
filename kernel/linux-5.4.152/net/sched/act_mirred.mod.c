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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc6d3c7ab, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc7539d63, "tcf_idr_cleanup" },
	{ 0x63109fd0, "__tcf_idr_release" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa672ce62, "tcf_chain_put_by_act" },
	{ 0xfb9ae09d, "tcf_action_set_ctrlact" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x91f4559e, "tcf_action_check_ctrlact" },
	{ 0x7fa68ab7, "tcf_idr_create" },
	{ 0xbd50b5d, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x581cf443, "skb_push" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x45d7658c, "tcf_idr_search" },
	{ 0xb1375a6b, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2eae7c54, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD7548D12E4B58F69D08032");
