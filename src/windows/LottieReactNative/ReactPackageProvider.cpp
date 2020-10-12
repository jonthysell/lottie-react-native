#include "pch.h"
#include "ReactPackageProvider.h"
#if __has_include("ReactPackageProvider.g.cpp")
#include "ReactPackageProvider.g.cpp"
#endif

#include "LottieAnimationViewManager.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::LottieReactNative::implementation {

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept
{
  // packageBuilder.AddViewManager(L"LottieAnimationViewManager", []() { return winrt::make<LottieAnimationViewManager>(); });
}

} // namespace winrt::LottieReactNative::implementation
