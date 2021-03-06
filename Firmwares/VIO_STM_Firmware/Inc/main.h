/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CAM_EXPOSE_Pin GPIO_PIN_2
#define CAM_EXPOSE_GPIO_Port GPIOE
#define CAM_SYNC_Pin GPIO_PIN_3
#define CAM_SYNC_GPIO_Port GPIOE
#define CAM_SYNC_EXTI_IRQn EXTI3_IRQn
#define ZED_SYNCH_SIGNAL_Pin GPIO_PIN_10
#define ZED_SYNCH_SIGNAL_GPIO_Port GPIOB
#define IR_TRACKER_SYC_OUT_Pin GPIO_PIN_11
#define IR_TRACKER_SYC_OUT_GPIO_Port GPIOB
#define SPI2_CS_Pin GPIO_PIN_12
#define SPI2_CS_GPIO_Port GPIOB
#define SPI3_CS_Pin GPIO_PIN_15
#define SPI3_CS_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_7
#define SPI1_CS_GPIO_Port GPIOD
#define IMU_SYNC_Pin GPIO_PIN_0
#define IMU_SYNC_GPIO_Port GPIOE
#define IMU_IRQ_Pin GPIO_PIN_1
#define IMU_IRQ_GPIO_Port GPIOE
#define IMU_IRQ_EXTI_IRQn EXTI1_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
