﻿#include "pch.h"
#include "ImageSku.h"

namespace winrt::SimplePhotoViewer::implementation
{
    ImageSku::ImageSku(Windows::Storage::FileProperties::ImageProperties const& imageProps, Windows::Storage::StorageFile const& imageFile, hstring const& name, hstring const& type, Windows::UI::Xaml::Media::Imaging::BitmapImage const& imageThumbnail, hstring const& nameWithType)
    {
        throw hresult_not_implemented();
    }

    Windows::Storage::StorageFile ImageSku::ImageFile()
    {
        throw hresult_not_implemented();
    }

    Windows::Storage::FileProperties::ImageProperties ImageSku::ImageProperties()
    {
        throw hresult_not_implemented();
    }

    hstring ImageSku::ImageName()
    {
        throw hresult_not_implemented();
    }

    hstring ImageSku::ImageFileType()
    {
        throw hresult_not_implemented();
    }

    hstring ImageSku::ImageNameWithType()
    {
        throw hresult_not_implemented();
    }

    Windows::UI::Xaml::Media::Imaging::BitmapImage ImageSku::ImageThumbnail()
    {
        throw hresult_not_implemented();
    }

    Windows::UI::Xaml::Media::Imaging::BitmapImage ImageSku::ImageContent()
    {
        throw hresult_not_implemented();
    }

    void ImageSku::ImageContent(Windows::UI::Xaml::Media::Imaging::BitmapImage const& value)
    {
        throw hresult_not_implemented();
    }

    winrt::event_token ImageSku::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        throw hresult_not_implemented();
    }

    void ImageSku::PropertyChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}
