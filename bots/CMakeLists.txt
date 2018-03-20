# NOTE: This file is only used for configuring CLion, use regular `make` for building.

set (IDF_PATH "/home/zhukov/Projects/senior/esp/esp-idf")

cmake_minimum_required(VERSION 3.6)
project(esp_idf_template)

set(CMAKE_SYSTEM_NAME xtensa-esp32-elf)
set(CMAKE_C_COMPILER xtensa-esp32-elf-gcc)
set(CMAKE_FIND_ROOT_PATH /usr/local/xtensa-esp32-elf/)

set(CMAKE_CXX_STANDARD 11)


file(GLOB_RECURSE SOURCES "${IDF_PATH}/*.c")

set(COMPONENTS
        app_update
        bootloader
        bootloader_support
        bt
        coap
        cxx
        driver
        esp32
        esptool_py
        ethernet
        expat
        fatfs
        freertos
        idf_test
        json
        log
        lwip
        mbedtls
        micro-ecc
        newlib
        nghttp
        nvs_flash
        openssl
        partition_table
        sdmmc
        spi_flash
        tcpip_adapter
        ulp
        vfs
        wpa_supplicant
        xtensa-debug-module)

set (INCLUDE_DIRS "")
foreach (component ${COMPONENTS})
    list (APPEND INCLUDE_DIRS ${IDF_PATH}/components/${component}/include)
endforeach()
list (APPEND INCLUDE_DIRS ${IDF_PATH}/components/lwip/include/lwip)
list(REMOVE_DUPLICATES INCLUDE_DIRS)
include_directories(${INCLUDE_DIRS})
include_directories("build/include")
include_directories("components/adc/include")
include_directories("components/emul_ip/incude")
include_directories("components/i2c/include")
include_directories("components/turret/include")
include_directories("components/wifi/include")
include_directories("components/motor/include")

set(SOURCE_FILES
        main/udp.c
        components/i2c/i2c.c
        components/adc/adc.c
        components/emul_ip/emul_ip.c
        components/turret/turret.c
        components/motor/motor.c
    )
list (APPEND SOURCE_FILES ${SOURCES})

add_executable(sheepy ${SOURCE_FILES})
