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
	{ 0x7e0e09dd, "transport_class_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x28c8899d, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x481a80a5, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x9afab2c6, "scsi_is_host_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xea58b78a, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2ec4e91e, "transport_configure_device" },
	{ 0x856b5228, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x335e4ce6, "device_add" },
	{ 0x5d28af9b, "transport_class_unregister" },
	{ 0xc8362787, "scsi_target_unblock" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebeb1328, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3750a460, "get_device" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x84ed005, "transport_remove_device" },
	{ 0xb0147577, "scsi_target_block" },
	{ 0x28db880d, "dev_set_name" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E370CFA96BAED272F2BBFE3");
