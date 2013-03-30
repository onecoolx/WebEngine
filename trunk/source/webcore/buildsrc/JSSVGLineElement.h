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

#ifndef JSSVGLineElement_H
#define JSSVGLineElement_H


#if ENABLE(SVG)

#include "JSSVGElement.h"

namespace WebCore {

class SVGLineElement;

class JSSVGLineElement : public JSSVGElement {
public:
    JSSVGLineElement(KJS::ExecState*, SVGLineElement*);
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier&, KJS::JSValue*, int attr = KJS::None);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*, int attr);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;

    enum {
        // Attributes
        X1AttrNum, Y1AttrNum, X2AttrNum, Y2AttrNum, 
        RequiredFeaturesAttrNum, RequiredExtensionsAttrNum, SystemLanguageAttrNum, XmllangAttrNum, 
        XmlspaceAttrNum, ExternalResourcesRequiredAttrNum, ClassNameAttrNum, StyleAttrNum, 
        TransformAttrNum, NearestViewportElementAttrNum, FarthestViewportElementAttrNum, 

        // Functions
        HasExtensionFuncNum, GetPresentationAttributeFuncNum, GetBBoxFuncNum, GetCTMFuncNum, 
        GetScreenCTMFuncNum, GetTransformToElementFuncNum
    };
};


class JSSVGLineElementPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState* exec);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSSVGLineElementPrototype(KJS::ExecState* exec)
        : KJS::JSObject(JSSVGElementPrototype::self(exec)) { }
};

class JSSVGLineElementPrototypeFunction : public KJS::InternalFunctionImp {
public:
    JSSVGLineElementPrototypeFunction(KJS::ExecState* exec, int i, int len, const KJS::Identifier& name)
        : KJS::InternalFunctionImp(static_cast<KJS::FunctionPrototype*>(exec->lexicalInterpreter()->builtinFunctionPrototype()), name)
        , id(i)
    {
        put(exec, exec->propertyNames().length, KJS::jsNumber(len), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum);
    }
    virtual KJS::JSValue* callAsFunction(KJS::ExecState*, KJS::JSObject*, const KJS::List&);

private:
    int id;
};

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
