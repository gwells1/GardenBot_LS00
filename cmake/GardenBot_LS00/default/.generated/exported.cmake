set(DEPENDENT_MP_BIN2HEXGardenBot_LS00_default_fJSWT_np "c:/Program Files/Microchip/xc32/v5.00/bin/xc32-bin2hex.exe")
set(DEPENDENT_DEPENDENT_TARGET_ELFGardenBot_LS00_default_fJSWT_np ${CMAKE_CURRENT_LIST_DIR}/../../../../out/GardenBot_LS00/default.elf)
set(DEPENDENT_TARGET_DIRGardenBot_LS00_default_fJSWT_np ${CMAKE_CURRENT_LIST_DIR}/../../../../out/GardenBot_LS00)
set(DEPENDENT_BYPRODUCTSGardenBot_LS00_default_fJSWT_np ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_fJSWT_np}/${sourceFileNameGardenBot_LS00_default_fJSWT_np}.c)
add_custom_command(
    OUTPUT ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_fJSWT_np}/${sourceFileNameGardenBot_LS00_default_fJSWT_np}.c
    COMMAND ${DEPENDENT_MP_BIN2HEXGardenBot_LS00_default_fJSWT_np} --image ${DEPENDENT_DEPENDENT_TARGET_ELFGardenBot_LS00_default_fJSWT_np} --image-generated-c ${sourceFileNameGardenBot_LS00_default_fJSWT_np}.c --image-generated-h ${sourceFileNameGardenBot_LS00_default_fJSWT_np}.h --image-copy-mode ${modeGardenBot_LS00_default_fJSWT_np} --image-offset ${addressGardenBot_LS00_default_fJSWT_np} 
    WORKING_DIRECTORY ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_fJSWT_np}
    DEPENDS ${DEPENDENT_DEPENDENT_TARGET_ELFGardenBot_LS00_default_fJSWT_np})
add_custom_target(
    dependent_produced_source_artifactGardenBot_LS00_default_fJSWT_np 
    DEPENDS ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_fJSWT_np}/${sourceFileNameGardenBot_LS00_default_fJSWT_np}.c
    )
