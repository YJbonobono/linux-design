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
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9570732b, "platform_device_register" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdedecca6, "pcmcia_write_config_byte" },
	{ 0x5a419e39, "pcmcia_request_window" },
	{ 0x37a0cba, "kfree" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0168c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0004f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0081f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0084f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0085f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0102f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0168c0105f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "AD4E7033FD6A49B1DBD1C81");
