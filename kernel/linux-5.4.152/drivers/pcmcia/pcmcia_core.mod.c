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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x91569701, "pci_set_cacheline_size" },
	{ 0x2930376, "pci_stop_and_remove_bus_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x441ef618, "pci_fixup_cardbus" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc93b9041, "pci_bus_assign_resources" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe5a01321, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7413e6c0, "pci_bus_add_devices" },
	{ 0xce807a25, "up_write" },
	{ 0x94567929, "__class_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xde698475, "pci_scan_slot" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9be81f7, "pci_scan_bridge" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x3750a460, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x51ce92, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x76c3f90e, "pci_bus_size_bridges" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7635957AD966934830B4994");
