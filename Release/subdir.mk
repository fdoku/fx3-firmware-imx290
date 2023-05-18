################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../camera_ptzcontrol.c \
../cyfxtx.c \
../cyfxuvcdscr.c \
../sensor_imx290.c \
../sensor_imx477.c \
../uvc.c 

S_UPPER_SRCS += \
../cyfx_gcc_startup.S 

OBJS += \
./camera_ptzcontrol.o \
./cyfx_gcc_startup.o \
./cyfxtx.o \
./cyfxuvcdscr.o \
./sensor_imx290.o \
./sensor_imx477.o \
./uvc.o 

S_UPPER_DEPS += \
./cyfx_gcc_startup.d 

C_DEPS += \
./camera_ptzcontrol.d \
./cyfxtx.d \
./cyfxuvcdscr.d \
./sensor_imx290.d \
./sensor_imx477.d \
./uvc.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=arm926ej-s -mthumb -O3 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -D__CYU3P_TX__=1 -I"/home/friedrichdoku/COMET/FX3/cyfx3sdk/fw_lib/1_3_4/inc" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=arm926ej-s -mthumb -O3 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


