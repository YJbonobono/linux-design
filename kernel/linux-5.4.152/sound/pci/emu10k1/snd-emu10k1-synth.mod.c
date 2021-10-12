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
	{ 0x3a49f5f2, "snd_emux_new" },
	{ 0xa59577af, "snd_emu10k1_synth_alloc" },
	{ 0xe323d809, "snd_emux_register" },
	{ 0x6602b1f1, "snd_emu10k1_memblk_map" },
	{ 0xf242bb23, "snd_emu10k1_voice_alloc" },
	{ 0x6cb0d3d0, "__snd_seq_driver_register" },
	{ 0xc5e14ebb, "snd_emu10k1_synth_bzero" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa1e74736, "snd_emux_free" },
	{ 0xd712543, "snd_emu10k1_ptr_write" },
	{ 0x24d26345, "snd_emu10k1_synth_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8e9ce7b8, "snd_emu10k1_voice_free" },
	{ 0xd72cf61d, "snd_emu10k1_synth_copy_from_user" },
	{ 0x92b0d427, "snd_emu10k1_ptr_read" },
	{ 0x8953befc, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-emux-synth,snd-emu10k1,snd-seq-device");


MODULE_INFO(srcversion, "B9A37584DA2A60C8E54AFEE");
