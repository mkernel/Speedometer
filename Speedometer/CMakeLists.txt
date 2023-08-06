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

project(Speedometer C CXX ASM)

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

add_executable(Speedometer Speedometer.c 
        background.c
        rabbit.c
        turtle.c
        panther.c
        speed_1.c
        speed_2.c
        speed_3.c
        speed_4.c
        speed_5.c
        speed_6.c 
        speed_7.c 
        speed_8.c 
        speed_9.c 
        speed_10.c 
        speed_11.c 
        speed_12.c 
        speed_13.c 
        speed_14.c 
        speed_15.c 
        speed_16.c 
        speed_17.c 
        speed_18.c 
        speed_19.c 
        speed_20.c 
        speed_21.c 
        speed_22.c 
        speed_23.c 
        speed_24.c 
        speed_25.c 
        speed_26.c 
        speed_27.c 
        speed_28.c 
        speed_29.c 
        speed_30.c
)

pico_set_program_name(Speedometer "Speedometer")
pico_set_program_version(Speedometer "0.1")

pico_enable_stdio_uart(Speedometer 0)
pico_enable_stdio_usb(Speedometer 1)

# Add the standard library to the build
target_link_libraries(Speedometer
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(Speedometer PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
  ${CMAKE_CURRENT_LIST_DIR}/.. # for our common lwipopts or any other standard includes, if required
)

# Add any user requested libraries
target_link_libraries(Speedometer
        hardware_spi
        hardware_i2c
        LCD
        QMI8658
        GUI
        Config
        )

pico_add_extra_outputs(Speedometer)

