#pragma once

#include "dxvk_extension_provider.h"

namespace dxvk {

  class DxvkUMDExts : public DxvkExtensionProvider {

  public:

    std::string_view getName();

    DxvkExtensionList getInstanceExtensions();

    DxvkExtensionList getDeviceExtensions(
            uint32_t      adapterId);

    void initInstanceExtensions();

    void initDeviceExtensions(
      const DxvkInstance* instance);

    static DxvkUMDExts s_instance;
  };

}
