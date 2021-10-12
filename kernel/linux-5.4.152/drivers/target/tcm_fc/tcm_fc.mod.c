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
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0xfa4667d1, "fc_seq_release" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0xc2258b94, "core_tpg_register" },
	{ 0xfa119c22, "fc_fc4_register_provider" },
	{ 0xa84b1560, "fc_lport_iterate" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xcf56df01, "target_register_template" },
	{ 0x58c857fe, "target_sess_cmd_list_set_waiting" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x5b93520e, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x49eafa1f, "target_submit_cmd" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x31fcf1e4, "fc_seq_assign" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0x7d0b231b, "_fc_frame_alloc" },
	{ 0x6006847, "current_task" },
	{ 0x775fb871, "fc_fill_reply_hdr" },
	{ 0xc5850110, "printk" },
	{ 0x811811e0, "fc_exch_done" },
	{ 0xac65c263, "core_tpg_set_initiator_node_tag" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ed0a2ff, "fc_fc4_deregister_provider" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x11a6c0c9, "target_remove_session" },
	{ 0xfb6a1517, "fc_frame_alloc_fill" },
	{ 0xa9375390, "fc_seq_set_resp" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x96a20d74, "target_setup_session" },
	{ 0xf801e691, "target_unregister_template" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x7f3407a7, "fc_seq_start_next" },
	{ 0xe5cf06b5, "fc_lport_notifier_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x470232f2, "target_wait_for_sess_cmds" },
	{ 0x34a33d56, "target_submit_tmr" },
	{ 0xd9e996ea, "fc_seq_send" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "libfc,target_core_mod");


MODULE_INFO(srcversion, "EE1BEACF5FE51129C9711CC");
