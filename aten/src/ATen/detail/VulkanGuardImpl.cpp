#include <ATen/detail/VulkanGuardImpl.h>

namespace at {
namespace detail {

C10_REGISTER_GUARD_IMPL(Vulkan, VulkanGuardImpl);

}
} // namespace at
