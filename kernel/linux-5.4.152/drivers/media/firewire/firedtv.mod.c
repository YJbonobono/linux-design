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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34e0549f, "driver_register" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0x754d539c, "strlen" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x4e11ebe6, "dvb_register_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc43974ee, "fw_bus_type" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0x69d67f17, "fw_iso_context_start" },
	{ 0x86cb5e9, "fw_iso_context_queue_flush" },
	{ 0xf8c679e2, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x94e48364, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9268dbd8, "dvb_generic_release" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x90108c63, "fw_iso_buffer_destroy" },
	{ 0x7c9809c8, "dvb_unregister_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbf026860, "fw_iso_context_queue" },
	{ 0x426f8c83, "dvb_generic_ioctl" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc9304601, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4f9b8e8, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x955db70a, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf782bec, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x60be1f0a, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x4df02057, "crc32_be" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5150492, "fw_iso_buffer_init" },
	{ 0xa900f343, "fw_run_transaction" },
	{ 0xb66b7240, "fw_iso_context_destroy" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
	{ 0xd05ef65f, "input_allocate_device" },
};

MODULE_INFO(depends, "dvb-core,firewire-core");

MODULE_ALIAS("ieee1394:ven00001287mo00000024sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000025sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000026sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000034sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000035sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001287mo00000036sp0000A02Dver00010001*");

MODULE_INFO(srcversion, "A8B5B66B6EE37F465807DEF");
