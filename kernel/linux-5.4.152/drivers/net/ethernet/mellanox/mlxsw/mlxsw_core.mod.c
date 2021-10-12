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
	{ 0x1cc79b3c, "devlink_port_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfacd559b, "devlink_reload_enable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xeea71840, "hwmon_device_register_with_groups" },
	{ 0xb8baf0d6, "devlink_reload_disable" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x48241b4e, "thermal_cooling_device_unregister" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0xa3659b5f, "__tracepoint_devlink_hwerr" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8ca50767, "devlink_resources_unregister" },
	{ 0xc310b981, "strnstr" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x43688b2c, "devlink_alloc" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x50a63f93, "__tracepoint_devlink_hwmsg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3939403d, "devlink_port_type_ib_set" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x1692d910, "devlink_params_publish" },
	{ 0xf6f1080a, "thermal_zone_device_register" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0xa5194d1b, "devlink_port_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x90688bcd, "devlink_info_driver_name_put" },
	{ 0xb8107662, "thermal_zone_bind_cooling_device" },
	{ 0xf473254, "devlink_is_reload_failed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3d0d21e8, "devlink_params_unpublish" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb1647fc2, "devlink_info_version_running_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb004f0e1, "thermal_zone_unbind_cooling_device" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xc80afa88, "devlink_free" },
	{ 0x9d482986, "thermal_cooling_device_register" },
	{ 0x9fc5b54c, "devlink_port_type_clear" },
	{  0xbcc7a, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53320146, "devlink_port_attrs_set" },
	{ 0x667f43dc, "thermal_zone_device_update" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x607c4683, "devlink_info_version_fixed_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6b6e4fab, "devlink_unregister" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x53e947e9, "devlink_port_type_eth_set" },
	{ 0xdafd70ab, "thermal_zone_device_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EDEBF771C239EE9EDC1E889");
