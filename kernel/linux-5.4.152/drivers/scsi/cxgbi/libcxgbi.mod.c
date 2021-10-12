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
	{ 0x4641b7b5, "cxgbi_ppm_ppods_reserve" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7bc28bc3, "__kfree_skb" },
	{ 0x92095a87, "iscsi_host_remove" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x4dc84d10, "iscsi_tcp_set_max_r2t" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xfe2affc3, "cxgbi_ppm_ppod_release" },
	{ 0xc8d8e129, "iscsi_tcp_recv_skb" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x63c87209, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x204b257f, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x42026801, "iscsi_host_add" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa0ea6380, "iscsi_host_alloc" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe353f037, "iscsi_lookup_endpoint" },
	{ 0xc8f01eff, "iscsi_tcp_r2tpool_free" },
	{ 0x756b9ec5, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6006847, "current_task" },
	{ 0xb9602f4, "cxgbi_ppm_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5958b7d1, "iscsi_tcp_r2tpool_alloc" },
	{ 0xfc9961fa, "iscsi_host_set_param" },
	{ 0x40330b87, "iscsi_host_free" },
	{ 0x2e0cacd7, "iscsi_suspend_tx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde88d4f1, "iscsi_destroy_endpoint" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0x78381292, "init_net" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xf006d461, "iscsi_tcp_conn_setup" },
	{ 0xe70ff90d, "vlan_dev_real_dev" },
	{ 0xd926240, "ipv6_dev_get_saddr" },
	{ 0x87834c80, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0x18b2697a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xa77d8efe, "iscsi_register_transport" },
	{ 0xf2036eca, "iscsi_tcp_cleanup_task" },
	{ 0x15cc76a0, "iscsi_conn_queue_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc847ec99, "iscsi_tcp_hdr_recv_prep" },
	{ 0xf94eccb1, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11902748, "iscsi_conn_failure" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x634b0179, "iscsi_create_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x44ea65da, "__ip_dev_find" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xc2b5ffbc, "iscsi_session_setup" },
	{ 0x971bf4fb, "iscsi_host_get_param" },
	{ 0x6d6390b4, "iscsi_conn_bind" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x46ffcc1f, "iscsi_tcp_recv_segment_is_hdr" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2f6b4422, "cxgbi_ppm_make_ppod_hdr" },
};

MODULE_INFO(depends, "libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "EDFFCCE980B11CB1F51E164");
