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
	{ 0xb4facf8b, "simple_open" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0x2cb31b6a, "mei_cldev_driver_unregister" },
	{ 0x11853f, "__mei_cldev_driver_register" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x728a5582, "mei_cldev_register_notif_cb" },
	{ 0x752afcba, "mei_cldev_register_rx_cb" },
	{ 0x9a6314f6, "mei_cldev_enable" },
	{ 0x61f9822a, "mei_cldev_set_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7fba1933, "mei_cldev_ver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x14342502, "mei_cldev_recv" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xd843bb0e, "watchdog_register_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19fb8c1b, "mei_cldev_send" },
	{ 0x29361773, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xa110af89, "mei_cldev_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xdf8a7f4a, "mei_cldev_get_drvdata" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc32f2624, "watchdog_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:05b79a6f-4628-4d7f-899d-a91514cb32ab:*:*");

MODULE_INFO(srcversion, "FF2913B1CF8C267B2927223");
