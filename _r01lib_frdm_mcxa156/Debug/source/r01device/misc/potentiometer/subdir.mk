################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/r01device/misc/potentiometer/AD5161.cpp 

CPP_DEPS += \
./source/r01device/misc/potentiometer/AD5161.d 

OBJS += \
./source/r01device/misc/potentiometer/AD5161.o 


# Each subdirectory must supply rules for building sources it contributes
source/r01device/misc/potentiometer/%.o: ../source/r01device/misc/potentiometer/%.cpp source/r01device/misc/potentiometer/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -std=c++20 -DPRINTF_FLOAT_ENABLE=1 -DSCANF_FLOAT_ENABLE=1 -DPRINTF_ADVANCED_ENABLE=1 -DSCANF_ADVANCED_ENABLE=1 -DCPU_MCXA156VLL -DCPU_MCXA156VLL_cm33 -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -D__NEWLIB__ -DSDK_DEBUGCONSOLE=0 -DTARGET_A156 -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/source" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/source/r01lib" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/source/r01device" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/board" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/CMSIS" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/drivers" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/utilities" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/device" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/component/serial_manager" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/component/lists" -I"/Users/tedd/dev/mcuxpresso/r01lib_Arduino_SDK_layer_trial0/_r01lib_frdm_mcxa156/component/uart" -O2 -fno-common -g3 -gdwarf-4 -Wall -c -ffunction-sections -fdata-sections -fno-builtin -fno-rtti -fno-exceptions -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-source-2f-r01device-2f-misc-2f-potentiometer

clean-source-2f-r01device-2f-misc-2f-potentiometer:
	-$(RM) ./source/r01device/misc/potentiometer/AD5161.d ./source/r01device/misc/potentiometer/AD5161.o

.PHONY: clean-source-2f-r01device-2f-misc-2f-potentiometer

