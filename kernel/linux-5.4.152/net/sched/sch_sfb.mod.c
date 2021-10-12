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
	{ 0xbe42ca64, "tcf_block_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5dc2c1cf, "qdisc_hash_add" },
	{ 0xc3d901bf, "fifo_create_dflt" },
	{ 0xa72a4a77, "pfifo_qdisc_ops" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf411afa6, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbb47c4c3, "noop_qdisc" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xd1813e5e, "skb_get_hash_perturb" },
	{ 0xbd181d44, "__qdisc_calculate_pkt_len" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x70002fe8, "siphash_1u32" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x3ac7d4fe, "tcf_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4e15be72, "qdisc_put" },
	{ 0x3159b167, "tcf_block_put" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9afcd044, "qdisc_reset" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdeb8a84f, "gnet_stats_copy_app" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F72A29422F108B7242F777");
