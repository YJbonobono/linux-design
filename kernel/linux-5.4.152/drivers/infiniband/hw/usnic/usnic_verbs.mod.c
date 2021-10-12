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
	{ 0xe7750f8, "kobject_put" },
	{ 0x9138c0b6, "vnic_dev_unregister" },
	{ 0x46dbb2a8, "ib_set_device_ops" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2491a84f, "kobject_get" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xab94fe54, "iommu_attach_device" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6760ebc5, "sockfd_lookup" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x9a6a9ac3, "ib_device_put" },
	{ 0xdaeaa0a8, "ib_get_eth_speed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x3c4c34b5, "iommu_map" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xfa690589, "netdev_cmd_to_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcba4abe3, "list_sort" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51d49c06, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x6006847, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x3c579e68, "vnic_dev_get_res" },
	{ 0x7c9e577b, "iommu_set_fault_handler" },
	{ 0xe1866bd7, "vnic_dev_register" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x7a1884c2, "ib_query_port" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4f5e81f6, "ib_device_set_netdev" },
	{ 0x5a84fc81, "iommu_unmap" },
	{ 0x4700b503, "iommu_domain_alloc" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8736d581, "vnic_dev_get_pdev" },
	{ 0xb4facf8b, "simple_open" },
	{ 0xb019cc34, "iommu_domain_free" },
	{ 0xa164179, "fput" },
	{ 0xe58bf8a6, "iommu_capable" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0x526e768, "iommu_detach_device" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0xca210d44, "ib_device_get_by_netdev" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7668931d, "iommu_present" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa944103a, "get_user_pages" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xafa530b2, "put_user_pages_dirty_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4ce452a3, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe606a7bb, "vnic_dev_get_res_count" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x59438249, "enic_api_devcmd_proxy_by_index" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "enic,ib_core");

MODULE_ALIAS("pci:v00001137d000000CFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A01C70047433526921BCE8D");
