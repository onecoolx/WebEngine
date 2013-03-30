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
#include "JSSVGColor.h"

#include <wtf/GetPtr.h>

#include "SVGColor.h"
#include "kjs_css.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGColorTableEntries[] =
{
    { "rgbColor", JSSVGColor::RgbColorAttrNum, DontDelete|ReadOnly, 0, &JSSVGColorTableEntries[3] },
    { 0, 0, 0, 0, 0 },
    { "colorType", JSSVGColor::ColorTypeAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "constructor", JSSVGColor::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSSVGColorTable = 
{
    2, 4, JSSVGColorTableEntries, 3
};

/* Hash table for constructor */

static const HashEntry JSSVGColorConstructorTableEntries[] =
{
    { "SVG_COLORTYPE_UNKNOWN", SVGColor::SVG_COLORTYPE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { "SVG_COLORTYPE_RGBCOLOR_ICCCOLOR", SVGColor::SVG_COLORTYPE_RGBCOLOR_ICCCOLOR, DontDelete|ReadOnly, 0, 0 },
    { "SVG_COLORTYPE_CURRENTCOLOR", SVGColor::SVG_COLORTYPE_CURRENTCOLOR, DontDelete|ReadOnly, 0, 0 },
    { "SVG_COLORTYPE_RGBCOLOR", SVGColor::SVG_COLORTYPE_RGBCOLOR, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGColorConstructorTable = 
{
    2, 4, JSSVGColorConstructorTableEntries, 4
};

class JSSVGColorConstructor : public DOMObject {
public:
    JSSVGColorConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSSVGColorPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGColorConstructor::info = { "SVGColorConstructor", 0, &JSSVGColorConstructorTable, 0 };

bool JSSVGColorConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGColorConstructor, DOMObject>(exec, &JSSVGColorConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGColorConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSSVGColorPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_COLORTYPE_RGBCOLOR", SVGColor::SVG_COLORTYPE_RGBCOLOR, DontDelete|ReadOnly, 0, &JSSVGColorPrototypeTableEntries[8] },
    { "SVG_COLORTYPE_RGBCOLOR_ICCCOLOR", SVGColor::SVG_COLORTYPE_RGBCOLOR_ICCCOLOR, DontDelete|ReadOnly, 0, &JSSVGColorPrototypeTableEntries[7] },
    { "SVG_COLORTYPE_UNKNOWN", SVGColor::SVG_COLORTYPE_UNKNOWN, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "setColor", JSSVGColor::SetColorFuncNum, DontDelete|Function, 3, 0 },
    { "SVG_COLORTYPE_CURRENTCOLOR", SVGColor::SVG_COLORTYPE_CURRENTCOLOR, DontDelete|ReadOnly, 0, 0 },
    { "setRGBColor", JSSVGColor::SetRGBColorFuncNum, DontDelete|Function, 1, &JSSVGColorPrototypeTableEntries[9] },
    { "setRGBColorICCColor", JSSVGColor::SetRGBColorICCColorFuncNum, DontDelete|Function, 2, 0 }
};

static const HashTable JSSVGColorPrototypeTable = 
{
    2, 10, JSSVGColorPrototypeTableEntries, 7
};

const ClassInfo JSSVGColorPrototype::info = { "SVGColorPrototype", 0, &JSSVGColorPrototypeTable, 0 };

JSObject* JSSVGColorPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGColorPrototype>(exec, "[[JSSVGColor.prototype]]");
}

bool JSSVGColorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGColorPrototypeFunction, JSSVGColorPrototype, JSObject>(exec, &JSSVGColorPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGColorPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGColor::info = { "SVGColor", &JSCSSValue::info, &JSSVGColorTable, 0 };

JSSVGColor::JSSVGColor(ExecState* exec, SVGColor* impl)
    : JSCSSValue(exec, impl)
{
    setPrototype(JSSVGColorPrototype::self(exec));
}

bool JSSVGColor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGColor, JSCSSValue>(exec, &JSSVGColorTable, this, propertyName, slot);
}

JSValue* JSSVGColor::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ColorTypeAttrNum: {
        SVGColor* imp = static_cast<SVGColor*>(impl());

        return jsNumber(imp->colorType());
    }
    case RgbColorAttrNum: {
        SVGColor* imp = static_cast<SVGColor*>(impl());

        return getJSRGBColor(exec, imp->rgbColor());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSSVGColor::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGColorConstructor>(exec, "[[SVGColor.constructor]]");
}
JSValue* JSSVGColorPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGColor::info))
      return throwError(exec, TypeError);

    JSSVGColor* castedThisObj = static_cast<JSSVGColor*>(thisObj);
    SVGColor* imp = static_cast<SVGColor*>(castedThisObj->impl());

    switch (id) {
    case JSSVGColor::SetRGBColorFuncNum: {
        ExceptionCode ec = 0;
        String rgbColor = args[0]->toString(exec);

        imp->setRGBColor(rgbColor, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSSVGColor::SetRGBColorICCColorFuncNum: {
        ExceptionCode ec = 0;
        String rgbColor = args[0]->toString(exec);
        String iccColor = args[1]->toString(exec);

        imp->setRGBColorICCColor(rgbColor, iccColor, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    case JSSVGColor::SetColorFuncNum: {
        ExceptionCode ec = 0;
        unsigned short colorType = args[0]->toInt32(exec);
        String rgbColor = args[1]->toString(exec);
        String iccColor = args[2]->toString(exec);

        imp->setColor(colorType, rgbColor, iccColor, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG)
