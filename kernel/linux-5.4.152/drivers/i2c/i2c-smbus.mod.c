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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x304f5efa, "i2c_verify_client" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:smbus_alert");

MODULE_INFO(srcversion, "E1D4FDC5101A21103162D57");
