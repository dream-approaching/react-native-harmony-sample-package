
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GeneratePropsCpp.js
 */

#include "Props.h"
#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/core/propsConversions.h>

namespace facebook {
namespace react {

NoCodegenSampleViewCAPIProps::NoCodegenSampleViewCAPIProps(
    const PropsParserContext &context,
    const NoCodegenSampleViewCAPIProps &sourceProps,
    const RawProps &rawProps): ViewProps(context, sourceProps, rawProps),

    intTest(convertRawProp(context, rawProps, "intTest", sourceProps.intTest, {0})),
    intWithDefault(convertRawProp(context, rawProps, "intWithDefault", sourceProps.intWithDefault, {42})),
    floatTest(convertRawProp(context, rawProps, "floatTest", sourceProps.floatTest, {0.0})),
    floatWithDefaultTest(convertRawProp(context, rawProps, "floatWithDefaultTest", sourceProps.floatWithDefaultTest, {42.5})),
    doubleTest(convertRawProp(context, rawProps, "doubleTest", sourceProps.doubleTest, {0.0})),
    doubleWithDefaultTest(convertRawProp(context, rawProps, "doubleWithDefaultTest", sourceProps.doubleWithDefaultTest, {42.5})),
    stringTest(convertRawProp(context, rawProps, "stringTest", sourceProps.stringTest, {})),
    stringWithDefaultTest(convertRawProp(context, rawProps, "stringWithDefaultTest", sourceProps.stringWithDefaultTest, {"foobar"})),
    booleanTest(convertRawProp(context, rawProps, "booleanTest", sourceProps.booleanTest, {false})),
    booleanWithDefaultTest(convertRawProp(context, rawProps, "booleanWithDefaultTest", sourceProps.booleanWithDefaultTest, {true})),
    arrayTest(convertRawProp(context, rawProps, "arrayTest", sourceProps.arrayTest, {})),
    stringEnumTest(convertRawProp(context, rawProps, "stringEnumTest", sourceProps.stringEnumTest, {NoCodegenSampleViewCAPIStringEnumTest::Foo})),
    readOnlyArrayTest(convertRawProp(context, rawProps, "readOnlyArrayTest", sourceProps.readOnlyArrayTest, {})),
    colorTest(convertRawProp(context, rawProps, "colorTest", sourceProps.colorTest, {}))
      {}

} // namespace react
} // namespace facebook
