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
	{ 0x6ea10bca, "unregister_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7d862eba, "register_tcf_proto_ops" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x5f109ce8, "tcf_action_exec" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdeead3c, "__dev_get_by_name" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6ae031cb, "tcf_exts_validate" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xf5f24160, "tcf_exts_dump_stats" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0x30aad184, "tcf_exts_dump" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7952e79a, "tc_setup_cb_add" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7a76a5e9, "tc_setup_cb_call" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x596c50d1, "__put_net" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7f3ec619, "tcf_exts_destroy" },
	{ 0x708fff8, "tc_setup_cb_destroy" },
	{ 0x3e18e834, "tc_setup_cb_reoffload" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DA28511BCC883C4F2E8C0CA");
