#include "dxvk_umd_exts.h"

namespace dxvk {

  DxvkUMDExts DxvkUMDExts::s_instance;

  std::string_view DxvkUMDExts::getName() {
    return "D3D11 UMD";
  }


  DxvkExtensionList DxvkUMDExts::getInstanceExtensions() {
    return DxvkExtensionList();
  }


  DxvkExtensionList DxvkUMDExts::getDeviceExtensions(
          uint32_t      adapterId) {
    DxvkExtensionList names{vk::makeExtension(VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME)};

    return names;
  }


  void DxvkUMDExts::initInstanceExtensions() {

  }


  void DxvkUMDExts::initDeviceExtensions(
    const DxvkInstance* instance) {

  }

}
