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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0xaee8e631, "driver_for_each_device" },
	{ 0x41b82dec, "driver_find" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0x4da4a708, "ivtv_udma_alloc" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xbba745d6, "ivtv_init_on_first_open" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x550ce709, "pat_enabled" },
	{ 0xfe1efd17, "ivtv_firmware_check" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x14f67530, "ivtv_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbaff9ff7, "ivtv_udma_unmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xee3ece3f, "ivtv_udma_prepare" },
	{ 0xcec2cd01, "ivtv_udma_setup" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x63027da, "ivtv_vapi_result" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x39ae4df6, "ivtv_vapi" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ivtv");


MODULE_INFO(srcversion, "6B75F839B9EED8FDC856059");
