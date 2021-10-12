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
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x8d87ef08, "comedi_driver_register" },
	{ 0x208a10d3, "comedi_auto_config" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0xc03869f4, "comedi_auto_unconfig" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xf0a4b117, "comedi_driver_unregister" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0x52acc661, "pcmcia_disable_device" },
};

MODULE_INFO(depends, "pcmcia,comedi");


MODULE_INFO(srcversion, "1A6BAF23E29F9301EA16B7C");
