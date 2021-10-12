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
	{ 0x94e48364, "param_ops_short" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0xc48cb0, "tda10046_attach" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x9601035f, "request_firmware" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb-core,tda1004x,i2c-algo-bit");

MODULE_ALIAS("pci:v00000432d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7FDBF00DBE62524C705AE33");
