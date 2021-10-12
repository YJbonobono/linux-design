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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x55353855, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0xb177d101, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x335e4ce6, "device_add" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x4cce07e3, "bus_for_each_dev" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x4eb6f57a, "snd_seq_root" },
	{ 0xecf88348, "snd_info_free_entry" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xc94618ea, "snd_info_create_module_entry" },
	{ 0xf5e152eb, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "5DF8F9C058836CBA2E0F90D");
