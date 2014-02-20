#define STM32F4DISC

#define MICROPY_HW_BOARD_NAME       "F4DISC"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (1)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_HAS_WLAN         (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_AUDIO     (0)

// USRSW is pulled low. Pressing the button makes the input go high.
#define USRSW_PIN           (pin_A0)
#define USRSW_PUPD          (GPIO_PuPd_NOPULL)
#define USRSW_EXTI_EDGE     (EXTI_Trigger_Rising)
#define USRSW_PRESSED       (1)

/* LED */
#define PYB_LED1_PORT   (GPIOD)
#define PYB_LED1_PIN    (GPIO_Pin_14)

#define PYB_LED2_PORT   (GPIOD)
#define PYB_LED2_PIN    (GPIO_Pin_12)

#define PYB_LED3_PORT   (GPIOD)
#define PYB_LED3_PIN    (GPIO_Pin_15)

#define PYB_LED4_PORT   (GPIOD)
#define PYB_LED4_PIN    (GPIO_Pin_13)

#define PYB_OTYPE       (GPIO_OType_PP)

#define PYB_LED_ON(port, pin)  (port->BSRRL = pin)
#define PYB_LED_OFF(port, pin) (port->BSRRH = pin)

