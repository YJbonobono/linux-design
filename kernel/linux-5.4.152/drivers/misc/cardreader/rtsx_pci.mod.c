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
	{ 0x2d3385d3, "system_wq" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf10de535, "ioread8" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76f26366, "pci_intx" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x29361773, "complete" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3b223a39, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00005209sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005229sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005289sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005227sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000522Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005249sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005287sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005286sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000524Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd0000525Asv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005260sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "FCD5E5157108A3483065489");
