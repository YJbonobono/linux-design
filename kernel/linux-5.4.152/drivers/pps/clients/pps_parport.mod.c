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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x3abcf62f, "pps_event" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0x57a3b0ea, "pps_unregister_source" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x2d3e250, "parport_release" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa2565847, "pps_register_source" },
	{ 0x5220c255, "parport_claim_or_block" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "9A648C16C980DC6CCEDAE72");
