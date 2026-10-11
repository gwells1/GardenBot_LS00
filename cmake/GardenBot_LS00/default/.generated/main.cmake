include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")

set(GardenBot_LS00_default_library_list )

# Handle files with suffix s, for group default-XC32
if(GardenBot_LS00_default_default_XC32_FILE_TYPE_assemble)
add_library(GardenBot_LS00_default_default_XC32_assemble OBJECT ${GardenBot_LS00_default_default_XC32_FILE_TYPE_assemble})
    GardenBot_LS00_default_default_XC32_assemble_rule(GardenBot_LS00_default_default_XC32_assemble)
    list(APPEND GardenBot_LS00_default_library_list "$<TARGET_OBJECTS:GardenBot_LS00_default_default_XC32_assemble>")

endif()

# Handle files with suffix S, for group default-XC32
if(GardenBot_LS00_default_default_XC32_FILE_TYPE_assembleWithPreprocess)
add_library(GardenBot_LS00_default_default_XC32_assembleWithPreprocess OBJECT ${GardenBot_LS00_default_default_XC32_FILE_TYPE_assembleWithPreprocess})
    GardenBot_LS00_default_default_XC32_assembleWithPreprocess_rule(GardenBot_LS00_default_default_XC32_assembleWithPreprocess)
    list(APPEND GardenBot_LS00_default_library_list "$<TARGET_OBJECTS:GardenBot_LS00_default_default_XC32_assembleWithPreprocess>")

endif()

# Handle files with suffix [cC], for group default-XC32
if(GardenBot_LS00_default_default_XC32_FILE_TYPE_compile)
add_library(GardenBot_LS00_default_default_XC32_compile OBJECT ${GardenBot_LS00_default_default_XC32_FILE_TYPE_compile})
    GardenBot_LS00_default_default_XC32_compile_rule(GardenBot_LS00_default_default_XC32_compile)
    list(APPEND GardenBot_LS00_default_library_list "$<TARGET_OBJECTS:GardenBot_LS00_default_default_XC32_compile>")

endif()

# Handle files with suffix cpp, for group default-XC32
if(GardenBot_LS00_default_default_XC32_FILE_TYPE_compile_cpp)
add_library(GardenBot_LS00_default_default_XC32_compile_cpp OBJECT ${GardenBot_LS00_default_default_XC32_FILE_TYPE_compile_cpp})
    GardenBot_LS00_default_default_XC32_compile_cpp_rule(GardenBot_LS00_default_default_XC32_compile_cpp)
    list(APPEND GardenBot_LS00_default_library_list "$<TARGET_OBJECTS:GardenBot_LS00_default_default_XC32_compile_cpp>")

endif()

# Handle files with suffix [cC], for group default-XC32
if(GardenBot_LS00_default_default_XC32_FILE_TYPE_dependentObject)
add_library(GardenBot_LS00_default_default_XC32_dependentObject OBJECT ${GardenBot_LS00_default_default_XC32_FILE_TYPE_dependentObject})
    GardenBot_LS00_default_default_XC32_dependentObject_rule(GardenBot_LS00_default_default_XC32_dependentObject)
    list(APPEND GardenBot_LS00_default_library_list "$<TARGET_OBJECTS:GardenBot_LS00_default_default_XC32_dependentObject>")

endif()

# Handle files with suffix elf, for group default-XC32
if(GardenBot_LS00_default_default_XC32_FILE_TYPE_bin2hex)
add_library(GardenBot_LS00_default_default_XC32_bin2hex OBJECT ${GardenBot_LS00_default_default_XC32_FILE_TYPE_bin2hex})
    GardenBot_LS00_default_default_XC32_bin2hex_rule(GardenBot_LS00_default_default_XC32_bin2hex)
    list(APPEND GardenBot_LS00_default_library_list "$<TARGET_OBJECTS:GardenBot_LS00_default_default_XC32_bin2hex>")

endif()

# Handle files with suffix elf, for group default-XC32
if(GardenBot_LS00_default_default_XC32_FILE_TYPE_objcopy_lss)
add_library(GardenBot_LS00_default_default_XC32_objcopy_lss OBJECT ${GardenBot_LS00_default_default_XC32_FILE_TYPE_objcopy_lss})
    GardenBot_LS00_default_default_XC32_objcopy_lss_rule(GardenBot_LS00_default_default_XC32_objcopy_lss)
    list(APPEND GardenBot_LS00_default_library_list "$<TARGET_OBJECTS:GardenBot_LS00_default_default_XC32_objcopy_lss>")

endif()


# Main target for this project
add_executable(GardenBot_LS00_default_image_fJSWT_np ${GardenBot_LS00_default_library_list})

set_target_properties(GardenBot_LS00_default_image_fJSWT_np PROPERTIES
    OUTPUT_NAME "default"
    SUFFIX ".elf"
    RUNTIME_OUTPUT_DIRECTORY "${GardenBot_LS00_default_output_dir}")
target_link_libraries(GardenBot_LS00_default_image_fJSWT_np PRIVATE ${GardenBot_LS00_default_default_XC32_FILE_TYPE_link})
# Add the link options from the rule file.
GardenBot_LS00_default_link_rule( GardenBot_LS00_default_image_fJSWT_np)

# Call bin2hex function from the rule file
GardenBot_LS00_default_bin2hex_rule(GardenBot_LS00_default_image_fJSWT_np)

#Add objcopy steps
GardenBot_LS00_default_objcopy_lss_rule(GardenBot_LS00_default_image_fJSWT_np)

