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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xacab46d9, "dev_activate" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x9afcd044, "qdisc_reset" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xbd181d44, "__qdisc_calculate_pkt_len" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xad090817, "netdev_set_num_tc" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4f809a98, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x38fe7997, "netdev_reset_tc" },
	{ 0x32d4847b, "gnet_stats_copy_basic" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xa72a4a77, "pfifo_qdisc_ops" },
	{ 0xd4220e6a, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5dc2c1cf, "qdisc_hash_add" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x4e15be72, "qdisc_put" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xad3b2879, "__ethtool_get_link_ksettings" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x1cd14e21, "qdisc_create_dflt" },
	{ 0x608833c0, "unregister_qdisc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd2482d8f, "dev_deactivate" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x5f39266a, "__netif_schedule" },
	{ 0xed0857ed, "gnet_stats_copy_queue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2b75e98a, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F4A2E9DB83DC09ED69F5481");
