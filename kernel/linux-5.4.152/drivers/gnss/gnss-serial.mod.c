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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x4afe5389, "gnss_put_device" },
	{ 0xf8969cfe, "gnss_register_device" },
	{ 0x9aa150ed, "serdev_device_close" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x7db272e5, "gnss_deregister_device" },
	{ 0x43347c8d, "gnss_allocate_device" },
	{ 0x37e8a607, "serdev_device_wait_until_sent" },
	{ 0x3e7088f1, "serdev_device_write" },
	{ 0x2171917, "serdev_device_write_wakeup" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x66c61188, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x9ca264f1, "serdev_device_set_flow_control" },
	{ 0x2cafe987, "gnss_insert_raw" },
	{ 0x92af78dd, "serdev_device_set_baudrate" },
};

MODULE_INFO(depends, "gnss");


MODULE_INFO(srcversion, "370E37E3EB01F15C51FED16");
