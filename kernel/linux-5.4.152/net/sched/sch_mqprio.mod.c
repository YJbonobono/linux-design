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
	{ 0x608833c0, "unregister_qdisc" },
	{ 0x4f809a98, "register_qdisc" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xed0857ed, "gnet_stats_copy_queue" },
	{ 0x32d4847b, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xa7904be1, "__gnet_stats_copy_basic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xd4220e6a, "netdev_set_tc_queue" },
	{ 0x1cd14e21, "qdisc_create_dflt" },
	{ 0x34fcfd0c, "default_qdisc_ops" },
	{ 0x2624e66f, "pfifo_fast_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xacab46d9, "dev_activate" },
	{ 0xd2482d8f, "dev_deactivate" },
	{ 0x83fbaef9, "netdev_txq_to_tc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad090817, "netdev_set_num_tc" },
	{ 0x37a0cba, "kfree" },
	{ 0x5dc2c1cf, "qdisc_hash_add" },
	{ 0x4e15be72, "qdisc_put" },
	{ 0x34380d5a, "dev_graft_qdisc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A5815CD0A2686C58EAFE30A");
