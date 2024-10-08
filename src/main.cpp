/**
 * [Company Name]
 * See COPYRIGHT file at the top of the source tree.
 *
 * This product includes software developed by the
 * [Project Name] ([Project URL]).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT WARRANTY OF ANY KIND; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * MIT License for more details.
 *
 * You should have received a copy of the MIT License along with this
 * program. If not, see <[URL to legal notice]>.
 */

/**
 * @file main.cpp
 *
 * @brief [Some brief information]
 *
 * @ingroup [PackageName]
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author [Author]
 * Contact: [Contacts (e.g. email)]
 */

#include <iostream>

#include "component1/Component1.hpp"
#include "component2/Component2.hpp"
#include "version/ProjectVersion.hpp"

using namespace std;
using namespace my;

int
main()
{
    std::cout << "Project version: " << getProjectVersion() << std::endl;

    Component1 component1;
    component1.sayHello();
    Component2 component2;
    component2.sayHello();

    return EXIT_SUCCESS;
}