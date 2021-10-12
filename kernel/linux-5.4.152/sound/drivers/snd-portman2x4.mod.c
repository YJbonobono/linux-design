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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x23aa7ffb, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xb1871d0c, "snd_rawmidi_new" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x979ffaf2, "parport_claim" },
	{ 0x2d3e250, "parport_release" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x901fe54f, "snd_rawmidi_transmit" },
	{ 0xe35cec35, "snd_rawmidi_receive" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "snd-rawmidi,parport,snd");


MODULE_INFO(srcversion, "593829E94018CB6D11AF7D4");
