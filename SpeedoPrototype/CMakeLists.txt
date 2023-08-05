# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "/home/enno/Dokumente/pico/pico-sdk")

set(PICO_BOARD pico CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

if (PICO_SDK_VERSION_STRING VERSION_LESS "1.4.0")
  message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.4.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

project(SpeedoPrototype C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

add_subdirectory(./lib/Config)
add_subdirectory(./lib/LCD)
add_subdirectory(./lib/GUI)
add_subdirectory(./lib/QMI8658)

include_directories(./lib/Config)
include_directories(./lib/GUI)
include_directories(./lib/LCD)
include_directories(./lib/QMI8658)

# Add executable. Default name is the project name, version 0.1

add_executable(SpeedoPrototype SpeedoPrototype.c test_image.c )

pico_set_program_name(SpeedoPrototype "SpeedoPrototype")
pico_set_program_version(SpeedoPrototype "0.1")

pico_enable_stdio_uart(SpeedoPrototype 0)
pico_enable_stdio_usb(SpeedoPrototype 0)

# Add the standard library to the build
target_link_libraries(SpeedoPrototype
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(SpeedoPrototype PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
  ${CMAKE_CURRENT_LIST_DIR}/.. # for our common lwipopts or any other standard includes, if required
)

# Add any user requested libraries
target_link_libraries(SpeedoPrototype
        LCD
        QMI8658
        GUI
        Config
        hardware_spi
        hardware_i2c
        )

pico_add_extra_outputs(SpeedoPrototype)

