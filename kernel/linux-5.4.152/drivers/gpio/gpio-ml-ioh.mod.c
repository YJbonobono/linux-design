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
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4124e9c1, "devm_irq_setup_generic_chip" },
	{ 0xa42ba46e, "devm_irq_alloc_generic_chip" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0xf7d0633a, "__devm_irq_alloc_descs" },
	{ 0xc1dda9e4, "gpiochip_add_data_with_key" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xf18735d9, "gpiochip_get_data" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x4044488a, "gpiochip_remove" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xe484e35f, "ioread32" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DBd0000802Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F76E5214B60C88300E4B45B");
