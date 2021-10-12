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
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfd94814e, "complete_all" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x88e3aef7, "tifm_add_adapter" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0xc6115a89, "tifm_alloc_adapter" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x51ce92, "device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xe5a01321, "device_register" },
	{ 0x33459355, "tifm_alloc_device" },
	{ 0xb8beb616, "tifm_free_device" },
	{ 0x1951c491, "tifm_free_adapter" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x76f26366, "pci_intx" },
	{ 0xedc03953, "iounmap" },
	{ 0x2b1d0b48, "tifm_remove_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb277f, "tifm_queue_work" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core");

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4C4C8AB9E7B18130DD29FF8");
