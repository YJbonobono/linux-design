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
	{ 0xa24f23d8, "__request_module" },
	{ 0xfc6380e5, "dvb_ringbuffer_free" },
	{ 0xf9a482f9, "msleep" },
	{ 0xebbc2d9b, "dvb_ringbuffer_init" },
	{ 0x3b5395d8, "dvb_module_probe" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x4e11ebe6, "dvb_register_device" },
	{ 0x91a6794b, "dvb_ringbuffer_read_user" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x2f5cdf80, "dvb_ringbuffer_write" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x94e48364, "param_ops_short" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0xc3f679f9, "dvb_ringbuffer_write_user" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9268dbd8, "dvb_generic_release" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb91779c2, "dvb_ca_en50221_release" },
	{ 0x6626afca, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7c9809c8, "dvb_unregister_device" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfb09f39a, "dvb_ringbuffer_read" },
	{ 0xa42afbce, "dvb_module_release" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc9304601, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe138ce6b, "dvb_ringbuffer_avail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3352dd2, "dvb_ringbuffer_empty" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xcf2a6966, "up" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x349c7313, "dvb_ca_en50221_init" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb9a826f, "dvb_ringbuffer_flush" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000AB04bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000AB05bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000ABC3bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000ABC4bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DB01bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DB02bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DD00bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DD10bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DD20bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv00001461sd0000062Ebc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv0000153Bsd00001167bc*sc*i*");

MODULE_INFO(srcversion, "9C7A700F81A5F2E3967AA69");
