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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0xb8740787, "parport_pc_probe_port" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x920754b1, "parport_pc_unregister_port" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,parport_pc");

MODULE_ALIAS("pcmcia:m*c*f03fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn01pfn*pa3BEB8CF2pbDB9E58BCpc*pd*");
MODULE_ALIAS("pcmcia:m0137c0003f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "A21B86B76528AF5293BCF53");
