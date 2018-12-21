#pragma once
#include <Vector.h>
#include "NavigationViewItem.h"

class NavigationViewNode
{
public:
    NavigationViewNode(const ITrackerHandleManager* m_owner);
    ~NavigationViewNode();

    void Depth(int depth) { m_depth = depth; };
    int Depth() { return m_depth; };

    void IsExpanded(bool isExpanded) { m_isExpanded = isExpanded; };
    bool IsExpanded() { return m_isExpanded; };

    void IsSelected(bool isSelected) { m_isSelected = isSelected; };
    bool IsSelected() { return m_isSelected; };

    void IsChildSelected(bool isChildSelected) { m_isChildSelected = isChildSelected; };
    bool IsChildSelected() { return m_isChildSelected; };

    void HasUnrealizedChildren(bool hasUnrealizedChildren) { m_hasUnrealizedChildren = hasUnrealizedChildren; };
    bool HasUnrealizedChildren() { return m_hasUnrealizedChildren; };

    void Content(winrt::IInspectable const& content) { m_content.set(content); };
    winrt::IInspectable Content() { return m_content.get(); };

private:

    tracker_ref<winrt::IInspectable> m_content;
    tracker_ref<winrt::IVector<winrt::IInspectable>> m_menuItems;
    tracker_ref<winrt::IInspectable> m_menuItemsSource;

    NavigationViewNode* m_parent;
    std::vector<NavigationViewNode*> m_children;

    int m_depth{ 0 };
    bool m_isExpanded{ false };
    bool m_isSelected{ false };
    bool m_isChildSelected{ false };
    bool m_hasUnrealizedChildren{ false };
};
