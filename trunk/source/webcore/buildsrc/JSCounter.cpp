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

#include "JSCounter.h"

#include <wtf/GetPtr.h>

#include "Counter.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSCounterTableEntries[] =
{
    { "identifier", JSCounter::IdentifierAttrNum, DontDelete|ReadOnly, 0, &JSCounterTableEntries[4] },
    { "constructor", JSCounter::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { "separator", JSCounter::SeparatorAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "listStyle", JSCounter::ListStyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSCounterTable = 
{
    2, 5, JSCounterTableEntries, 4
};

/* Hash table for constructor */

static const HashEntry JSCounterConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSCounterConstructorTable = 
{
    2, 1, JSCounterConstructorTableEntries, 1
};

class JSCounterConstructor : public DOMObject {
public:
    JSCounterConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSCounterPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCounterConstructor::info = { "CounterConstructor", 0, &JSCounterConstructorTable, 0 };

bool JSCounterConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCounterConstructor, DOMObject>(exec, &JSCounterConstructorTable, this, propertyName, slot);
}

JSValue* JSCounterConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSCounterPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSCounterPrototypeTable = 
{
    2, 1, JSCounterPrototypeTableEntries, 1
};

const ClassInfo JSCounterPrototype::info = { "CounterPrototype", 0, &JSCounterPrototypeTable, 0 };

JSObject* JSCounterPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCounterPrototype>(exec, "[[JSCounter.prototype]]");
}

const ClassInfo JSCounter::info = { "Counter", 0, &JSCounterTable, 0 };

JSCounter::JSCounter(ExecState* exec, Counter* impl)
    : m_impl(impl)
{
    setPrototype(JSCounterPrototype::self(exec));
}

JSCounter::~JSCounter()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSCounter::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCounter, KJS::DOMObject>(exec, &JSCounterTable, this, propertyName, slot);
}

JSValue* JSCounter::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case IdentifierAttrNum: {
        Counter* imp = static_cast<Counter*>(impl());

        return jsString(imp->identifier());
    }
    case ListStyleAttrNum: {
        Counter* imp = static_cast<Counter*>(impl());

        return jsString(imp->listStyle());
    }
    case SeparatorAttrNum: {
        Counter* imp = static_cast<Counter*>(impl());

        return jsString(imp->separator());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSCounter::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSCounterConstructor>(exec, "[[Counter.constructor]]");
}
KJS::JSValue* toJS(KJS::ExecState* exec, Counter* obj)
{
    return KJS::cacheDOMObject<Counter, JSCounter>(exec, obj);
}
Counter* toCounter(KJS::JSValue* val)
{
    return val->isObject(&JSCounter::info) ? static_cast<JSCounter*>(val)->impl() : 0;
}

}
