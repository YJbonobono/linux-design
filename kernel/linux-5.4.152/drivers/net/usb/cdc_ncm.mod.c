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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0xe324b8b8, "usb_altnum_to_altsetting" },
	{ 0x7c215d83, "usbnet_resume" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0x923b4d13, "usbnet_probe" },
	{ 0x5f74426b, "usbnet_link_change" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xa79246e0, "usbnet_disconnect" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x16bc0354, "usbnet_stop" },
	{ 0x1c9d4d7e, "usbnet_update_max_qlen" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb3960993, "usbnet_nway_reset" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xa6b7d7de, "usbnet_set_link_ksettings" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x17a1686, "usbnet_get_stats64" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4d56efa7, "usbnet_get_link_ksettings" },
	{ 0x2e985a00, "usb_driver_claim_interface" },
	{ 0x9fc3b382, "usbnet_get_drvinfo" },
	{ 0x97b22cac, "usbnet_start_xmit" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28480a24, "usbnet_suspend" },
	{ 0xee382bfe, "usbnet_get_link" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5e352694, "usbnet_read_cmd" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x96c228b2, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaa18ea3, "cdc_parse_cdc_header" },
	{ 0x4234eb81, "usbnet_get_ethernet_addr" },
	{ 0x39d3eb98, "usbnet_skb_return" },
	{ 0xd9afef59, "usb_driver_release_interface" },
	{ 0x1a5d5c90, "usbnet_open" },
	{ 0x12507b64, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x425f468b, "usbnet_unlink_rx_urbs" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x29ee81ca, "usbnet_manage_power" },
	{ 0xfb3ec474, "usbnet_write_cmd" },
	{ 0xdfba52c2, "usbnet_set_msglevel" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "7EDF8F00B5C2F2938EDB413");
