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
	{ 0x3cb783bf, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x7e70cd22, "dev_attr_sw_activity" },
	{ 0x2c2de31, "ata_port_printk" },
	{ 0x4b8288c8, "sata_pmp_error_handler" },
	{ 0x8e9916c3, "sata_link_scr_lpm" },
	{ 0xa1a76628, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2341b7f8, "ata_port_desc" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x6984ef82, "dev_attr_ncq_prio_enable" },
	{ 0x3d00e720, "dev_attr_em_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0x11c6c1e0, "sata_pmp_port_ops" },
	{ 0x23ab8ea8, "ata_ehi_push_desc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xca67aa38, "ata_dev_set_feature" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x95e29f08, "ata_dev_printk" },
	{ 0x8d8a4cdb, "ata_wait_register" },
	{ 0x4938fc0f, "ata_std_qc_defer" },
	{ 0xd9a24dc2, "ata_host_start" },
	{ 0x9f9da1e8, "ata_link_abort" },
	{ 0x251a7544, "dev_attr_unload_heads" },
	{ 0x4a85850e, "ata_msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x3e8b5d5f, "ata_ehi_clear_desc" },
	{ 0xf5db88d5, "sata_link_hardreset" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xa3b72889, "ata_host_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb1a72851, "dev_attr_em_message_type" },
	{ 0x8b0b934a, "sata_lpm_ignore_phy_events" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba2b03e7, "ata_link_printk" },
	{ 0xbe69e5f4, "ata_wait_after_reset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x10865e2c, "ata_qc_complete_multiple" },
	{ 0xa98bb746, "ata_link_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x190afd6d, "ata_std_postreset" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92d4577d, "dev_attr_link_power_management_policy" },
	{ 0x4ae63a9d, "ata_port_abort" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x13953fc2, "sata_async_notification" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B5DF0D8392F122B6FD0AF54");
