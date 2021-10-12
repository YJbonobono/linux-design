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
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0x5de4a613, "ipmi_smi_watcher_unregister" },
	{ 0x127df4be, "ipmi_smi_watcher_register" },
	{ 0xc5850110, "printk" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x3750a460, "get_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe8174c92, "ipmi_get_smi_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "AE98BE4E130A0B0C64CB63C");
