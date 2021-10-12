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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x75943e25, "i8253_lock" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7d5a28c9, "snd_pcm_lib_free_pages" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x28707648, "snd_pcm_lib_malloc_pages" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x45172700, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xd05ef65f, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "00541B5F47E452FD67D9F0F");
