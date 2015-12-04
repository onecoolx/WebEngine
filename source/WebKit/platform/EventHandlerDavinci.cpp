/*
 * EventHandlerDavinci.cpp: EventHandler implements by davinci.
 *
 * Copyright(C) 2015 Zhang Ji Peng (onecoolx@gmail.com)
 *
 */

#include "config.h"
#include "EventHandler.h"

#include "Clipboard.h"
#include "EventNames.h"
#include "FloatPoint.h"
#include "FocusController.h"
#include "Frame.h"
#include "FrameView.h"
#include "KeyboardEvent.h"
#include "MouseEventWithHitTestResults.h"
#include "NotImplemented.h"
#include "Page.h"
#include "PlatformKeyboardEvent.h"
#include "PlatformWheelEvent.h"
#include "RenderWidget.h"

namespace WebCore {

#if ENABLE(DRAG_SUPPORT)
const double EventHandler::TextDragDelay = 0.0;
#endif

bool EventHandler::tabsToAllFormControls(KeyboardEvent*) const
{
    return true;
}

void EventHandler::focusDocumentView()
{
    if (Page* page = m_frame->page())
        page->focusController().setFocusedFrame(m_frame);
}

bool EventHandler::passWidgetMouseDownEventToWidget(const MouseEventWithHitTestResults& event)
{
    RenderObject* target = event.targetNode() ? event.targetNode()->renderer() : 0;

    if (!target || !target->isWidget())
        return false;

    return passMouseDownEventToWidget(static_cast<RenderWidget*>(target)->widget());
}

bool EventHandler::passWidgetMouseDownEventToWidget(RenderWidget* renderWidget)
{
    return passMouseDownEventToWidget(renderWidget->widget());
}

bool EventHandler::passMouseDownEventToWidget(Widget*)
{
    notImplemented();
    return false;
}

bool EventHandler::eventActivatedView(const PlatformMouseEvent&) const
{
    notImplemented();
    return false;
}

bool EventHandler::passWheelEventToWidget(const PlatformWheelEvent& event, Widget* widget)
{
    ASSERT(widget);
    if (!widget->isFrameView())
        return false;

    return toFrameView(widget)->frame().eventHandler().handleWheelEvent(event);
}

#if ENABLE(DRAG_SUPPORT)
PassRefPtr<Clipboard> EventHandler::createDraggingClipboard() const
{
    return Clipboard::createForDragAndDrop();
}
#endif

bool EventHandler::passMousePressEventToSubframe(MouseEventWithHitTestResults& mev, Frame* subframe)
{
    subframe->eventHandler().handleMousePressEvent(mev.event());
    return true;
}

bool EventHandler::passMouseMoveEventToSubframe(MouseEventWithHitTestResults& mev, Frame* subframe, HitTestResult* hoveredNode)
{
    subframe->eventHandler().handleMouseMoveEvent(mev.event(), hoveredNode);
    return true;
}

bool EventHandler::passMouseReleaseEventToSubframe(MouseEventWithHitTestResults& mev, Frame* subframe)
{
    subframe->eventHandler().handleMouseReleaseEvent(mev.event());
    return true;
}

unsigned EventHandler::accessKeyModifiers()
{
    return PlatformEvent::AltKey;
}
}
