################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Blinking_Led_with_struct_interface_def.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Blinking_Led_with_struct_interface_def.list \

OBJCOPY_HEX += \
Blinking_Led_with_struct_interface_def.hex \

OBJCOPY_BIN += \
Blinking_Led_with_struct_interface_def.bin \


# All Target
all: Blinking_Led_with_struct_interface_def.elf secondary-outputs

# Tool invocations
Blinking_Led_with_struct_interface_def.elf: $(OBJS) $(USER_OBJS) C:\Users\Islam\ Atef\STM32CubeIDE\workspace_1.4.0\Blinking_Led_with_struct_interface_def\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "Blinking_Led_with_struct_interface_def.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Islam Atef\STM32CubeIDE\workspace_1.4.0\Blinking_Led_with_struct_interface_def\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Blinking_Led_with_struct_interface_def.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Blinking_Led_with_struct_interface_def.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Blinking_Led_with_struct_interface_def.list"
	@echo 'Finished building: $@'
	@echo ' '

Blinking_Led_with_struct_interface_def.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "Blinking_Led_with_struct_interface_def.hex"
	@echo 'Finished building: $@'
	@echo ' '

Blinking_Led_with_struct_interface_def.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Blinking_Led_with_struct_interface_def.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
