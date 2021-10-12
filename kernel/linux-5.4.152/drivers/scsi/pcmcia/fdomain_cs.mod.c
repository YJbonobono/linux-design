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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xce9de93c, "fdomain_create" },
	{ 0x85bd1608, "__request_region" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x1999114d, "fdomain_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,fdomain");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3736C88pb859CAD20pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa8DACB57Epb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa182BDAFEpbC80D106Fpc*pd*");

MODULE_INFO(srcversion, "74651372F183EDBC07D074B");
