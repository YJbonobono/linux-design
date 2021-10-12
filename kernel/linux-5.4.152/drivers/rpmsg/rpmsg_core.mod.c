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
	{ 0x55353855, "bus_register" },
	{ 0x34e0549f, "driver_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe5a01321, "device_register" },
	{ 0xfe8498de, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xef2eeb1c, "dev_pm_domain_detach" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf29082c2, "dev_pm_domain_attach" },
	{ 0x37a0cba, "kfree" },
	{ 0x51ce92, "device_unregister" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9730607A76EBE7ECB8A25A7");
