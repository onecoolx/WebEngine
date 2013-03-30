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

#include "JSHTMLDocument.h"

#include <wtf/GetPtr.h>

#include "AtomicString.h"
#include "Element.h"
#include "HTMLCollection.h"
#include "HTMLDocument.h"
#include "JSElement.h"
#include "JSHTMLCollection.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLDocumentTableEntries[] =
{
    { "bgColor", JSHTMLDocument::BgColorAttrNum, DontDelete, 0, 0 },
    { "width", JSHTMLDocument::WidthAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "height", JSHTMLDocument::HeightAttrNum, DontDelete|ReadOnly, 0, &JSHTMLDocumentTableEntries[16] },
    { "plugins", JSHTMLDocument::PluginsAttrNum, DontDelete|ReadOnly, 0, &JSHTMLDocumentTableEntries[15] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "dir", JSHTMLDocument::DirAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "embeds", JSHTMLDocument::EmbedsAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "vlinkColor", JSHTMLDocument::VlinkColorAttrNum, DontDelete, 0, 0 },
    { "alinkColor", JSHTMLDocument::AlinkColorAttrNum, DontDelete, 0, 0 },
    { "compatMode", JSHTMLDocument::CompatModeAttrNum, DontDelete|ReadOnly, 0, &JSHTMLDocumentTableEntries[19] },
    { "scripts", JSHTMLDocument::ScriptsAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "all", JSHTMLDocument::AllAttrNum, 0, 0, &JSHTMLDocumentTableEntries[17] },
    { "designMode", JSHTMLDocument::DesignModeAttrNum, DontDelete, 0, &JSHTMLDocumentTableEntries[18] },
    { "fgColor", JSHTMLDocument::FgColorAttrNum, DontDelete, 0, 0 },
    { "linkColor", JSHTMLDocument::LinkColorAttrNum, DontDelete, 0, 0 },
    { "constructor", JSHTMLDocument::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLDocumentTable = 
{
    2, 20, JSHTMLDocumentTableEntries, 15
};

/* Hash table for constructor */

static const HashEntry JSHTMLDocumentConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLDocumentConstructorTable = 
{
    2, 1, JSHTMLDocumentConstructorTableEntries, 1
};

class JSHTMLDocumentConstructor : public DOMObject {
public:
    JSHTMLDocumentConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLDocumentPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLDocumentConstructor::info = { "HTMLDocumentConstructor", 0, &JSHTMLDocumentConstructorTable, 0 };

bool JSHTMLDocumentConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLDocumentConstructor, DOMObject>(exec, &JSHTMLDocumentConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLDocumentConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLDocumentPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "getElementById", JSHTMLDocument::GetElementByIdFuncNum, DontDelete|Function, 1, 0 },
    { "close", JSHTMLDocument::CloseFuncNum, DontDelete|Function, 0, 0 },
    { "clear", JSHTMLDocument::ClearFuncNum, DontDelete|Function, 0, &JSHTMLDocumentPrototypeTableEntries[10] },
    { "releaseEvents", JSHTMLDocument::ReleaseEventsFuncNum, DontDelete|Function, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "open", JSHTMLDocument::OpenFuncNum, DontDelete|Function, 0, &JSHTMLDocumentPrototypeTableEntries[8] },
    { "write", JSHTMLDocument::WriteFuncNum, DontDelete|Function, 1, &JSHTMLDocumentPrototypeTableEntries[9] },
    { "writeln", JSHTMLDocument::WritelnFuncNum, DontDelete|Function, 1, 0 },
    { "captureEvents", JSHTMLDocument::CaptureEventsFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSHTMLDocumentPrototypeTable = 
{
    2, 11, JSHTMLDocumentPrototypeTableEntries, 8
};

const ClassInfo JSHTMLDocumentPrototype::info = { "HTMLDocumentPrototype", 0, &JSHTMLDocumentPrototypeTable, 0 };

JSObject* JSHTMLDocumentPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLDocumentPrototype>(exec, "[[JSHTMLDocument.prototype]]");
}

bool JSHTMLDocumentPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSHTMLDocumentPrototypeFunction, JSObject>(exec, &JSHTMLDocumentPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLDocument::info = { "HTMLDocument", &JSDocument::info, &JSHTMLDocumentTable, 0 };

JSHTMLDocument::JSHTMLDocument(ExecState* exec, HTMLDocument* impl)
    : JSDocument(exec, impl)
{
    setPrototype(JSHTMLDocumentPrototype::self(exec));
}

bool JSHTMLDocument::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (canGetItemsForName(exec, static_cast<HTMLDocument*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLDocument, JSDocument>(exec, &JSHTMLDocumentTable, this, propertyName, slot);
}

JSValue* JSHTMLDocument::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case EmbedsAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return toJS(exec, WTF::getPtr(imp->embeds()));
    }
    case PluginsAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return toJS(exec, WTF::getPtr(imp->plugins()));
    }
    case ScriptsAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return toJS(exec, WTF::getPtr(imp->scripts()));
    }
    case AllAttrNum: {
        return all(exec);
    }
    case WidthAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsNumber(imp->width());
    }
    case HeightAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsNumber(imp->height());
    }
    case DirAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->dir());
    }
    case DesignModeAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->designMode());
    }
    case CompatModeAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->compatMode());
    }
    case BgColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->bgColor());
    }
    case FgColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->fgColor());
    }
    case AlinkColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->alinkColor());
    }
    case LinkColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->linkColor());
    }
    case VlinkColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        return jsString(imp->vlinkColor());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLDocument::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLDocument, JSDocument>(exec, propertyName, value, attr, &JSHTMLDocumentTable, this);
}

void JSHTMLDocument::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AllAttrNum: {
        setAll(exec, value);
        break;
    }
    case DirAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        imp->setDir(valueToStringWithNullCheck(exec, value));
        break;
    }
    case DesignModeAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        imp->setDesignMode(valueToStringWithNullCheck(exec, value));
        break;
    }
    case BgColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        imp->setBgColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case FgColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        imp->setFgColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AlinkColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        imp->setAlinkColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case LinkColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        imp->setLinkColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case VlinkColorAttrNum: {
        HTMLDocument* imp = static_cast<HTMLDocument*>(impl());

        imp->setVlinkColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLDocument::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLDocumentConstructor>(exec, "[[HTMLDocument.constructor]]");
}
JSValue* JSHTMLDocumentPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHTMLDocument::info))
      return throwError(exec, TypeError);

    JSHTMLDocument* castedThisObj = static_cast<JSHTMLDocument*>(thisObj);
    HTMLDocument* imp = static_cast<HTMLDocument*>(castedThisObj->impl());

    switch (id) {
    case JSHTMLDocument::OpenFuncNum: {
        return castedThisObj->open(exec, args);
    }
    case JSHTMLDocument::CloseFuncNum: {

        imp->close();
        return jsUndefined();
    }
    case JSHTMLDocument::WriteFuncNum: {
        return castedThisObj->write(exec, args);
    }
    case JSHTMLDocument::WritelnFuncNum: {
        return castedThisObj->writeln(exec, args);
    }
    case JSHTMLDocument::GetElementByIdFuncNum: {
        String elementId = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getElementById(elementId)));
        return result;
    }
    case JSHTMLDocument::ClearFuncNum: {
        return castedThisObj->clear(exec, args);
    }
    case JSHTMLDocument::CaptureEventsFuncNum: {

        imp->captureEvents();
        return jsUndefined();
    }
    case JSHTMLDocument::ReleaseEventsFuncNum: {

        imp->releaseEvents();
        return jsUndefined();
    }
    }
    return 0;
}

}
