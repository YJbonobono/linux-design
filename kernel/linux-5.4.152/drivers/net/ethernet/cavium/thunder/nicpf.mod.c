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
	{ 0xd8ed0bcc, "bgx_set_lmac_mac" },
	{ 0xaa7902b4, "pci_enable_sriov" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x72b238e4, "bgx_get_rx_stats" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xb17d83d4, "pci_disable_sriov" },
	{ 0x60cd1f2f, "bgx_lmac_get_pfc" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xd8be5fd, "bgx_lmac_rx_tx_enable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x6ca2152d, "bgx_lmac_set_pfc" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0xc5850110, "printk" },
	{ 0x539ca253, "bgx_get_lmac_mac" },
	{ 0x42264715, "bgx_get_lmac_count" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xc397f585, "bgx_lmac_internal_loopback" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf101d1b2, "bgx_get_lmac_link_state" },
	{ 0xbe654297, "bgx_get_tx_stats" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x46cdf933, "bgx_config_timestamping" },
	{ 0x14aa4158, "pci_sriov_get_totalvfs" },
	{ 0xc82be691, "bgx_get_map" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x716fd7f0, "bgx_reset_xcast_mode" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x71044428, "pci_msix_vec_count" },
	{ 0x34eeb48a, "bgx_set_dmac_cam_filter" },
	{ 0x1632f101, "pci_find_ext_capability" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xff987a02, "bgx_set_xcast_mode" },
};

MODULE_INFO(depends, "thunder_bgx");

MODULE_ALIAS("pci:v0000177Dd0000A01Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DA7B03408308024C2FDFDE4");
