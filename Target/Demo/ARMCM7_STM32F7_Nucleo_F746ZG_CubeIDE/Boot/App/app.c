/************************************************************************************//**
* \file         Demo/ARMCM7_STM32F7_Nucleo_F746ZG_CubeIDE/Boot/App/app.c
* \brief        Bootloader application source file.
* \ingroup      Boot_ARMCM7_STM32F7_Nucleo_F746ZG_CubeIDE
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2020  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
*
* \endinternal
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include "boot.h"                                /* bootloader generic header          */
#include "stm32f7xx.h"                           /* STM32 CPU and HAL header           */
#include "stm32f7xx_ll_rcc.h"                    /* STM32 LL RCC header                */


/************************************************************************************//**
** \brief     Initializes the bootloader application. Should be called once during
**            software program initialization.
** \return    none.
**
****************************************************************************************/
void AppInit(void)
{
  /* initialize the bootloader */
  BootInit();
} /*** end of AppInit ***/


/************************************************************************************//**
** \brief     Task function of the bootloader application. Should be called continuously
**            in the program loop.
** \return    none.
**
****************************************************************************************/
void AppTask(void)
{
  /* Run the bootloader task. */
  BootTask();
} /*** end of AppTask ***/


/************************************************************************************//**
** \brief     Uninitializes the bootloader application. Should be called right before the
**            bootloader starts the user program.
** \return    none.
**
****************************************************************************************/
void AppDeInit(void)
{
  /* Reset the RCC clock configuration to the default reset state. */
  LL_RCC_DeInit();
} /*** end of AppDeInit ***/


/*********************************** end of app.c **************************************/
