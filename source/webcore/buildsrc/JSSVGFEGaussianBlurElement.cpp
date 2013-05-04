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


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFEGaussianBlurElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEGaussianBlurElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFEGaussianBlurElementTableEntries[] =
{
    { "stdDeviationY", JSSVGFEGaussianBlurElement::StdDeviationYAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "width", JSSVGFEGaussianBlurElement::WidthAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "x", JSSVGFEGaussianBlurElement::XAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "stdDeviationX", JSSVGFEGaussianBlurElement::StdDeviationXAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "in1", JSSVGFEGaussianBlurElement::In1AttrNum, DontDelete|ReadOnly, 0, &JSSVGFEGaussianBlurElementTableEntries[10] },
    { "height", JSSVGFEGaussianBlurElement::HeightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "result", JSSVGFEGaussianBlurElement::ResultAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "y", JSSVGFEGaussianBlurElement::YAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEGaussianBlurElementTableEntries[11] },
    { "className", JSSVGFEGaussianBlurElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, &JSSVGFEGaussianBlurElementTableEntries[12] },
    { "style", JSSVGFEGaussianBlurElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFEGaussianBlurElementTable = 
{
    2, 13, JSSVGFEGaussianBlurElementTableEntries, 10
};

/* Hash table for prototype */

static const HashEntry JSSVGFEGaussianBlurElementPrototypeTableEntries[] =
{
    { "getPresentationAttribute", JSSVGFEGaussianBlurElement::GetPresentationAttributeFuncNum, DontDelete|Function, 1, 0 },
    { "setStdDeviation", JSSVGFEGaussianBlurElement::SetStdDeviationFuncNum, DontDelete|Function, 2, 0 }
};

static const HashTable JSSVGFEGaussianBlurElementPrototypeTable = 
{
    2, 2, JSSVGFEGaussianBlurElementPrototypeTableEntries, 2
};

const ClassInfo JSSVGFEGaussianBlurElementPrototype::info = { "SVGFEGaussianBlurElementPrototype", 0, &JSSVGFEGaussianBlurElementPrototypeTable, 0 };

JSObject* JSSVGFEGaussianBlurElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFEGaussianBlurElementPrototype>(exec, "[[JSSVGFEGaussianBlurElement.prototype]]");
}

bool JSSVGFEGaussianBlurElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGFEGaussianBlurElementPrototypeFunction, JSObject>(exec, &JSSVGFEGaussianBlurElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFEGaussianBlurElement::info = { "SVGFEGaussianBlurElement", &JSSVGElement::info, &JSSVGFEGaussianBlurElementTable, 0 };

JSSVGFEGaussianBlurElement::JSSVGFEGaussianBlurElement(ExecState* exec, SVGFEGaussianBlurElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFEGaussianBlurElementPrototype::self(exec));
}

bool JSSVGFEGaussianBlurElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEGaussianBlurElement, JSSVGElement>(exec, &JSSVGFEGaussianBlurElementTable, this, propertyName, slot);
}

JSValue* JSSVGFEGaussianBlurElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        return toJS(exec, obj.get(), imp);
    }
    case StdDeviationXAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationXAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StdDeviationYAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationYAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case XAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ResultAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}

JSValue* JSSVGFEGaussianBlurElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGFEGaussianBlurElement::info))
      return throwError(exec, TypeError);

    JSSVGFEGaussianBlurElement* castedThisObj = static_cast<JSSVGFEGaussianBlurElement*>(thisObj);
    SVGFEGaussianBlurElement* imp = static_cast<SVGFEGaussianBlurElement*>(castedThisObj->impl());

    switch (id) {
    case JSSVGFEGaussianBlurElement::SetStdDeviationFuncNum: {
        float stdDeviationX = args[0]->toFloat(exec);
        float stdDeviationY = args[1]->toFloat(exec);

        imp->setStdDeviation(stdDeviationX, stdDeviationY);
        return jsUndefined();
    }
    case JSSVGFEGaussianBlurElement::GetPresentationAttributeFuncNum: {
        String name = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
        return result;
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)