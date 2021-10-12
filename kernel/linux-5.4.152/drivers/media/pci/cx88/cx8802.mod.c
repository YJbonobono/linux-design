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
	{ 0xa24f23d8, "__request_module" },
	{ 0x9bb9597e, "cx88_risc_databuffer" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb3a09e2, "cx88_sram_channel_setup" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x1c3a419c, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xfab7ced9, "vb2_buffer_done" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41bde8c7, "cx88_core_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe25ceaa4, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xf1b26b78, "cx88_core_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x3af6ce46, "cx88_shutdown" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc2e88bd6, "cx88_wakeup" },
	{ 0x46b50adf, "cx88_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "cx88xx,videobuf2-common");

MODULE_ALIAS("pci:v000014F1d00008802sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55DCEDBC35EADDA2A45085A");
