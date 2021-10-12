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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x34e0549f, "driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8426f7dc, "snd_hdac_device_exit" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xb184f85b, "snd_hda_bus_type" },
	{ 0x7052240, "snd_hdac_bus_init_cmd_io" },
	{ 0xd99022b9, "snd_hdac_bus_stop_cmd_io" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x46ac29c1, "snd_hdac_stream_assign" },
	{ 0x1e09c7a, "snd_hdac_device_init" },
	{ 0x2eb133aa, "snd_hdac_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x91a29a6, "snd_hdac_stream_init" },
	{ 0x4b030711, "snd_hdac_bus_init" },
	{ 0xba11aed6, "snd_hdac_stream_stop" },
	{ 0xd65758f7, "snd_hdac_device_register" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x43948c51, "snd_hdac_bus_exit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xf09cc5c8, "snd_hdac_bus_stop_chip" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7b7378, "snd_hdac_stream_release" },
};

MODULE_INFO(depends, "snd-hda-core");


MODULE_INFO(srcversion, "EC646C5D6E2B6C17A5E5944");
