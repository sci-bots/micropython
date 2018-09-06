enum {
  PORT_A,
  PORT_B,
  PORT_C,
  PORT_D,
  PORT_E,
  PORT_Z,
};

enum {
    AF_FN_FTM,
    AF_FN_I2C,
    AF_FN_UART,
    AF_FN_SPI,
    AF_FN_ADC
};

enum {
    AF_PIN_TYPE_FTM_CH0 = 0,
    AF_PIN_TYPE_FTM_CH1,
    AF_PIN_TYPE_FTM_CH2,
    AF_PIN_TYPE_FTM_CH3,
    AF_PIN_TYPE_FTM_CH4,
    AF_PIN_TYPE_FTM_CH5,
    AF_PIN_TYPE_FTM_CH6,
    AF_PIN_TYPE_FTM_CH7,
    AF_PIN_TYPE_FTM_QD_PHA,
    AF_PIN_TYPE_FTM_QD_PHB,

    AF_PIN_TYPE_I2C_SDA = 0,
    AF_PIN_TYPE_I2C_SCL,

    AF_PIN_TYPE_SPI_MOSI = 0,
    AF_PIN_TYPE_SPI_MISO,
    AF_PIN_TYPE_SPI_SCK,
    AF_PIN_TYPE_SPI_NSS,

    AF_PIN_TYPE_UART_TX = 0,
    AF_PIN_TYPE_UART_RX,
    AF_PIN_TYPE_UART_CTS,
    AF_PIN_TYPE_UART_RTS,

    AF_PIN_TYPE_ADC_DP0  = 0,
    AF_PIN_TYPE_ADC_DP1  = 1,
    AF_PIN_TYPE_ADC_DP2  = 2,
    AF_PIN_TYPE_ADC_DP3  = 3,
    AF_PIN_TYPE_ADC_SE4a = 4 + 64,
    AF_PIN_TYPE_ADC_SE4b = 4,
    AF_PIN_TYPE_ADC_SE5a = 5 + 64,
    AF_PIN_TYPE_ADC_SE5b = 5,
    AF_PIN_TYPE_ADC_SE6a = 6 + 64,
    AF_PIN_TYPE_ADC_SE6b = 6,
    AF_PIN_TYPE_ADC_SE7a = 7 + 64,
    AF_PIN_TYPE_ADC_SE7b = 7,
    AF_PIN_TYPE_ADC_SE8  = 8,
    AF_PIN_TYPE_ADC_SE9  = 9,
    AF_PIN_TYPE_ADC_SE10 = 10,
    AF_PIN_TYPE_ADC_SE11 = 11,
    AF_PIN_TYPE_ADC_SE12 = 12,
    AF_PIN_TYPE_ADC_SE13 = 13,
    AF_PIN_TYPE_ADC_SE14 = 14,
    AF_PIN_TYPE_ADC_SE15 = 15,
    AF_PIN_TYPE_ADC_SE16 = 16,
    AF_PIN_TYPE_ADC_SE17 = 17,
    AF_PIN_TYPE_ADC_SE18 = 18,
    AF_PIN_TYPE_ADC_SE19 = 19,
    AF_PIN_TYPE_ADC_SE20 = 20,
    AF_PIN_TYPE_ADC_SE21 = 21,
    AF_PIN_TYPE_ADC_SE22 = 22,
    AF_PIN_TYPE_ADC_SE23 = 23,
    AF_PIN_TYPE_ADC_DM0  = 19,
    AF_PIN_TYPE_ADC_DM1  = 20
};

typedef GPIO_TypeDef pin_gpio_t;
