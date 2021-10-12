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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xb4baf659, "qlogicfas408_queuecommand" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0xe72db8f5, "qlogicfas408_abort" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0xa4250e5, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x7e20c004, "scsi_host_put" },
	{ 0xe76b3b20, "qlogicfas408_get_chip_type" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1f55cd70, "qlogicfas408_ihandl" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0x47347dc, "qlogicfas408_host_reset" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0xf2b95199, "qlogicfas408_setup" },
	{ 0x6fa8ed6, "qlogicfas408_biosparam" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x36288603, "qlogicfas408_info" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pcmcia,qlogicfas408");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88395FA7pb33B7A5E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD361772Fpb299D1751pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa20841B68pbAB3C3B6Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6534382ApbD67EEE79pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa18DF0BA0pb24662E8Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pbF68E5BF7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pb68EACE54pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb194250ECpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pbA85B2735pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pb70F8B5F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb81896B61pcF99F065Fpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pb1A2640C1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1ApbA6F06EBEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1Apb0A88DEA0pc*pd*");

MODULE_INFO(srcversion, "43DE8513532043DB0824EC6");
