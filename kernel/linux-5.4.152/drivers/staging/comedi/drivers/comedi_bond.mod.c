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
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xec797760, "comedi_alloc_subdevices" },
	{ 0xc5e0ba97, "comedi_find_subdevice_by_type" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbc7c4a70, "comedi_get_n_channels" },
	{ 0xddc26f16, "comedi_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8a1ebc1, "comedi_alloc_devpriv" },
	{ 0xc817a84, "comedi_dio_bitfield2" },
	{ 0x6bf1411c, "comedi_dio_get_config" },
	{ 0x78b9d149, "comedi_dio_config" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcdca490a, "comedi_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,kcomedilib");


MODULE_INFO(srcversion, "0C64EC39205DB3E3E99A2F4");
