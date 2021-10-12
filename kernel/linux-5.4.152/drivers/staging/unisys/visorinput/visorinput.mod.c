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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xe8ad1491, "visorbus_unregister_visor_driver" },
	{ 0x7842e1b, "visorbus_register_visor_driver" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x43341c5e, "visorbus_read_channel" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc455c651, "visorchannel_get_guid" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8c679e2, "input_event" },
	{ 0x56401853, "visorchannel_signalremove" },
	{ 0x6a0044fb, "visorbus_disable_channel_interrupts" },
	{ 0x8a583574, "visorbus_enable_channel_interrupts" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "visorbus");


MODULE_INFO(srcversion, "1E3DD41CB2088A6172C3147");
