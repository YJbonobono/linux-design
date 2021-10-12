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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xfd51535f, "usb_gadget_udc_reset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66f692c7, "usb_gadget_map_request" },
	{ 0x3de29c5, "usb_gadget_unmap_request" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbf0514fc, "usb_add_gadget_udc_release" },
	{ 0xa976fc36, "device_create_file" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x96848186, "scnprintf" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x71752d07, "usb_del_gadget_udc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v000010B5d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00003272sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8D18AA5D7C1E8A03831829C");
