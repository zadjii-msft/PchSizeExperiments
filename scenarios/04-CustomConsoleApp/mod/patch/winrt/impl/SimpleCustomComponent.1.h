// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_SimpleCustomComponent_1_H
#define WINRT_SimpleCustomComponent_1_H
#include "winrt/impl/SimpleCustomComponent.0.h"
WINRT_EXPORT namespace winrt::SimpleCustomComponent
{
    struct __declspec(empty_bases) IClass :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IClass>
    {
        IClass(std::nullptr_t = nullptr) noexcept {}
        IClass(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif