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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x5f787440, "spi_finalize_current_message" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xeec8c0b7, "devm_spi_register_controller" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x393a2318, "__devm_spi_alloc_controller" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,sc18is602");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602C*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602b");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602bC*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603C*");
MODULE_ALIAS("i2c:sc18is602");
MODULE_ALIAS("i2c:sc18is602b");
MODULE_ALIAS("i2c:sc18is603");

MODULE_INFO(srcversion, "EF5B658311E46F4AF41C32C");
