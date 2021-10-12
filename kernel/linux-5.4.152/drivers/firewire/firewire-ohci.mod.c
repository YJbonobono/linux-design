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
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc6a5bfd5, "fw_core_handle_bus_reset" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4942acc6, "fw_card_initialize" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77c22ecc, "fw_schedule_bus_reset" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2e4dcdf9, "fw_fill_response" },
	{ 0xcb9ceacb, "fw_core_handle_response" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeb818c9d, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x9ea6c068, "fw_core_remove_card" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1d431927, "fw_core_handle_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x20219e82, "fw_card_add" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc00i10*");

MODULE_INFO(srcversion, "4B6151049EF20B496DB2A22");
