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
	{ 0xc5850110, "printk" },
	{ 0x9570732b, "platform_device_register" },
	{ 0x4f12e691, "sl811h_driver" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0x37a0cba, "kfree" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,sl811-hcd");

MODULE_ALIAS("pcmcia:mC015c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "52559680B903E2E39F87D40");
