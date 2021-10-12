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
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x49ebd0d2, "sja1000_interrupt" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfbd14f15, "register_sja1000dev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4fb897b3, "alloc_sja1000dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x72061f63, "pcmcia_map_mem_page" },
	{ 0x5a419e39, "pcmcia_request_window" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xbb46f0fd, "free_sja1000dev" },
	{ 0x1767383e, "unregister_sja1000dev" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,sja1000");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paEAB1EA23pbA338573FpcE4575800pd*");

MODULE_INFO(srcversion, "C7B8A3EBF5D648002FD0A32");
