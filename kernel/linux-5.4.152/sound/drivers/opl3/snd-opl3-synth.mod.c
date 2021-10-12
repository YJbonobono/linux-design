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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6ea09972, "snd_midi_channel_alloc_set" },
	{ 0x2f176ce8, "snd_opl3_reset" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb9948d2c, "snd_midi_channel_free_set" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5e3bf4ca, "snd_seq_create_kernel_client" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6cb0d3d0, "__snd_seq_driver_register" },
	{ 0x1a25b1fe, "snd_opl3_find_patch" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf0a1fdb3, "snd_midi_process_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5060a19, "snd_opl3_regmap" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x728316ec, "snd_seq_event_port_attach" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x8953befc, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-seq-midi-emul,snd-opl3-lib,snd-seq,snd-seq-device");


MODULE_INFO(srcversion, "C414003CA088F25B355C586");
