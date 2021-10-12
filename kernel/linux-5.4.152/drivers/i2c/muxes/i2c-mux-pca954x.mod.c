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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa976fc36, "device_create_file" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x272c5d5a, "i2c_mux_add_adapter" },
	{ 0x270ac3e, "irq_set_chip_and_handler_name" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xd82577e1, "__irq_domain_add" },
	{ 0xda4a11d8, "irq_domain_simple_ops" },
	{ 0xd9d7a19d, "i2c_get_device_id" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x9e6b178e, "i2c_mux_alloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ca38da1, "__i2c_smbus_xfer" },
	{ 0x5e108ee9, "i2c_mux_del_adapters" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x97c8a653, "irq_find_mapping" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "76FE7E77C9AD5840DBE20C8");
