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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x2c7a675f, "serial8250_register_8250_port" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xcc248d26, "serial8250_suspend_port" },
	{ 0xc7208c3a, "serial8250_resume_port" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x441518ac, "platform_device_add_properties" },
	{ 0xabe384a1, "set_primary_fwnode" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x90ce9db5, "serial8250_get_port" },
	{ 0xa01ad7ce, "serial8250_do_set_divisor" },
	{ 0xab67f4ef, "serial8250_do_shutdown" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000494Fd00001052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd0000105Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd0000106Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000300bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000301bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000302bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000310bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000311bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000312bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000320bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000321bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000322bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000330bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000331bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000332bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv00001014sd000003D4bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00008358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d0000000Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6EA22B71FEAC16C57EB84FF");
