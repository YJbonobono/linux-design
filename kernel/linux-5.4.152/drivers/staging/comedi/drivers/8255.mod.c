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
	{ 0xf0a4b117, "comedi_driver_unregister" },
	{ 0x8d87ef08, "comedi_driver_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9476e764, "subdev_8255_init" },
	{ 0x3e4cd00, "__comedi_request_region" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xba8bb93f, "subdev_8255_regbase" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_8255");


MODULE_INFO(srcversion, "17FFF3132C0FFF3F23DBCE1");
