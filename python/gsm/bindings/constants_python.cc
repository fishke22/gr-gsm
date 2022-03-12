/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(constants.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(ca96a99a1560d094f946ac5d1e7ba490)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/constants.h>
// pydoc.h is automatically generated in the build directory
#include <constants_pydoc.h>

void bind_constants(py::module& m)
{




        m.def("build_date",&::gr::gsm::build_date,
            D(build_date)
        );


        m.def("version",&::gr::gsm::version,
            D(version)
        );


        m.def("major_version",&::gr::gsm::major_version,
            D(major_version)
        );


        m.def("api_version",&::gr::gsm::api_version,
            D(api_version)
        );


        m.def("minor_version",&::gr::gsm::minor_version,
            D(minor_version)
        );


        m.def("maint_version",&::gr::gsm::maint_version,
            D(maint_version)
        );



}







