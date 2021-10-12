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
	{ 0xb832485a, "consume_skb" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x581cf443, "skb_push" },
	{ 0x9b553753, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0xed0857ed, "gnet_stats_copy_queue" },
	{ 0x32d4847b, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbd181d44, "__qdisc_calculate_pkt_len" },
	{ 0x3ac7d4fe, "tcf_classify" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbe42ca64, "tcf_block_get" },
	{ 0x1cd14e21, "qdisc_create_dflt" },
	{ 0xa72a4a77, "pfifo_qdisc_ops" },
	{ 0xbb47c4c3, "noop_qdisc" },
	{ 0x9afcd044, "qdisc_reset" },
	{ 0xc5850110, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xa164179, "fput" },
	{ 0x3159b167, "tcf_block_put" },
	{ 0x4e15be72, "qdisc_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2BD3335AB38A47572A1DEDE");
