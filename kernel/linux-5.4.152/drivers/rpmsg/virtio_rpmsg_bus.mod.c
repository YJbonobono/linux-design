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
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0xc5850110, "printk" },
	{ 0x3b78d396, "register_virtio_driver" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x20978fb9, "idr_find" },
	{ 0xefc91cfa, "rpmsg_sendto" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x6ef9b38c, "virtqueue_notify" },
	{ 0xd45006d1, "virtqueue_kick_prepare" },
	{ 0xc221a382, "virtio_check_driver_offered_feature" },
	{ 0xfbfc3ba, "virtqueue_add_inbuf" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xab2ad981, "virtqueue_get_vring_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe29fdaaa, "rpmsg_register_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xac1ae120, "rpmsg_find_device" },
	{ 0x692cba2b, "rpmsg_unregister_device" },
	{ 0x9166fada, "strncpy" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6e8543, "virtqueue_kick" },
	{ 0x499acd60, "virtqueue_add_outbuf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd8029dd2, "virtqueue_disable_cb" },
	{ 0x8c94dae0, "virtqueue_enable_cb" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x51ce92, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rpmsg_core");

MODULE_ALIAS("virtio:d00000007v*");

MODULE_INFO(srcversion, "463736CA78801718C805D6F");
