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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x34e0549f, "driver_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb1d86bc1, "platform_device_del" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x692ee8ce, "ac97_bus_type" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "ac97_bus");


MODULE_INFO(srcversion, "6D2D7DB7B60AB8FC8075D16");
