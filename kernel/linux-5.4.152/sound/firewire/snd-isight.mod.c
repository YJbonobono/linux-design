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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x5287e688, "fw_iso_resources_update" },
	{ 0x34e0549f, "driver_register" },
	{ 0xcd33f032, "iso_packets_buffer_init" },
	{ 0x9fcabe5e, "snd_pcm_period_elapsed" },
	{ 0xd6e86ea5, "fw_iso_resources_init" },
	{ 0xcd260832, "snd_pcm_stop_xrun" },
	{ 0xc43974ee, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4fba9d41, "snd_card_disconnect" },
	{ 0x69d67f17, "fw_iso_context_start" },
	{ 0x86cb5e9, "fw_iso_context_queue_flush" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x915d9e0, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xfd66215, "iso_packets_buffer_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x54d2c1b6, "snd_pcm_lib_ioctl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x28fed39f, "snd_ctl_boolean_mono_info" },
	{ 0x700ce568, "snd_card_new" },
	{ 0x1d5d29c3, "fw_iso_resources_destroy" },
	{ 0xbf026860, "fw_iso_context_queue" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x51eb09a5, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd7bd3ecb, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9aa9d36, "fw_iso_resources_allocate" },
	{ 0x3750a460, "get_device" },
	{ 0x955db70a, "fw_iso_context_stop" },
	{ 0x60be1f0a, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9deccdfb, "snd_card_free" },
	{ 0xbb3c891, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba1be5f, "snd_pcm_new" },
	{ 0xfc647366, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xa6de447a, "snd_ctl_add" },
	{ 0x1469eedb, "snd_fw_transaction" },
	{ 0xd9f3cf7c, "fw_iso_resources_free" },
	{ 0xb66b7240, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd-pcm,snd");

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "4684208F7E1898B13612A76");
