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
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbbb14b01, "i2c_smbus_write_i2c_block_data" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0x5416f29f, "i2c_smbus_read_i2c_block_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x496a9bd8, "fwnode_create_software_node" },
	{ 0xefb11847, "extcon_get_extcon_dev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c33e75c, "tcpm_register_port" },
	{ 0x3074b82d, "device_get_named_child_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb177d101, "seq_printf" },
	{ 0x87a67f49, "single_open" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x10c2c975, "usb_debug_root" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb1ff0942, "extcon_get_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcpm");

MODULE_ALIAS("i2c:typec_fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302C*");

MODULE_INFO(srcversion, "B352EE4A1E655200D0C8B4C");
