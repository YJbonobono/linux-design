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
	{ 0xa8a942cf, "wmi_driver_unregister" },
	{ 0xe4478115, "__wmi_driver_register" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x35548eed, "sparse_keymap_setup" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x73550f0d, "sparse_keymap_report_entry" },
	{ 0xdbe14a86, "sparse_keymap_entry_from_scancode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,ledtrig-audio,sparse-keymap");

MODULE_ALIAS("wmi:59142400-C6A3-40fa-BADB-8A2652834100");
MODULE_ALIAS("wmi:ABBC0F5C-8EA1-11D1-A000-C90629100000");

MODULE_INFO(srcversion, "8243F66E2EF9DECD186F2D2");
