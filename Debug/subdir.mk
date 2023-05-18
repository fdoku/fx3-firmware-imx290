################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cyfxbulkdscr.c \
../cyfxgpiftousb.c \
../cyfxtx.c 

S_UPPER_SRCS += \
../cyfx_gcc_startup.S 

OBJS += \
./cyfx_gcc_startup.o \
./cyfxbulkdscr.o \
./cyfxgpiftousb.o \
./cyfxtx.o 

S_UPPER_DEPS += \
./cyfx_gcc_startup.d 

C_DEPS += \
./cyfxbulkdscr.d \
./cyfxgpiftousb.d \
./cyfxtx.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=arm926ej-s -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=arm926ej-s -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D__CYU3P_TX__=1 -I"/home/friedrichdoku/COMET/FX3/cyfx3sdk/fw_lib/1_3_4/inc" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


