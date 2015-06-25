/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSKeyboardEvent.h"

#include <wtf/GetPtr.h>

#include "ExceptionCode.h"
#include "JSDOMWindow.h"
#include "KeyboardEvent.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSKeyboardEventTableEntries[] =
{
    { "shiftKey", JSKeyboardEvent::ShiftKeyAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "altGraphKey", JSKeyboardEvent::AltGraphKeyAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "keyIdentifier", JSKeyboardEvent::KeyIdentifierAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "altKey", JSKeyboardEvent::AltKeyAttrNum, DontDelete|ReadOnly, 0, &JSKeyboardEventTableEntries[8] },
    { 0, 0, 0, 0, 0 },
    { "keyLocation", JSKeyboardEvent::KeyLocationAttrNum, DontDelete|ReadOnly, 0, &JSKeyboardEventTableEntries[7] },
    { "ctrlKey", JSKeyboardEvent::CtrlKeyAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "metaKey", JSKeyboardEvent::MetaKeyAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSKeyboardEventTable = 
{
    2, 9, JSKeyboardEventTableEntries, 7
};

/* Hash table for prototype */

static const HashEntry JSKeyboardEventPrototypeTableEntries[] =
{
    { "initKeyboardEvent", JSKeyboardEvent::InitKeyboardEventFuncNum, DontDelete|Function, 11, 0 }
};

static const HashTable JSKeyboardEventPrototypeTable = 
{
    2, 1, JSKeyboardEventPrototypeTableEntries, 1
};

const ClassInfo JSKeyboardEventPrototype::info = { "KeyboardEventPrototype", 0, &JSKeyboardEventPrototypeTable, 0 };

JSObject* JSKeyboardEventPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSKeyboardEventPrototype>(exec, "[[JSKeyboardEvent.prototype]]");
}

bool JSKeyboardEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSKeyboardEventPrototypeFunction, JSObject>(exec, &JSKeyboardEventPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSKeyboardEvent::info = { "KeyboardEvent", &JSUIEvent::info, &JSKeyboardEventTable, 0 };

JSKeyboardEvent::JSKeyboardEvent(ExecState* exec, KeyboardEvent* impl)
    : JSUIEvent(exec, impl)
{
    setPrototype(JSKeyboardEventPrototype::self(exec));
}

bool JSKeyboardEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSKeyboardEvent, JSUIEvent>(exec, &JSKeyboardEventTable, this, propertyName, slot);
}

JSValue* JSKeyboardEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case KeyIdentifierAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());

        return jsString(imp->keyIdentifier());
    }
    case KeyLocationAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());

        return jsNumber(imp->keyLocation());
    }
    case CtrlKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());

        return jsBoolean(imp->ctrlKey());
    }
    case ShiftKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());

        return jsBoolean(imp->shiftKey());
    }
    case AltKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());

        return jsBoolean(imp->altKey());
    }
    case MetaKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());

        return jsBoolean(imp->metaKey());
    }
    case AltGraphKeyAttrNum: {
        KeyboardEvent* imp = static_cast<KeyboardEvent*>(impl());

        return jsBoolean(imp->altGraphKey());
    }
    }
    return 0;
}

JSValue* JSKeyboardEventPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSKeyboardEvent::info))
      return throwError(exec, TypeError);

    JSKeyboardEvent* castedThisObj = static_cast<JSKeyboardEvent*>(thisObj);
    KeyboardEvent* imp = static_cast<KeyboardEvent*>(castedThisObj->impl());

    switch (id) {
    case JSKeyboardEvent::InitKeyboardEventFuncNum: {
        AtomicString type = args[0]->toString(exec);
        bool canBubble = args[1]->toBoolean(exec);
        bool cancelable = args[2]->toBoolean(exec);
        DOMWindow* view = toDOMWindow(args[3]);
        String keyIdentifier = args[4]->toString(exec);
        bool keyLocationOk;
        unsigned keyLocation = args[5]->toInt32(exec, keyLocationOk);
        if (!keyLocationOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }
        bool ctrlKey = args[6]->toBoolean(exec);
        bool altKey = args[7]->toBoolean(exec);
        bool shiftKey = args[8]->toBoolean(exec);
        bool metaKey = args[9]->toBoolean(exec);
        bool altGraphKey = args[10]->toBoolean(exec);

        imp->initKeyboardEvent(type, canBubble, cancelable, view, keyIdentifier, keyLocation, ctrlKey, altKey, shiftKey, metaKey, altGraphKey);
        return jsUndefined();
    }
    }
    return 0;
}

}