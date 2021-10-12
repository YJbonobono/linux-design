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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf8c679e2, "input_event" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mcs5000_touchkey");
MODULE_ALIAS("i2c:mcs5080_touchkey");

MODULE_INFO(srcversion, "ADD0EC96DEECC7386898CBF");
