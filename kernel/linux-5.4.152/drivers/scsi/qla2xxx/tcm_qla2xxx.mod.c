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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf801e691, "target_unregister_template" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xcf56df01, "target_register_template" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0x2b67481b, "qlt_lport_register" },
	{ 0x64d5d185, "qlt_rdy_to_xfer" },
	{ 0x9562e50a, "qlt_unreg_sess" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc2258b94, "core_tpg_register" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5f91db87, "target_execute_cmd" },
	{ 0x79a357e9, "transport_generic_request_failure" },
	{ 0x11a6c0c9, "target_remove_session" },
	{ 0x470232f2, "target_wait_for_sess_cmds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x96a20d74, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf7afb369, "btree_init" },
	{ 0x2d36cfb2, "qlt_xmit_response" },
	{ 0x49eafa1f, "target_submit_cmd" },
	{ 0x34a33d56, "target_submit_tmr" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x271011fa, "transport_generic_free_cmd" },
	{ 0x50df94f5, "btree_insert" },
	{ 0x4f2593f0, "btree_update" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xede9a09a, "btree_lookup" },
	{ 0x759bfe36, "btree_destroy" },
	{ 0x890fa0fa, "btree_get_prev" },
	{ 0xf3b95d79, "btree_remove" },
	{ 0xef92ef33, "btree_last" },
	{ 0xf331236f, "btree_geo32" },
	{ 0x999e8297, "vfree" },
	{ 0x58a6f877, "qlt_lport_deregister" },
	{ 0x4e110c57, "target_show_dynamic_sessions" },
	{ 0x93831d08, "target_put_sess_cmd" },
	{ 0x6308d634, "qlt_free_mcmd" },
	{ 0xe79fe4b8, "qlt_free_cmd" },
	{ 0x58c857fe, "target_sess_cmd_list_set_waiting" },
	{ 0x3c33f8bc, "qlt_xmit_tm_rsp" },
	{ 0x1e4eefeb, "qlt_abort_cmd" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xd6762310, "scsi_host_get" },
	{ 0xdeca3e04, "fc_vport_create" },
	{ 0x8d3dd769, "fc_vport_terminate" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b93520e, "core_tpg_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6006847, "current_task" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x455a93fb, "qlt_stop_phase2" },
	{ 0x33c30555, "qlt_stop_phase1" },
	{ 0x6491dd69, "qlt_enable_vha" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,qla2xxx,scsi_transport_fc");


MODULE_INFO(srcversion, "602E94A9648717D89929250");
