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
	{ 0x511bede5, "irq_chip_ack_parent" },
	{ 0x1a6b6d28, "pci_msi_set_desc" },
	{ 0xeff1fc77, "pci_msi_prepare" },
	{ 0xd0bbf4da, "__vmbus_driver_register" },
	{ 0x90a9d8cc, "hv_is_hyperv_initialized" },
	{ 0xfb921e00, "hvpci_block_ops" },
	{ 0xb1f27246, "vmbus_driver_unregister" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47fedf60, "vmbus_recvpacket_raw" },
	{ 0x6ba81357, "pci_remove_root_bus" },
	{ 0x3a4dfadd, "pci_stop_root_bus" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x7413e6c0, "pci_bus_add_devices" },
	{ 0xc93b9041, "pci_bus_assign_resources" },
	{ 0x538591a4, "pci_create_root_bus" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xd9fe373d, "irq_domain_free_fwnode" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0x3046b869, "pci_msi_create_irq_domain" },
	{ 0xbfe628d2, "handle_edge_irq" },
	{ 0x6d818ec7, "x86_vector_domain" },
	{ 0x11cafe4f, "__irq_domain_alloc_fwnode" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbff8591a, "vmbus_allocate_mmio" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x2dcdb92a, "vmbus_close" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6ad863e9, "vmbus_open" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb9c16f51, "hv_max_vp_index" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x211130c1, "alloc_cpumask_var" },
	{ 0x7f0c5ad1, "pci_msi_unmask_irq" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x9bad141d, "hv_hypercall_pg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x3fae6ab0, "hv_vp_index" },
	{ 0x65bd8d0e, "irqd_cfg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31e2e77f, "vmbus_free_mmio" },
	{ 0x46b552a8, "msi_desc_to_pci_dev" },
	{ 0x8bb6fc42, "irq_domain_get_irq_data" },
	{ 0xe67b42dd, "pci_scan_child_bus" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4516b04d, "pci_msi_mask_irq" },
	{ 0x8416ee80, "vmbus_sendpacket" },
	{ 0xb9227b45, "pci_destroy_slot" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x2930376, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4eb245c1, "pci_create_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,pci-hyperv-intf");

MODULE_ALIAS("vmbus:1df6c444444400449d52802e27ede19f");

MODULE_INFO(srcversion, "B445DAA1ED651DD267A349C");
