set(DEPENDENT_MP_BIN2HEXGardenBot_LS00_default_li24FnlE "c:/Program Files/Microchip/xc32/v5.00/bin/xc32-bin2hex.exe")
set(DEPENDENT_DEPENDENT_TARGET_ELFGardenBot_LS00_default_li24FnlE ${CMAKE_CURRENT_LIST_DIR}/../../../../out/GardenBot_LS00/default.elf)
set(DEPENDENT_TARGET_DIRGardenBot_LS00_default_li24FnlE ${CMAKE_CURRENT_LIST_DIR}/../../../../out/GardenBot_LS00)
set(DEPENDENT_BYPRODUCTSGardenBot_LS00_default_li24FnlE ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_li24FnlE}/${sourceFileNameGardenBot_LS00_default_li24FnlE}.c)
add_custom_command(
    OUTPUT ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_li24FnlE}/${sourceFileNameGardenBot_LS00_default_li24FnlE}.c
    COMMAND ${DEPENDENT_MP_BIN2HEXGardenBot_LS00_default_li24FnlE} --image ${DEPENDENT_DEPENDENT_TARGET_ELFGardenBot_LS00_default_li24FnlE} --image-generated-c ${sourceFileNameGardenBot_LS00_default_li24FnlE}.c --image-generated-h ${sourceFileNameGardenBot_LS00_default_li24FnlE}.h --image-copy-mode ${modeGardenBot_LS00_default_li24FnlE} --image-offset ${addressGardenBot_LS00_default_li24FnlE} 
    WORKING_DIRECTORY ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_li24FnlE}
    DEPENDS ${DEPENDENT_DEPENDENT_TARGET_ELFGardenBot_LS00_default_li24FnlE})
add_custom_target(
    dependent_produced_source_artifactGardenBot_LS00_default_li24FnlE 
    DEPENDS ${DEPENDENT_TARGET_DIRGardenBot_LS00_default_li24FnlE}/${sourceFileNameGardenBot_LS00_default_li24FnlE}.c
    )
