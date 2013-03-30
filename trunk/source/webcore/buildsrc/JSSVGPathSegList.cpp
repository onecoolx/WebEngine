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


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGPathSegList.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGPathSegListTableEntries[] =
{
    { "numberOfItems", JSSVGPathSegList::NumberOfItemsAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGPathSegListTable = 
{
    2, 1, JSSVGPathSegListTableEntries, 1
};

/* Hash table for prototype */

static const HashEntry JSSVGPathSegListPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "clear", JSSVGPathSegList::ClearFuncNum, DontDelete|Function, 0, &JSSVGPathSegListPrototypeTableEntries[9] },
    { "getItem", JSSVGPathSegList::GetItemFuncNum, DontDelete|Function, 1, &JSSVGPathSegListPrototypeTableEntries[7] },
    { "insertItemBefore", JSSVGPathSegList::InsertItemBeforeFuncNum, DontDelete|Function, 2, &JSSVGPathSegListPrototypeTableEntries[8] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "initialize", JSSVGPathSegList::InitializeFuncNum, DontDelete|Function, 1, 0 },
    { "replaceItem", JSSVGPathSegList::ReplaceItemFuncNum, DontDelete|Function, 2, 0 },
    { "removeItem", JSSVGPathSegList::RemoveItemFuncNum, DontDelete|Function, 1, 0 },
    { "appendItem", JSSVGPathSegList::AppendItemFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSSVGPathSegListPrototypeTable = 
{
    2, 10, JSSVGPathSegListPrototypeTableEntries, 7
};

const ClassInfo JSSVGPathSegListPrototype::info = { "SVGPathSegListPrototype", 0, &JSSVGPathSegListPrototypeTable, 0 };

JSObject* JSSVGPathSegListPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGPathSegListPrototype>(exec, "[[JSSVGPathSegList.prototype]]");
}

bool JSSVGPathSegListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGPathSegListPrototypeFunction, JSObject>(exec, &JSSVGPathSegListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGPathSegList::info = { "SVGPathSegList", 0, &JSSVGPathSegListTable, 0 };

JSSVGPathSegList::JSSVGPathSegList(ExecState* exec, SVGPathSegList* impl, SVGElement* context)
    : m_context(context)
    , m_impl(impl)
{
    setPrototype(JSSVGPathSegListPrototype::self(exec));
}

JSSVGPathSegList::~JSSVGPathSegList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGPathSegList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegList, KJS::DOMObject>(exec, &JSSVGPathSegListTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NumberOfItemsAttrNum: {
        SVGPathSegList* imp = static_cast<SVGPathSegList*>(impl());

        return jsNumber(imp->numberOfItems());
    }
    }
    return 0;
}

JSValue* JSSVGPathSegListPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGPathSegList::info))
      return throwError(exec, TypeError);

    JSSVGPathSegList* castedThisObj = static_cast<JSSVGPathSegList*>(thisObj);
    SVGPathSegList* imp = static_cast<SVGPathSegList*>(castedThisObj->impl());

    switch (id) {
    case JSSVGPathSegList::ClearFuncNum: {
        return castedThisObj->clear(exec, args);
    }
    case JSSVGPathSegList::InitializeFuncNum: {
        return castedThisObj->initialize(exec, args);
    }
    case JSSVGPathSegList::GetItemFuncNum: {
        return castedThisObj->getItem(exec, args);
    }
    case JSSVGPathSegList::InsertItemBeforeFuncNum: {
        return castedThisObj->insertItemBefore(exec, args);
    }
    case JSSVGPathSegList::ReplaceItemFuncNum: {
        return castedThisObj->replaceItem(exec, args);
    }
    case JSSVGPathSegList::RemoveItemFuncNum: {
        return castedThisObj->removeItem(exec, args);
    }
    case JSSVGPathSegList::AppendItemFuncNum: {
        return castedThisObj->appendItem(exec, args);
    }
    }
    (void)imp;
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, SVGPathSegList* obj, SVGElement* context)
{
    return KJS::cacheSVGDOMObject<SVGPathSegList, JSSVGPathSegList>(exec, obj, context);
}
SVGPathSegList* toSVGPathSegList(KJS::JSValue* val)
{
    return val->isObject(&JSSVGPathSegList::info) ? static_cast<JSSVGPathSegList*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
