﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "Layout.g.h"
#include "NonVirtualizingLayout.g.h"

class NonVirtualizingLayout :
    public winrt::implementation::NonVirtualizingLayoutT<NonVirtualizingLayout, Layout>
{
public:
#pragma region INonVirtualizingLayoutOverrides
    virtual void InitializeForContextCore(winrt::LayoutContext const& context);
    virtual void UninitializeForContextCore(winrt::LayoutContext const& context);

    virtual winrt::Size MeasureOverride(winrt::LayoutContext const& context, winrt::Size const& availableSize);
    virtual winrt::Size ArrangeOverride(winrt::LayoutContext const& context, winrt::Size const& finalSize);
#pragma endregion

};
