cmake_minimum_required(VERSION 3.29)
project(2024_NJUPT_Program_Design)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${PROJECT_SOURCE_DIR}/form)
set(CMAKE_PREFIX_PATH "D:/Qt/6.8.0/mingw_64")

include_directories(SYSTEM cmake-build-debug/2024_NJUPT_Program_Design_autogen/include ${PROJECT_SOURCE_DIR})
include_directories(2024_NJUPT_Program_Design ${Qt6Widgets_INCLUDE_DIRS} ${Qt6Core_INCLUDE_DIRS} ${Qt6Gui_INCLUDE_DIRS})

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Sql
        REQUIRED)

add_executable(2024_NJUPT_Program_Design main.cpp
        login.cpp
        login.h
        form/login.ui
        sys_admin/sys_admin_mainwindow.cpp
        sys_admin/sys_admin_mainwindow.h
        form/sys_admin_mainwindow.ui
        sys_admin/management_of_participating_departments.cpp
        sys_admin/management_of_participating_departments.h
        form/management_of_participating_departments.ui
        sys_admin/management_of_competition.cpp
        sys_admin/management_of_competition.h
        form/management_of_competition.ui
        sys_admin/management_of_competition_cell.cpp
        sys_admin/management_of_competition_cell.h
        form/management_of_competition_cell.ui
        sys_admin/management_of_competiton_search.cpp
        sys_admin/management_of_competiton_search.h
        form/management_of_competiton_search.ui
        sys_admin/sys_admin_check_results.cpp
        sys_admin/sys_admin_check_results.h
        form/sys_admin_check_results.ui
        sys_admin/sys_admin_review_results.cpp
        sys_admin/sys_admin_review_results.h
        form/sys_admin_review_results.ui
        sys_admin/sys_admin_handle_complaint.cpp
        sys_admin/sys_admin_handle_complaint.h
        form/sys_admin_handle_complaint.ui
        college_admin/college_mainwindow.cpp
        college_admin/college_mainwindow.h
        form/college_mainwindow.ui
        college_admin/college_admin_check_results.cpp
        college_admin/college_admin_check_results.h
        form/college_admin_check_results.ui
        college_admin/college_admin_complaint.cpp
        college_admin/college_admin_complaint.h
        form/college_admin_complaint.ui
        athlete/athlete_mainwindow.cpp
        athlete/athlete_mainwindow.h
        form/athlete_mainwindow.ui
        athlete/athlete_check_results.cpp
        athlete/athlete_check_results.h
        form/athlete_check_results.ui
        athlete/athlete_check_results.cpp
        athlete/athlete_check_results.h
        form/athlete_check_results.ui
        athlete/athlete_complaint.cpp
        athlete/athlete_complaint.h
        form/athlete_complaint.ui
        referee/referee_mainwindow.cpp
        referee/referee_mainwindow.h
        form/referee_mainwindow.ui
        referee/referee_submit_results.cpp
        referee/referee_submit_results.h
        form/referee_submit_results.ui
        referee/referee_submit_results_cell.cpp
        referee/referee_submit_results_cell.h
        form/referee_submit_results_cell.ui
        referee/referee_handle_complaint.cpp
        referee/referee_handle_complaint.h
        form/referee_handle_complaint.ui
        referee/referee_handle_complaint_cell.cpp
        referee/referee_handle_complaint_cell.h
        form/referee_handle_complaint_cell.ui
        result_sort.cpp
        result_sort.h
        update_scores.cpp
        update_scores.h
        update_scores.h
        update_scores.cpp

)
target_link_libraries(2024_NJUPT_Program_Design
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Sql
)


if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets Sql)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
