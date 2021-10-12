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
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xb177d101, "seq_printf" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xd00fa911, "snd_ctl_notify" },
	{ 0x915d9e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x6579389b, "snd_pcm_hw_rule_add" },
	{ 0x51eb09a5, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x5b963be9, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x4875975c, "snd_pcm_stop" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0xee821553, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "9401A0B894527BA1238B364");
