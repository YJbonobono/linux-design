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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x9acff9d1, "_snd_pcm_stream_lock_irqsave" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbb4bb62b, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3033d39c, "usb_unlink_urb" },
	{ 0xd2fda112, "snd_pcm_hw_constraint_integer" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x3610cdf8, "em28xx_read_ac97" },
	{ 0xfb578fc5, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xa0eb331, "em28xx_write_ac97" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0xb86b7db9, "usb_set_interface" },
	{ 0xc4206bb5, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf2d15857, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x3ca552d, "usb_free_coherent" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x700ce568, "snd_card_new" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb2a1ca5d, "snd_pcm_hw_constraint_minmax" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x2a771f85, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xa32150eb, "usb_alloc_coherent" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x323ab7f6, "em28xx_audio_analog_set" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "em28xx,snd-pcm,snd");


MODULE_INFO(srcversion, "ABBA7DD885BD710168AE39A");
