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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5cab9945, "unregister_xenbus_watch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xbf362c19, "xenbus_map_ring_valloc" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x870e16b7, "xen_test_irq_shared" },
	{ 0x8e20abea, "xenbus_dev_is_online" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0xa3f750aa, "pci_load_and_free_saved_state" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x14ba25f8, "xenbus_unmap_ring_vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0x48237af7, "xenbus_watch_path" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf020de1b, "pci_store_saved_state" },
	{ 0x531b03c6, "__xenbus_register_backend" },
	{ 0x3090cb05, "bind_interdomain_evtchn_to_irqhandler_lateeoi" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc8c04f7c, "xenbus_unregister_driver" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0xd2a29a84, "xen_register_device_domain_owner" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x82f0f0a9, "xen_find_device_domain_owner" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1883b01e, "pci_load_saved_state" },
	{ 0xce807a25, "up_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5ada38a3, "__pci_reset_function_locked" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0xa452f2a4, "xen_pirq_from_irq" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0x491661e8, "pci_set_mwi" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8f93a6a3, "bus_register_notifier" },
	{ 0xf6e170a4, "xen_unregister_device_domain_owner" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa803cda9, "xenbus_switch_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x9bb0dee8, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x729c00d0, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51ce92, "device_unregister" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x9377148b, "bus_unregister_notifier" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DA498C763699F4FDDECD953");
