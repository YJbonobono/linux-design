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
	{ 0xf8f38da6, "parport_ieee1284_read_byte" },
	{ 0x2e9d6e64, "parport_ieee1284_read_nibble" },
	{ 0x4c4370ce, "parport_ieee1284_write_compat" },
	{ 0x89cc818f, "parport_ieee1284_ecp_write_addr" },
	{ 0x2b7618da, "parport_ieee1284_ecp_read_data" },
	{ 0x260e0340, "parport_ieee1284_ecp_write_data" },
	{ 0x73ce6d0b, "parport_ieee1284_epp_read_addr" },
	{ 0xfaed6c37, "parport_ieee1284_epp_write_addr" },
	{ 0xfaefd29d, "parport_ieee1284_epp_read_data" },
	{ 0x552feef8, "parport_ieee1284_epp_write_data" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3944290e, "parport_announce_port" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5e3a3912, "parport_irq_handler" },
	{ 0x3db6f5e, "parport_register_port" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x353697ae, "parport_remove_port" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "2FCBBBFDDF4069F58DE7EA0");
