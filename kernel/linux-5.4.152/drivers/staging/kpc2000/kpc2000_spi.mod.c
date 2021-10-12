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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x5f787440, "spi_finalize_current_message" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x71c6c4d0, "spi_new_device" },
	{ 0xb9e1fec6, "spi_register_controller" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "769B7BEE65725C0359D67A9");
