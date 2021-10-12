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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xb9e1fec6, "spi_register_controller" },
	{ 0xe705f9d, "__spi_alloc_controller" },
	{ 0x71c6c4d0, "spi_new_device" },
	{ 0xec313f9e, "spi_unregister_controller" },
	{ 0x26b4912b, "gb_operation_sync_timeout" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x73916598, "gb_operation_request_send_sync_timeout" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5f787440, "spi_finalize_current_message" },
	{ 0xdd92a2e8, "gb_operation_get_payload_size_max" },
	{ 0xa63dbd09, "gb_operation_put" },
	{ 0xa76db6a, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "34A339A7752132587534941");
