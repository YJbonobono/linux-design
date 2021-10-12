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
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xab735372, "ipmi_dmi_get_slave_addr" },
	{ 0xf8f18443, "ipmi_add_smi" },
	{ 0x9b9e828, "device_add_groups" },
	{ 0x130b568, "wake_up_process" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x736825ad, "i2c_adapter_type" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x945a6e76, "device_remove_groups" },
	{ 0x31cab048, "ipmi_smi_msg_received" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbd4e7f, "device_property_read_u8_array" },
	{ 0xad92918c, "device_property_read_u16_array" },
	{ 0x7abc9a75, "i2c_for_each_dev" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf488daa5, "i2c_smbus_write_block_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3750a460, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x29361773, "complete" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x702c769b, "i2c_smbus_read_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("i2c:ipmi_ssif");
MODULE_ALIAS("acpi*:IPI0001:*");

MODULE_INFO(srcversion, "00AB9663FEA4605E3C671E6");
