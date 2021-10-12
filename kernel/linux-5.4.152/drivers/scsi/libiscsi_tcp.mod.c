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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xab3b7abe, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x7333aff9, "crypto_stats_ahash_update" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x87c7074a, "iscsi_requeue_task" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9fead42e, "crypto_ahash_final" },
	{ 0x756b9ec5, "iscsi_itt_to_ctask" },
	{ 0xa90d72ca, "crypto_ahash_digest" },
	{ 0xdbf74922, "skb_abort_seq_read" },
	{ 0x6006847, "current_task" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x65ffdd53, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf79fa1c7, "iscsi_conn_teardown" },
	{ 0x203be1c4, "iscsi_put_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4b82d1e, "iscsi_prep_data_out_pdu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x45b9962d, "iscsi_complete_pdu" },
	{ 0x11902748, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8455b966, "iscsi_dbg_trace" },
	{ 0xb03247ec, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xfa4629ca, "crypto_stats_get" },
	{ 0x47867762, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x89bb80c6, "iscsi_verify_itt" },
	{ 0xb0d54d24, "iscsi_conn_setup" },
	{ 0x4e5b78ef, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "libiscsi,scsi_transport_iscsi");


MODULE_INFO(srcversion, "0C30DB850B236759F2A0AB3");
