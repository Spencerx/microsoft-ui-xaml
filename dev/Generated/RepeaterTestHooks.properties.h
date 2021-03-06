// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RepeaterTestHooksProperties
{
public:
    RepeaterTestHooksProperties();



    winrt::event_token BuildTreeCompleted(winrt::TypedEventHandler<winrt::IInspectable, winrt::IInspectable> const& value);
    void BuildTreeCompleted(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::IInspectable, winrt::IInspectable>> m_buildTreeCompletedEventSource;

    static void EnsureProperties();
    static void ClearProperties();
};
