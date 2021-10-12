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
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34e0549f, "driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x335e4ce6, "device_add" },
	{ 0x94567929, "__class_register" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3750a460, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x51ce92, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "977337D3816A6D0F99D6A4F");
