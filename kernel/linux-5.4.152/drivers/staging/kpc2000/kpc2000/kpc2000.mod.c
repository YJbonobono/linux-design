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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9b130b11, "pci_release_region" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xa8c9a5f7, "uio_unregister_device" },
	{ 0xf31357c9, "sysfs_create_files" },
	{ 0xef4b66f5, "pcie_capability_clear_and_set_word" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdc722609, "sysfs_remove_files" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x51ce92, "device_unregister" },
	{ 0xb4fe5e64, "__uio_register_device" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x52977a3a, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xc67ffbce, "pci_request_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("pci:v00001C33d00006021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C33d00004B03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6A99B2AF91951AF47CA83D8");
