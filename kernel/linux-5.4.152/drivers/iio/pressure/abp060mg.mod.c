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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:abp060mg");
MODULE_ALIAS("i2c:abp006kg");
MODULE_ALIAS("i2c:abp100mg");
MODULE_ALIAS("i2c:abp010kg");
MODULE_ALIAS("i2c:abp160mg");
MODULE_ALIAS("i2c:abp016kg");
MODULE_ALIAS("i2c:abp250mg");
MODULE_ALIAS("i2c:abp025kg");
MODULE_ALIAS("i2c:abp400mg");
MODULE_ALIAS("i2c:abp040kg");
MODULE_ALIAS("i2c:abp600mg");
MODULE_ALIAS("i2c:abp060kg");
MODULE_ALIAS("i2c:abp001bg");
MODULE_ALIAS("i2c:abp100kg");
MODULE_ALIAS("i2c:abp1_6bg");
MODULE_ALIAS("i2c:abp160kg");
MODULE_ALIAS("i2c:abp2_5bg");
MODULE_ALIAS("i2c:abp250kg");
MODULE_ALIAS("i2c:abp004bg");
MODULE_ALIAS("i2c:abp400kg");
MODULE_ALIAS("i2c:abp006bg");
MODULE_ALIAS("i2c:abp600kg");
MODULE_ALIAS("i2c:abp010bg");
MODULE_ALIAS("i2c:abp001gg");
MODULE_ALIAS("i2c:abp060md");
MODULE_ALIAS("i2c:abp006kd");
MODULE_ALIAS("i2c:abp100md");
MODULE_ALIAS("i2c:abp010kd");
MODULE_ALIAS("i2c:abp160md");
MODULE_ALIAS("i2c:abp016kd");
MODULE_ALIAS("i2c:abp250md");
MODULE_ALIAS("i2c:abp025kd");
MODULE_ALIAS("i2c:abp400md");
MODULE_ALIAS("i2c:abp040kd");
MODULE_ALIAS("i2c:abp600md");
MODULE_ALIAS("i2c:abp060kd");
MODULE_ALIAS("i2c:abp001bd");
MODULE_ALIAS("i2c:abp100kd");
MODULE_ALIAS("i2c:abp1_6bd");
MODULE_ALIAS("i2c:abp160kd");
MODULE_ALIAS("i2c:abp2_5bd");
MODULE_ALIAS("i2c:abp250kd");
MODULE_ALIAS("i2c:abp004bd");
MODULE_ALIAS("i2c:abp400kd");
MODULE_ALIAS("i2c:abp001pg");
MODULE_ALIAS("i2c:abp005pg");
MODULE_ALIAS("i2c:abp015pg");
MODULE_ALIAS("i2c:abp030pg");
MODULE_ALIAS("i2c:abp060pg");
MODULE_ALIAS("i2c:abp100pg");
MODULE_ALIAS("i2c:abp150pg");
MODULE_ALIAS("i2c:abp001pd");
MODULE_ALIAS("i2c:abp005pd");
MODULE_ALIAS("i2c:abp015pd");
MODULE_ALIAS("i2c:abp030pd");
MODULE_ALIAS("i2c:abp060pd");

MODULE_INFO(srcversion, "9D8122BBD218091F76F9CBC");
