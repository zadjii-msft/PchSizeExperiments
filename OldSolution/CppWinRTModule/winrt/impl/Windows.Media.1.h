// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Media_1_H
#define WINRT_Windows_Media_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.0.h"
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct __declspec(empty_bases) IAudioBuffer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioBuffer>,
        impl::require<winrt::Windows::Media::IAudioBuffer, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        IAudioBuffer(std::nullptr_t = nullptr) noexcept {}
        IAudioBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAudioBuffer(IAudioBuffer const&) noexcept = default;
        IAudioBuffer(IAudioBuffer&&) noexcept = default;
        IAudioBuffer& operator=(IAudioBuffer const&) & noexcept = default;
        IAudioBuffer& operator=(IAudioBuffer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAudioFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFrame>,
        impl::require<winrt::Windows::Media::IAudioFrame, winrt::Windows::Foundation::IClosable, winrt::Windows::Media::IMediaFrame>
    {
        IAudioFrame(std::nullptr_t = nullptr) noexcept {}
        IAudioFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAudioFrame(IAudioFrame const&) noexcept = default;
        IAudioFrame(IAudioFrame&&) noexcept = default;
        IAudioFrame& operator=(IAudioFrame const&) & noexcept = default;
        IAudioFrame& operator=(IAudioFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAudioFrameFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFrameFactory>
    {
        IAudioFrameFactory(std::nullptr_t = nullptr) noexcept {}
        IAudioFrameFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAudioFrameFactory(IAudioFrameFactory const&) noexcept = default;
        IAudioFrameFactory(IAudioFrameFactory&&) noexcept = default;
        IAudioFrameFactory& operator=(IAudioFrameFactory const&) & noexcept = default;
        IAudioFrameFactory& operator=(IAudioFrameFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAutoRepeatModeChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAutoRepeatModeChangeRequestedEventArgs>
    {
        IAutoRepeatModeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAutoRepeatModeChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAutoRepeatModeChangeRequestedEventArgs(IAutoRepeatModeChangeRequestedEventArgs const&) noexcept = default;
        IAutoRepeatModeChangeRequestedEventArgs(IAutoRepeatModeChangeRequestedEventArgs&&) noexcept = default;
        IAutoRepeatModeChangeRequestedEventArgs& operator=(IAutoRepeatModeChangeRequestedEventArgs const&) & noexcept = default;
        IAutoRepeatModeChangeRequestedEventArgs& operator=(IAutoRepeatModeChangeRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IImageDisplayProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IImageDisplayProperties>
    {
        IImageDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IImageDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IImageDisplayProperties(IImageDisplayProperties const&) noexcept = default;
        IImageDisplayProperties(IImageDisplayProperties&&) noexcept = default;
        IImageDisplayProperties& operator=(IImageDisplayProperties const&) & noexcept = default;
        IImageDisplayProperties& operator=(IImageDisplayProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaControl>
    {
        IMediaControl(std::nullptr_t = nullptr) noexcept {}
        IMediaControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaControl(IMediaControl const&) noexcept = default;
        IMediaControl(IMediaControl&&) noexcept = default;
        IMediaControl& operator=(IMediaControl const&) & noexcept = default;
        IMediaControl& operator=(IMediaControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaExtension :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaExtension>
    {
        IMediaExtension(std::nullptr_t = nullptr) noexcept {}
        IMediaExtension(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaExtension(IMediaExtension const&) noexcept = default;
        IMediaExtension(IMediaExtension&&) noexcept = default;
        IMediaExtension& operator=(IMediaExtension const&) & noexcept = default;
        IMediaExtension& operator=(IMediaExtension&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaExtensionManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaExtensionManager>
    {
        IMediaExtensionManager(std::nullptr_t = nullptr) noexcept {}
        IMediaExtensionManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaExtensionManager(IMediaExtensionManager const&) noexcept = default;
        IMediaExtensionManager(IMediaExtensionManager&&) noexcept = default;
        IMediaExtensionManager& operator=(IMediaExtensionManager const&) & noexcept = default;
        IMediaExtensionManager& operator=(IMediaExtensionManager&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaExtensionManager2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaExtensionManager2>,
        impl::require<winrt::Windows::Media::IMediaExtensionManager2, winrt::Windows::Media::IMediaExtensionManager>
    {
        IMediaExtensionManager2(std::nullptr_t = nullptr) noexcept {}
        IMediaExtensionManager2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaExtensionManager2(IMediaExtensionManager2 const&) noexcept = default;
        IMediaExtensionManager2(IMediaExtensionManager2&&) noexcept = default;
        IMediaExtensionManager2& operator=(IMediaExtensionManager2 const&) & noexcept = default;
        IMediaExtensionManager2& operator=(IMediaExtensionManager2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrame>,
        impl::require<winrt::Windows::Media::IMediaFrame, winrt::Windows::Foundation::IClosable>
    {
        IMediaFrame(std::nullptr_t = nullptr) noexcept {}
        IMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaFrame(IMediaFrame const&) noexcept = default;
        IMediaFrame(IMediaFrame&&) noexcept = default;
        IMediaFrame& operator=(IMediaFrame const&) & noexcept = default;
        IMediaFrame& operator=(IMediaFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaMarker :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaMarker>
    {
        IMediaMarker(std::nullptr_t = nullptr) noexcept {}
        IMediaMarker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaMarker(IMediaMarker const&) noexcept = default;
        IMediaMarker(IMediaMarker&&) noexcept = default;
        IMediaMarker& operator=(IMediaMarker const&) & noexcept = default;
        IMediaMarker& operator=(IMediaMarker&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaMarkerTypesStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaMarkerTypesStatics>
    {
        IMediaMarkerTypesStatics(std::nullptr_t = nullptr) noexcept {}
        IMediaMarkerTypesStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaMarkerTypesStatics(IMediaMarkerTypesStatics const&) noexcept = default;
        IMediaMarkerTypesStatics(IMediaMarkerTypesStatics&&) noexcept = default;
        IMediaMarkerTypesStatics& operator=(IMediaMarkerTypesStatics const&) & noexcept = default;
        IMediaMarkerTypesStatics& operator=(IMediaMarkerTypesStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaMarkers :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaMarkers>
    {
        IMediaMarkers(std::nullptr_t = nullptr) noexcept {}
        IMediaMarkers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaMarkers(IMediaMarkers const&) noexcept = default;
        IMediaMarkers(IMediaMarkers&&) noexcept = default;
        IMediaMarkers& operator=(IMediaMarkers const&) & noexcept = default;
        IMediaMarkers& operator=(IMediaMarkers&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaProcessingTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProcessingTriggerDetails>
    {
        IMediaProcessingTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IMediaProcessingTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaProcessingTriggerDetails(IMediaProcessingTriggerDetails const&) noexcept = default;
        IMediaProcessingTriggerDetails(IMediaProcessingTriggerDetails&&) noexcept = default;
        IMediaProcessingTriggerDetails& operator=(IMediaProcessingTriggerDetails const&) & noexcept = default;
        IMediaProcessingTriggerDetails& operator=(IMediaProcessingTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaTimelineController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTimelineController>
    {
        IMediaTimelineController(std::nullptr_t = nullptr) noexcept {}
        IMediaTimelineController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaTimelineController(IMediaTimelineController const&) noexcept = default;
        IMediaTimelineController(IMediaTimelineController&&) noexcept = default;
        IMediaTimelineController& operator=(IMediaTimelineController const&) & noexcept = default;
        IMediaTimelineController& operator=(IMediaTimelineController&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaTimelineController2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTimelineController2>
    {
        IMediaTimelineController2(std::nullptr_t = nullptr) noexcept {}
        IMediaTimelineController2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaTimelineController2(IMediaTimelineController2 const&) noexcept = default;
        IMediaTimelineController2(IMediaTimelineController2&&) noexcept = default;
        IMediaTimelineController2& operator=(IMediaTimelineController2 const&) & noexcept = default;
        IMediaTimelineController2& operator=(IMediaTimelineController2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaTimelineControllerFailedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTimelineControllerFailedEventArgs>
    {
        IMediaTimelineControllerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaTimelineControllerFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaTimelineControllerFailedEventArgs(IMediaTimelineControllerFailedEventArgs const&) noexcept = default;
        IMediaTimelineControllerFailedEventArgs(IMediaTimelineControllerFailedEventArgs&&) noexcept = default;
        IMediaTimelineControllerFailedEventArgs& operator=(IMediaTimelineControllerFailedEventArgs const&) & noexcept = default;
        IMediaTimelineControllerFailedEventArgs& operator=(IMediaTimelineControllerFailedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMusicDisplayProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMusicDisplayProperties>
    {
        IMusicDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IMusicDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMusicDisplayProperties(IMusicDisplayProperties const&) noexcept = default;
        IMusicDisplayProperties(IMusicDisplayProperties&&) noexcept = default;
        IMusicDisplayProperties& operator=(IMusicDisplayProperties const&) & noexcept = default;
        IMusicDisplayProperties& operator=(IMusicDisplayProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMusicDisplayProperties2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMusicDisplayProperties2>
    {
        IMusicDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
        IMusicDisplayProperties2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMusicDisplayProperties2(IMusicDisplayProperties2 const&) noexcept = default;
        IMusicDisplayProperties2(IMusicDisplayProperties2&&) noexcept = default;
        IMusicDisplayProperties2& operator=(IMusicDisplayProperties2 const&) & noexcept = default;
        IMusicDisplayProperties2& operator=(IMusicDisplayProperties2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMusicDisplayProperties3 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMusicDisplayProperties3>
    {
        IMusicDisplayProperties3(std::nullptr_t = nullptr) noexcept {}
        IMusicDisplayProperties3(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMusicDisplayProperties3(IMusicDisplayProperties3 const&) noexcept = default;
        IMusicDisplayProperties3(IMusicDisplayProperties3&&) noexcept = default;
        IMusicDisplayProperties3& operator=(IMusicDisplayProperties3 const&) & noexcept = default;
        IMusicDisplayProperties3& operator=(IMusicDisplayProperties3&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPlaybackPositionChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackPositionChangeRequestedEventArgs>
    {
        IPlaybackPositionChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPlaybackPositionChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPlaybackPositionChangeRequestedEventArgs(IPlaybackPositionChangeRequestedEventArgs const&) noexcept = default;
        IPlaybackPositionChangeRequestedEventArgs(IPlaybackPositionChangeRequestedEventArgs&&) noexcept = default;
        IPlaybackPositionChangeRequestedEventArgs& operator=(IPlaybackPositionChangeRequestedEventArgs const&) & noexcept = default;
        IPlaybackPositionChangeRequestedEventArgs& operator=(IPlaybackPositionChangeRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPlaybackRateChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackRateChangeRequestedEventArgs>
    {
        IPlaybackRateChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPlaybackRateChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPlaybackRateChangeRequestedEventArgs(IPlaybackRateChangeRequestedEventArgs const&) noexcept = default;
        IPlaybackRateChangeRequestedEventArgs(IPlaybackRateChangeRequestedEventArgs&&) noexcept = default;
        IPlaybackRateChangeRequestedEventArgs& operator=(IPlaybackRateChangeRequestedEventArgs const&) & noexcept = default;
        IPlaybackRateChangeRequestedEventArgs& operator=(IPlaybackRateChangeRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IShuffleEnabledChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IShuffleEnabledChangeRequestedEventArgs>
    {
        IShuffleEnabledChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShuffleEnabledChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IShuffleEnabledChangeRequestedEventArgs(IShuffleEnabledChangeRequestedEventArgs const&) noexcept = default;
        IShuffleEnabledChangeRequestedEventArgs(IShuffleEnabledChangeRequestedEventArgs&&) noexcept = default;
        IShuffleEnabledChangeRequestedEventArgs& operator=(IShuffleEnabledChangeRequestedEventArgs const&) & noexcept = default;
        IShuffleEnabledChangeRequestedEventArgs& operator=(IShuffleEnabledChangeRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemMediaTransportControls :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControls>
    {
        ISystemMediaTransportControls(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControls(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemMediaTransportControls(ISystemMediaTransportControls const&) noexcept = default;
        ISystemMediaTransportControls(ISystemMediaTransportControls&&) noexcept = default;
        ISystemMediaTransportControls& operator=(ISystemMediaTransportControls const&) & noexcept = default;
        ISystemMediaTransportControls& operator=(ISystemMediaTransportControls&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemMediaTransportControls2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControls2>
    {
        ISystemMediaTransportControls2(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControls2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemMediaTransportControls2(ISystemMediaTransportControls2 const&) noexcept = default;
        ISystemMediaTransportControls2(ISystemMediaTransportControls2&&) noexcept = default;
        ISystemMediaTransportControls2& operator=(ISystemMediaTransportControls2 const&) & noexcept = default;
        ISystemMediaTransportControls2& operator=(ISystemMediaTransportControls2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemMediaTransportControlsButtonPressedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsButtonPressedEventArgs>
    {
        ISystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsButtonPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemMediaTransportControlsButtonPressedEventArgs(ISystemMediaTransportControlsButtonPressedEventArgs const&) noexcept = default;
        ISystemMediaTransportControlsButtonPressedEventArgs(ISystemMediaTransportControlsButtonPressedEventArgs&&) noexcept = default;
        ISystemMediaTransportControlsButtonPressedEventArgs& operator=(ISystemMediaTransportControlsButtonPressedEventArgs const&) & noexcept = default;
        ISystemMediaTransportControlsButtonPressedEventArgs& operator=(ISystemMediaTransportControlsButtonPressedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemMediaTransportControlsDisplayUpdater :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsDisplayUpdater>
    {
        ISystemMediaTransportControlsDisplayUpdater(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsDisplayUpdater(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemMediaTransportControlsDisplayUpdater(ISystemMediaTransportControlsDisplayUpdater const&) noexcept = default;
        ISystemMediaTransportControlsDisplayUpdater(ISystemMediaTransportControlsDisplayUpdater&&) noexcept = default;
        ISystemMediaTransportControlsDisplayUpdater& operator=(ISystemMediaTransportControlsDisplayUpdater const&) & noexcept = default;
        ISystemMediaTransportControlsDisplayUpdater& operator=(ISystemMediaTransportControlsDisplayUpdater&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemMediaTransportControlsPropertyChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsPropertyChangedEventArgs>
    {
        ISystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemMediaTransportControlsPropertyChangedEventArgs(ISystemMediaTransportControlsPropertyChangedEventArgs const&) noexcept = default;
        ISystemMediaTransportControlsPropertyChangedEventArgs(ISystemMediaTransportControlsPropertyChangedEventArgs&&) noexcept = default;
        ISystemMediaTransportControlsPropertyChangedEventArgs& operator=(ISystemMediaTransportControlsPropertyChangedEventArgs const&) & noexcept = default;
        ISystemMediaTransportControlsPropertyChangedEventArgs& operator=(ISystemMediaTransportControlsPropertyChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemMediaTransportControlsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsStatics>
    {
        ISystemMediaTransportControlsStatics(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemMediaTransportControlsStatics(ISystemMediaTransportControlsStatics const&) noexcept = default;
        ISystemMediaTransportControlsStatics(ISystemMediaTransportControlsStatics&&) noexcept = default;
        ISystemMediaTransportControlsStatics& operator=(ISystemMediaTransportControlsStatics const&) & noexcept = default;
        ISystemMediaTransportControlsStatics& operator=(ISystemMediaTransportControlsStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemMediaTransportControlsTimelineProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsTimelineProperties>
    {
        ISystemMediaTransportControlsTimelineProperties(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsTimelineProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemMediaTransportControlsTimelineProperties(ISystemMediaTransportControlsTimelineProperties const&) noexcept = default;
        ISystemMediaTransportControlsTimelineProperties(ISystemMediaTransportControlsTimelineProperties&&) noexcept = default;
        ISystemMediaTransportControlsTimelineProperties& operator=(ISystemMediaTransportControlsTimelineProperties const&) & noexcept = default;
        ISystemMediaTransportControlsTimelineProperties& operator=(ISystemMediaTransportControlsTimelineProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoDisplayProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoDisplayProperties>
    {
        IVideoDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IVideoDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoDisplayProperties(IVideoDisplayProperties const&) noexcept = default;
        IVideoDisplayProperties(IVideoDisplayProperties&&) noexcept = default;
        IVideoDisplayProperties& operator=(IVideoDisplayProperties const&) & noexcept = default;
        IVideoDisplayProperties& operator=(IVideoDisplayProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoDisplayProperties2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoDisplayProperties2>
    {
        IVideoDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
        IVideoDisplayProperties2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoDisplayProperties2(IVideoDisplayProperties2 const&) noexcept = default;
        IVideoDisplayProperties2(IVideoDisplayProperties2&&) noexcept = default;
        IVideoDisplayProperties2& operator=(IVideoDisplayProperties2 const&) & noexcept = default;
        IVideoDisplayProperties2& operator=(IVideoDisplayProperties2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoEffectsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectsStatics>
    {
        IVideoEffectsStatics(std::nullptr_t = nullptr) noexcept {}
        IVideoEffectsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoEffectsStatics(IVideoEffectsStatics const&) noexcept = default;
        IVideoEffectsStatics(IVideoEffectsStatics&&) noexcept = default;
        IVideoEffectsStatics& operator=(IVideoEffectsStatics const&) & noexcept = default;
        IVideoEffectsStatics& operator=(IVideoEffectsStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrame>,
        impl::require<winrt::Windows::Media::IVideoFrame, winrt::Windows::Foundation::IClosable, winrt::Windows::Media::IMediaFrame>
    {
        IVideoFrame(std::nullptr_t = nullptr) noexcept {}
        IVideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoFrame(IVideoFrame const&) noexcept = default;
        IVideoFrame(IVideoFrame&&) noexcept = default;
        IVideoFrame& operator=(IVideoFrame const&) & noexcept = default;
        IVideoFrame& operator=(IVideoFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoFrame2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrame2>
    {
        IVideoFrame2(std::nullptr_t = nullptr) noexcept {}
        IVideoFrame2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoFrame2(IVideoFrame2 const&) noexcept = default;
        IVideoFrame2(IVideoFrame2&&) noexcept = default;
        IVideoFrame2& operator=(IVideoFrame2 const&) & noexcept = default;
        IVideoFrame2& operator=(IVideoFrame2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoFrameFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrameFactory>
    {
        IVideoFrameFactory(std::nullptr_t = nullptr) noexcept {}
        IVideoFrameFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoFrameFactory(IVideoFrameFactory const&) noexcept = default;
        IVideoFrameFactory(IVideoFrameFactory&&) noexcept = default;
        IVideoFrameFactory& operator=(IVideoFrameFactory const&) & noexcept = default;
        IVideoFrameFactory& operator=(IVideoFrameFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVideoFrameStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrameStatics>
    {
        IVideoFrameStatics(std::nullptr_t = nullptr) noexcept {}
        IVideoFrameStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVideoFrameStatics(IVideoFrameStatics const&) noexcept = default;
        IVideoFrameStatics(IVideoFrameStatics&&) noexcept = default;
        IVideoFrameStatics& operator=(IVideoFrameStatics const&) & noexcept = default;
        IVideoFrameStatics& operator=(IVideoFrameStatics&&) & noexcept = default;
    };
}
#endif