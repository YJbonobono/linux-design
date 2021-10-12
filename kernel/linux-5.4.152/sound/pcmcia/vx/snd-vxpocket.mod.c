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
	{ 0x319314f8, "snd_vx_load_boot_image" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x9738ec90, "snd_vx_resume" },
	{ 0xb41f7f96, "snd_vx_free_firmware" },
	{ 0xc83ee14a, "snd_vx_dsp_boot" },
	{ 0xb5776718, "snd_vx_dsp_load" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x3dd0f9ef, "snd_device_new" },
	{ 0xc5850110, "printk" },
	{ 0x77de4c71, "snd_card_free_when_closed" },
	{ 0xcc902a53, "snd_vx_suspend" },
	{ 0x373a088e, "snd_vx_check_reg_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x5c6d34a3, "snd_vx_create" },
	{ 0xf1f04d23, "snd_vx_irq_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x226138b0, "snd_vx_threaded_irq_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x42051c5, "snd_vx_setup_firmware" },
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "pcmcia,snd-vx-lib,snd");

MODULE_ALIAS("pcmcia:m01F1c0100f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "1A91A7C6B7CBA6E8DFCC506");
