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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x48a03431, "p54_register_common" },
	{ 0x65a1dc0f, "p54_read_eeprom" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x81b9f84d, "device_release_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xc3bdfe01, "p54_parse_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x1f0d48d4, "p54_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x88275480, "p54_free_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x80df34dd, "p54_init_common" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x3d7e54c7, "pci_try_set_mwi" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0x29361773, "complete" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdc8d08a6, "p54_free_common" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x3fc71731, "p54_unregister_common" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xafe94031, "pci_reenable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common");

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d0000FFFFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D179CB8798867FB37DB4691");
