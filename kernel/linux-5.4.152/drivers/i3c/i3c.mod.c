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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x53b954a2, "up_read" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xe5a01321, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x335e4ce6, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x51ce92, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CE77BDD9ED03B55AA0214DF");
