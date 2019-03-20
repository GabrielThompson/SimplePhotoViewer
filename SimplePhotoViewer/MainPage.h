﻿#pragma once

#include "MainPage.g.h"

namespace winrt::SimplePhotoViewer::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> ImageSkus();


		//default ClickHandler generated by BlankApp
		//delete this
		void ClickHandler(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
    };
}

namespace winrt::SimplePhotoViewer::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
