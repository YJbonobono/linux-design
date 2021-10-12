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
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x93b4132, "snd_ak4117_reinit" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xb177d101, "seq_printf" },
	{ 0xda621bbc, "snd_ak4117_check_rate_and_errors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0xef729cb2, "snd_ak4117_create" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xf07034c5, "snd_ak4117_build" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x36a19d45, "snd_pcm_set_ops" },
	{ 0x77de4c71, "snd_card_free_when_closed" },
	{ 0x915d9e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x4cee1af3, "snd_ak4117_external_rate" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeac73847, "irq_regs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x51eb09a5, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75fa11ed, "snd_ak4117_reg_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x5b963be9, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "pcmcia,snd-ak4117,snd-pcm,snd");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa396D19D2pb71717B49pc*pd*");

MODULE_INFO(srcversion, "686A81BCAB216F1D64AC6D1");
