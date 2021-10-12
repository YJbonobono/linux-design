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
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x1cc79b3c, "devlink_port_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfacd559b, "devlink_reload_enable" },
	{ 0x34e0549f, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf93df63d, "xdp_attachment_flags_ok" },
	{ 0xb8baf0d6, "devlink_reload_disable" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x1f563160, "bpf_offload_dev_priv" },
	{ 0x226a304c, "devlink_param_driverinit_value_get" },
	{ 0xa107cac8, "bpf_offload_dev_create" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xa3b53740, "single_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4c12ce41, "xdp_attachment_query" },
	{ 0x15ce9051, "bpf_offload_dev_netdev_unregister" },
	{ 0xb08dad3d, "devlink_resource_size_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8ca50767, "devlink_resources_unregister" },
	{ 0xc191c3e4, "devlink_traps_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x43688b2c, "devlink_alloc" },
	{ 0x2a8aa780, "devlink_params_register" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7b0a793e, "xdp_attachment_setup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x93ae271, "devlink_trap_report" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xe5a01321, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa4ab245c, "devlink_resource_occ_get_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1692d910, "devlink_params_publish" },
	{ 0x30c76023, "free_netdev" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x8cbb4d9e, "bpf_offload_dev_match" },
	{ 0xfc3bba0f, "unregister_fib_notifier" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd22d728, "devlink_region_snapshot_create" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x1aee8382, "debugfs_create_bool" },
	{ 0x78381292, "init_net" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0xa5194d1b, "devlink_port_unregister" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x352ec68b, "bpf_offload_dev_destroy" },
	{ 0xc6efa933, "devlink_param_driverinit_value_set" },
	{ 0xd7890fe1, "devlink_region_create" },
	{ 0x1651f144, "flow_block_cb_setup_simple" },
	{ 0xe5444219, "devlink_flash_update_begin_notify" },
	{ 0x3f8bde0c, "devlink_flash_update_end_notify" },
	{ 0x7dab43b8, "bpf_verifier_log_write" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xe6cf962b, "devlink_resource_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0xee74bc7d, "devlink_flash_update_status_notify" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xad5876dd, "devlink_traps_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xc80afa88, "devlink_free" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x9fc5b54c, "devlink_port_type_clear" },
	{  0xbcc7a, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb5dfeb53, "devlink_region_shapshot_id_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53320146, "devlink_port_attrs_set" },
	{ 0xfec4b9c6, "devlink_params_unregister" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x82ee191e, "debugfs_create_symlink" },
	{ 0x51ce92, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0x6cff3b90, "register_fib_notifier" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0x6b6e4fab, "devlink_unregister" },
	{ 0xea50773f, "bpf_offload_dev_netdev_register" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x53e947e9, "devlink_port_type_eth_set" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5C1A8389D606BDC80101D5");
