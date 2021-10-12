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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x87a67f49, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x10c2c975, "usb_debug_root" },
	{ 0xd42cf3df, "typec_match_altmode" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0xa3b53740, "single_release" },
	{ 0xfc8efb9e, "typec_altmode_notify" },
	{ 0x493159cc, "typec_partner_set_identity" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8596cdac, "typec_unregister_altmode" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb76649f, "typec_register_port" },
	{ 0x2d1e301d, "typec_find_power_role" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcf856dc1, "typec_altmode_vdm" },
	{ 0x9049491e, "typec_find_port_data_role" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0xbd8183ab, "typec_altmode_attention" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x5ac3a632, "typec_set_vconn_role" },
	{ 0x66d726f2, "typec_altmode_update_active" },
	{ 0x36852716, "typec_set_orientation" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8f940965, "typec_partner_register_altmode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x54c93810, "typec_set_mode" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0xeafc1eb8, "typec_find_port_power_role" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9da868d5, "typec_port_register_altmode" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf38d108b, "usb_role_switch_get" },
	{ 0x9a00a11c, "typec_register_partner" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xceb66bec, "sched_clock_cpu" },
};

MODULE_INFO(depends, "typec");


MODULE_INFO(srcversion, "AFC5786F2FF66740DE1A323");
