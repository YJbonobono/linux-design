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
	{ 0x45b06668, "can_change_mtu" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb9924cd6, "can_put_echo_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x9eb9d1af, "register_candev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x64b4411, "alloc_candev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x546a033e, "can_change_state" },
	{ 0x7ac547d5, "alloc_can_skb" },
	{ 0x70b651d, "can_get_echo_skb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xe4c60f13, "alloc_canfd_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6833822f, "netif_rx" },
	{ 0x36ff9679, "alloc_can_err_skb" },
	{ 0xbd3525e9, "can_bus_off" },
	{ 0x96f8c098, "open_candev" },
	{ 0x77d59f8f, "close_candev" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xbe8b36d2, "pci_clear_master" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x285da97a, "free_candev" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7089480, "unregister_candev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v00001A07d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d00000011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B72BDB15255A3601DC033CA");
