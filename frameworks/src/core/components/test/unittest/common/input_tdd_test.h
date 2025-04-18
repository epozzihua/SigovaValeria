/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OHOS_ACELITE_TEST_INPUT_H
#define OHOS_ACELITE_TEST_INPUT_H
#include "base_test.h"
#include "test_common.h"
#include "ui_checkbox.h"
#include "ui_label_button.h"
#include "ui_radio_button.h"

namespace OHOS {
namespace ACELite {
class InputTddTest : public BaseTest {
public:
    InputTddTest() {}
    ~InputTddTest(){}
    void ComponentInputAttributeTest01();
    void ComponentInputAttributeTest02();
    void ComponentInputStyleTest03();
    void ComponentInputStyleTest04();
    void ComponentInputAttributeTest05();
    void ComponentInputAttributeTest06();
    void ComponentInputStyleTest07();
    void ComponentInputStyleTest07Extra();
    void ComponentInputStyleTest08();
    void ComponentInputStyleTest09();
    void ComponentInputStyleTest10();
    void ComponentInputStyleTest11();
    void ComponentInputStyleTest12();
    void ComponentInputAttributeTest13();
    void ComponentInputAttributeTest14();
    void ComponentRadioAttributeTest01();
    void ComponentRadioStyleTest03();
    void ComponentRadioStyleTest04();
#if (defined(FEATURE_COMPONENT_EDITTEXT) && (FEATURE_COMPONENT_EDITTEXT == 1))
    void ComponentEdittextStyleTest01();
    void ComponentEdittextStyleTest02();
    void ComponentEdittextStyleTest03();
    void ComponentEdittextAttributeTest04();
    void ComponentEdittextAttributeTest05();
    void ComponentEdittextAttributeTest06();
#endif // FEATURE_COMPONENT_EDITTEXT
    bool CompareColor(ColorType color, uint32_t colorIntValue) const;
    void AddBoolProperty(jerry_value_t object, const char *name, bool value) const;
#ifndef TDD_ASSERTIONS
    void RunTests();
#endif
};
} // namespace ACELite
} // namespace OHOS

#endif // OHOS_ACELITE_TEST_INPUT_H
