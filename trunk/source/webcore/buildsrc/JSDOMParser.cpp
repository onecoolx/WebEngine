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

#include "JSDOMParser.h"

#include <wtf/GetPtr.h>

#include "DOMParser.h"
#include "Document.h"
#include "JSDocument.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSDOMParserTableEntries[] =
{
    { "constructor", JSDOMParser::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSDOMParserTable = 
{
    2, 1, JSDOMParserTableEntries, 1
};

/* Hash table for constructor */

static const HashEntry JSDOMParserConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSDOMParserConstructorTable = 
{
    2, 1, JSDOMParserConstructorTableEntries, 1
};

class JSDOMParserConstructor : public DOMObject {
public:
    JSDOMParserConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSDOMParserPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
    virtual bool implementsConstruct() const { return true; }
    virtual JSObject* construct(ExecState* exec, const List& args) { return static_cast<JSObject*>(toJS(exec, new DOMParser)); }
};

const ClassInfo JSDOMParserConstructor::info = { "DOMParserConstructor", 0, &JSDOMParserConstructorTable, 0 };

bool JSDOMParserConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMParserConstructor, DOMObject>(exec, &JSDOMParserConstructorTable, this, propertyName, slot);
}

JSValue* JSDOMParserConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSDOMParserPrototypeTableEntries[] =
{
    { "parseFromString", JSDOMParser::ParseFromStringFuncNum, DontDelete|Function, 2, 0 }
};

static const HashTable JSDOMParserPrototypeTable = 
{
    2, 1, JSDOMParserPrototypeTableEntries, 1
};

const ClassInfo JSDOMParserPrototype::info = { "DOMParserPrototype", 0, &JSDOMParserPrototypeTable, 0 };

JSObject* JSDOMParserPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSDOMParserPrototype>(exec, "[[JSDOMParser.prototype]]");
}

bool JSDOMParserPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSDOMParserPrototypeFunction, JSObject>(exec, &JSDOMParserPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSDOMParser::info = { "DOMParser", 0, &JSDOMParserTable, 0 };

JSDOMParser::JSDOMParser(ExecState* exec, DOMParser* impl)
    : m_impl(impl)
{
    setPrototype(JSDOMParserPrototype::self(exec));
}

JSDOMParser::~JSDOMParser()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSDOMParser::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMParser, KJS::DOMObject>(exec, &JSDOMParserTable, this, propertyName, slot);
}

JSValue* JSDOMParser::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSDOMParser::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSDOMParserConstructor>(exec, "[[DOMParser.constructor]]");
}
JSValue* JSDOMParserPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSDOMParser::info))
      return throwError(exec, TypeError);

    JSDOMParser* castedThisObj = static_cast<JSDOMParser*>(thisObj);
    DOMParser* imp = static_cast<DOMParser*>(castedThisObj->impl());

    switch (id) {
    case JSDOMParser::ParseFromStringFuncNum: {
        String str = args[0]->toString(exec);
        String contentType = args[1]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->parseFromString(str, contentType)));
        return result;
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, DOMParser* obj)
{
    return KJS::cacheDOMObject<DOMParser, JSDOMParser>(exec, obj);
}
DOMParser* toDOMParser(KJS::JSValue* val)
{
    return val->isObject(&JSDOMParser::info) ? static_cast<JSDOMParser*>(val)->impl() : 0;
}

}
