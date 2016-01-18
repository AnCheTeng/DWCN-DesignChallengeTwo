/******************** (C) COPYRIGHT 2013 Uniband Electronic Corp. **************
* File Name          : us2400REGs.h
* Author             : Ethan Chung
* Version            : v1.0.0.0
* Date               : 25-Jun-2013
* Description        : US2400D Register File
*******************************************************************************/
/* Define to prevent recursive inclusion ------------------------------------ */
#ifndef __US2400_REG_H
#define __US2400_REG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
/*******************************************************************************
              - US2400D Register Map with Default settings -
        Register Name  |  Register Address  |  Type                           */
#define     RXMCR               0x00        // (R/W) MSB  -- / -- / NOACKRSP / -- / -- / -- / -- / --  LSB -- RECEIVE MAC CONTROL (Power on default : 0x00)
#define     PANIDL              0x01        // (R/W) MSB  PANID7 / PANID6 / PANID5 / PANID4 / PANID3 / PANID2 / PANID1 / PANID0  LSB -- PAN ID LOW BYTE (Power on default : 0x00)
#define     PANIDH              0x02        // (R/W) MSB  PANID15 / PANID14 / PANID13 / PANID12 / PANID11 / PANID10 / PANID9 / PANID8  LSB -- PAN ID HIGH BYTE (Power on default : 0x00)
#define     SADRL               0x03        // (R/W) MSB  SADR7 / SADR6 / SADR5 / SADR4 / SADR3 / SADR2 / SADR1 / SADR0  LSB -- SHORT ADDRESS LOW BYTE (Power on default : 0x00)
#define     SADRH               0x04        // (R/W) MSB  SADR15 / SADR14 / SADR13 / SADR12 / SADR11 / SADR10 / SADR9 / SADR8  LSB -- ACKNOWLEDGEMENT USER INFORMATION HIGH BYTE (Power on default : 0x00)
#define     EADR_0              0x05        // (R/W) MSB  EADR7 / EADR6 / EADR5 / EADR4 / EADR3 / EADR2 / EADR1 / EADR0  LSB -- EXTENDED ADDRESS 0 (Power on default : 0x00)
#define     EADR_1              0x06        // (R/W) MSB  EADR15 / EADR14 / EADR13 / EADR12 / EADR11 / EADR10 / EADR9 / EADR8  LSB -- EXTENDED ADDRESS 1 (Power on default : 0x00)
#define     EADR_2              0x07        // (R/W) MSB  EADR23 / EADR22 / EADR21 / EADR20 / EADR19 / EADR18 / EADR17 / EADR16  LSB -- EXTENDED ADDRESS 2 (Power on default : 0x00)
#define     EADR_3              0x08        // (R/W) MSB  EADR31 / EADR30 / EADR29 / EADR28 / EADR27 / EADR26 / EADR25 / EADR24  LSB -- EXTENDED ADDRESS 3 (Power on default : 0x00)
#define     EADR_4              0x09        // (R/W) MSB  EADR39 / EADR38 / EADR37 / EADR36 / EADR35 / EADR34 / EADR33 / EADR32  LSB -- EXTENDED ADDRESS 4 (Power on default : 0x00)
#define     EADR_5              0x0A        // (R/W) MSB  EADR47 / EADR46 / EADR45 / EADR44 / EADR43 / EADR42 / EADR41 / EADR40  LSB -- EXTENDED ADDRESS 5 (Power on default : 0x00)
#define     EADR_6              0x0B        // (R/W) MSB  EADR55 / EADR54 / EADR53 / EADR52 / EADR51 / EADR50 / EADR49 / EADR48  LSB -- EXTENDED ADDRESS 6 (Power on default : 0x00)
#define     EADR_7              0x0C        // (R/W) MSB  EADR63 / EADR62 / EADR61 / EADR60 / EADR59 / EADR58 / EADR57 / EADR56  LSB -- EXTENDED ADDRESS 7 (Power on default : 0x00)
#define     RXFLUSH             0x0D        // (R/W) MSB  -- / WAKEPOL / WAKEPAD / -- / -- / NOCSMATXN / -- / RXFLUSH  LSB -- RECEIVE FIFO FLUSH (Power on default : 0x60)
#define     ORDER               0x10        // (R/W) MSB  BO3 / BO2 / BO1 / BO0 / SO3 / SO2 / SO1 / SO0  LSB -- BEACON AND SUPERFRAME ORDER (Power on default : 0xFF)
#define     TXMCR               0x11        // (R/W) MSB  NOCSMAG / -- / SLOTTED / MACMINBE1 / MACMINBE0 / CSMABF2 / CSMABF1 / CSMABF0  LSB -- CSMA-CA MODE CONTROL (Power on default : 0x1C)
#define     ESLOTG1C            0x13        // (R/W) MSB  GTS1-3 / GTS1-2 / GTS1-1 / GTS1-0 / CAP3 / CAP2 / CAP1 / CAP0  LSB -- END SLOT OF GTS1 AND CAP (Power on default : 0x00)
#define     TXCON               0x15        // (R/W) MSB  TXONT6 / TXONT5 / TXONT4 / TXONT3 / TXONT2 / TXONT1 / TXONT0 / --  LSB -- TX CONTROL (Power on default : 0x51)
#define     PACON0              0x16        // (R/W) MSB  PACONT7 / PACONT6 / PACONT5 / PACONT4 / PACONT3 / PACONT2 / PACONT1 / PACONT0  LSB -- POWER AMPLIFIER CONTROL 0 (Power on default : 0x29)
#define     PACON1              0x17        // (R/W) MSB  -- / -- / -- / PAONTS3 / PAONTS2 / PAONTS1 / PAONTS0 / PACONT8  LSB -- POWER AMPLIFIER CONTROL 1 (Power on default : 0x02)
#define     FIFOEN              0x18        // (R/W) MSB  FIFOEN / -- / TXONTS3 / TXONTS2 / TXONTS1 / TXONTS0 / TXONT8 / TXONT7  LSB -- FIFO ENABLE AND TX CONTROL (Power on default : 0x88)
#define     TXBTRIG             0x1A        // (R/W) MSB  -- / -- / -- / -- / -- / -- / TXBCNSECEN / TXBCNTRIG  LSB -- TRANSMIT BEACON FIFO CONTROL (Power on default : 0x00)
#define     TXNTRIG             0x1B        // (R/W) MSB  -- / -- / -- / PENDACK / INDIRECT / TXNACKREQ / TXNSECEN / TXNTRIG  LSB -- TRANSMIT NORMAL FIFO CONTROL (Power on default : 0x00)
#define     TXG1TRIG            0x1C        // (R/W) MSB  TXG1IFETRY1 / TXG1IFETRY0 / TXG1SLOT2 / TXG1SLOT1 / TXG1SLOT0 / TXG1ACKREQ / TXG1SECEN / TXG1TRIG  LSB -- GTS1 FIFO CONTROL (Power on default : 0x00)
#define     TXG2TRIG            0x1D        // (R/W) MSB  TXG2IFETRY1 / TXG2IFETRY0 / TXG2SLOT2 / TXG2SLOT1 / TXG2SLOT0 / TXG2ACKREQ / TXG2SECEN / TXG2TRIG  LSB -- GTS2 FIFO CONTROL (Power on default : 0x00)
#define     ESLOTG23            0x1E        // (R/W) MSB  GTS3-3 / GTS3-2 / GTS3-1 / GTS3-0 / GTS2-3 / GTS2-2 / GTS2-1 / GTS2-0  LSB -- END SLOT OF GTS3 AND GTS2 (Power on default : 0x00)
#define     ESLOTG45            0x1F        // (R/W) MSB  GTS5-3 / GTS5-2 / GTS5-1 / GTS5-0 / GTS4-3 / GTS4-2 / GTS4-1 / GTS4-0  LSB -- END SLOT OF GTS5 AND GTS4 (Power on default : 0x00)
#define     ESLOTG6             0x20        // (R/W) MSB  -- / -- / -- / -- / GTS6-3 / GTS6-2 / GTS6-1 / GTS6-0  LSB -- END SLOT OF GTS6 (Power on default : 0x00)
#define     TXPEND              0x21        // (R/W) MSB  -- / -- / -- / -- / -- / -- / GTSSWITCH / --  LSB -- TX DATA PENDING (Power on default : 0x84)
#define     WAKECTL             0x22        // (R/W) MSB  IMMWAKE / REGWAKE / INTL5 / INTL4 / INTL3 / INTL2 / INTL1 / INTL0  LSB -- WAKE CONTROL (Power on default : 0x00)
#define     ALIGNOFF            0x23        // (R/W) MSB  AOFFSET7 / AOFFSET6 / AOFFSET5 / AOFFSET4 / AOFFSET3 / AOFFSET2 / AOFFSET1 / AOFFSET0  LSB -- ALIGN OFFSET (Power on default : 0x00)
#define     TXSR                0x24        // (R/W) MSB  TXRETRY1 / TXRETRY0 / CCAFAIL / TXG2FNT / TXG1FNT / TXG2S / TXG1S / TXNS  LSB -- TX STATUS (Power on default : 0x00)
#define     TXBCNMSK            0x25        // (R/W) MSB  TXBCNMSK / -- / -- / -- / -- / -- / -- / --  LSB -- TRANSMIT BEACON CONTROL MASK (Power on default : 0x30)
#define     GATECLK             0x26        // (R/W) MSB  -- / -- / SPISYNC / ENRXM / ENGTS / ENTXM / -- / --  LSB -- GATED CLOCK CONTROL (Power on default : 0x00)
#define     MACTMRL             0x28        // (R/W) MSB  MACTMR7 / MACTMR6 / MACTMR5 / MACTMR4 / MACTMR3 / MACTMR2 / MACTMR1 / MACTMR0  LSB -- MAC TIMER LOW BYTE (Power on default : 0x00)
#define     MACTMRH             0x29        // (R/W) MSB  MACTMR15 / MACTMR14 / MACTMR13 / MACTMR12 / MACTMR11 / MACTMR10 / MACTMR9 / MACTMR8  LSB -- MAC TIMER HIGH BYTE (Power on default : 0x00)
#define     SOFTRST             0x2A        // (R/W) MSB  -- / -- / -- / -- / -- / RSTPWR / RSTBB / RSTMAC  LSB -- SOFTWARE RESET (Power on default : 0x00)
#define     SECCR0              0x2C        // (R/W) MSB  SECIGNORE / SECSTART / RXCIPHER2 / RXCIPHER1 / RXCIPHER0 / TXNCIPHER2 / TXNCIPHER1 / TXNCIPHER0  LSB -- SECURITY CONTROL 0 (Power on default : 0x00)
#define     SECCR1              0x2D        // (R/W) MSB  -- / TXBCIPHER2 / TXBCIPHER1 / TXBCIPHER0 / MACTMRFR / -- / DISDEC / DISENC  LSB -- SECURITY CONTROL 1 (Power on default : 0x00)
#define     TXPEMISP            0x2E        // (R/W) MSB  TXPET3 / TXPET2 / TXPET1 / TXPET0 / MISP3 / MISP2 / MISP1 / MISP0  LSB -- TRANSMIT PARAMETER (Power on default : 0x75)
#define     RXSR                0x30        // (R/W) MSB  RXFFFULL / WRFF1 / UPSECERR / RXFFOVFL / RXCRCERR / SECDECERR / -- / --  LSB -- RX MAC STATUS (Power on default : 0x00)
#define     ISRSTS              0x31        // (R/W) MSB  SLPIF / WAKEIF / MACTMRIF / SECIF / RXIF / TXG2IF / TXG1IF / TXNIF  LSB -- INTERRUPT STATUS (Power on default : 0x00)
#define     INTMSK              0x32        // (R/W) MSB  SLPMSK / WAKEMSK / MACTMRMSK / SECMSK / RXMSK / TXG2MSK / TXG1MSK / TXNMSK  LSB -- INTERRUPT MASK (Power on default : 0xFF)
#define     LRXSR               0x33        // (R/W) MSB  -- / -- / -- / -- / LRXCRCERR / -- / -- / --  LSB -- LAST RX STATUS (Power on default : 0x00)
#define     SPIRXF              0x34        // (R/W) MSB  -- / -- / BATIND / -- / -- / -- / RDFF1 / RXFIFO2  LSB -- SPI AND RX FIFO CONTORL (Power on default : 0x00)
#define     SLPACK              0x35        // (R/W) MSB  SLPACK / WAKECNT6 / WAKECNT5 / WAKECNT4 / WAKECNT3 / WAKECNT2 / WAKECNT1 / WAKECNT0  LSB -- SLEEP ACKNOWLEDGEMENT AND WAKE-UP COUNTER (Power on default : 0x00)
#define     RFCTL               0x36        // (R/W) MSB  -- / -- / -- / WAKECNT8 / WAKECNT7 / RFRST / RFTXMODE / RFRXMODE  LSB -- RF MODE CONTROL (Power on default : 0x00)
#define     SECCR2              0x37        // (R/W) MSB  UPDEC / UPENC / TXG2CIPHER2 / TXG2CIPHER1 / TXG2CIPHER0 / TXG1CIPHER2 / TXG1CIPHER1 / TXG1CIPHER0  LSB -- SECURITY CONTROL 2 (Power on default : 0x00)
#define     BBREG0              0x38        // (R/W) MSB  PRECNT3 / PRECNT2 / PRECNT1 / PRECNT0 / -- / CONT_TX / TURBO1 / TURBO0  LSB -- BASEBAND REGISTER 0 (Power on default : 0x80)
#define     BBREG2              0x3A        // (R/W) MSB  CCAMODE1 / CCAMODE0 / CCATH3 / CCATH2 / CCATH1 / CCATH0 / -- / --  LSB -- BASEBAND REGISTER 2 (Power on default : 0x7F)
#define     BBREG3              0x3B        // (R/W) MSB  PREVALIDTH3 / PREVALIDTH2 / PREVALIDTH1 / PREVALIDTH0 / PREDETTH3 / PREDETTH2 / PREDETTH1 / PREDETTH0  LSB -- BASEBAND REGISTER 3 (Power on default : 0xD8)
#define     BBREG4              0x3C        // (R/W) MSB  CSTH3 / CSTH2 / CSTH1 / PRECNT2 / PRECNT1 / PRECNT0 / TXDACEDGE / RXADCEDGE  LSB -- BASEBAND REGISTER 4 (Power on default : 0x9C)
#define     BBREG5              0x3D        // (R/W) MSB  PEAKLATE4 / PEAKLATE3 / PEAKLATE2 / PEAKLATE1 / PEAKLATE0 / PEAKEARLY2 / PEAKEARLY1 / PEAKEARLY0  LSB -- BASEBAND REGISTER 5 (Power on default : 0x3B)
#define     BBREG6              0x3E        // (R/W) MSB  RSSIMODE1 / RSSIMODE2 / RSSIMAXL / -- / -- / -- / -- / RSSIRDY  LSB -- BASEBAND REGISTER 6 (Power on default : 0x01)
#define     BBREG7              0x3F        // (R/W) MSB  CCAEDTH7 / CCAEDTH6 / CCAEDTH5 / CCAEDTH4 / CCAEDTH3 / CCAEDTH2 / CCAEDTH1 / CCAEDTH0  LSB -- BASEBAND REGISTER 7 (Power on default : 0x60)
#define     TX_FIFO             0x000
#define     RFCTRL0             0x200       // (R/W) MSB  CHANNEL3 / CHANNEL2 / CHANNEL1 / CHANNEL0 / -- / -- / PSCTRL1 / PSCTRL0  LSB -- RF CONTROL 0 (Power on default : 0x01)
#define     RFCTRL1             0x201       // (R/W) MSB  -- / -- / -- / -- / -- / -- / VCORX1 / VCORX0  LSB -- RF CONTROL 1 (Power on default : 0x01)
#define     RFCTRL2             0x202       // (R/W) MSB  PLLDMY / RXFC0-1 / RXFC0-0 / RXADC / -- / RSSIBA2 / RSSIBA1 / RSSIBA0  LSB -- RF CONTROL 2 (Power on default : 0x84)
#define     RFCTRL3             0x203       // (R/W) MSB  TXGB4 / TXGB3 / TXGB2 / TXGB1 / TXGB0 / -- / -- / --  LSB -- RF CONTROL 3 (Power on default : 0x00)
#define     RFCTRL4             0x204       // (R/W) MSB  RXFBW4 / RXFBW3 / RXFBW2 / RXFBW1 / RXFBW0 / RXFCO / RXD2O1 / RXD2O0  LSB -- RF CONTROL 4 (Power on default : 0x00)
#define     RFCTRL5             0x205       // (R/W) MSB  BATTH3 / BATTH2 / BATTH1 / BATTH0 / -- / -- / -- / --  LSB -- RF CONTROL 5 (Power on default : 0x00)
#define     RFCTRL6             0x206       // (R/W) MSB  TXFBW1 / TXFBW0 / 32MXCO1 / 32MCCO0 / BATEN / -- / -- / --  LSB -- RF CONTROL 6 (Power on default : 0xF0)
#define     RFCTRL7             0x207       // (R/W) MSB  OUTCLK2 / OUTCLK1 / OUTCLK0 / RXFC2 / TXFS1 / TXFS0 / -- / --  LSB -- RF CONTROL 7 (Power on default : 0x00)
#define     RFCTRL8             0x208       // (R/W) MSB  TXD2CO1 / TXD2CO0 / -- / -- / -- / -- / -- / --  LSB -- RF CONTROL 8 (Power on default : 0x0C)
#define     SLPCAL_0            0x209       // (R/W) MSB  SLPCAL7 / SLPCAL6 / SLPCAL5 / SLPCAL4 / SLPCAL3 / SLPCAL2 / SLPCAL1 / SLPCAL0  LSB -- SLEEP CLOCK CALIBRATION 0 (Power on default : 0x00)
#define     SLPCAL_1            0x20A       // (R/W) MSB  SLPCAL15 / SLPCAL14 / SLPCAL13 / SLPCAL12 / SLPCAL11 / SLPCAL10 / SLPCAL9 / SLPCAL8  LSB -- SLEEP CLOCK CALIBRATION 1 (Power on default : 0x00)
#define     SLPCAL_2            0x20B       // (R/W) MSB  SLPCALRDY / -- / -- / SLPCALEN / SLPCAL19 / SLPCAL18 / SLPCAL17 / SLPCAL16  LSB -- SLEEP CLOCK CALIBRATION 2 (Power on default : 0x00)
#define     RSSI                0x210       // (R/W) MSB  RSSI7 / RSSI6 / RSSI5 / RSSI4 / RSSI3 / RSSI2 / RSSI1 / RSSI0  LSB -- RSSI (Power on default : 0x00)
#define     IRQCTRL             0x211       // (R/W) MSB  -- / -- / -- / -- / -- / -- / IRQPOL / --  LSB -- INTERRUPT CONTROL (Power on default : 0x00)
#define     SADRCTRL            0x212       // (R/W) MSB  -- / -- / -- / -- / -- / -- / SADRMODE1 / SADRMODE0  LSB -- SOURCE ADDRESS CONTROL (Power on default : 0x00)
#define     SRCADR_0            0x213       // (R/W) MSB  SRCADR7 / SRCADR6 / SRCADR5 / SRCADR4 / SRCADR3 / SRCADR2 / SRCADR1 / SRCADR0  LSB -- SOURCE ADDRESS 0 (Power on default : 0x00)
#define     SRCADR_1            0x214       // (R/W) MSB  SRCADR15 / SRCADR14 / SRCADR13 / SRCADR12 / SRCADR11 / SRCADR10 / SRCADR9 / SRCADR8  LSB -- SOURCE ADDRESS 1 (Power on default : 0x00)
#define     SRCADR_2            0x215       // (R/W) MSB  SRCADR23 / SRCADR22 / SRCADR21 / SRCADR20 / SRCADR19 / SRCADR18 / SRCADR17 / SRCADR16  LSB -- SOURCE ADDRESS 2 (Power on default : 0x00)
#define     SRCADR_3            0x216       // (R/W) MSB  SRCADR31 / SRCADR30 / SRCADR29 / SRCADR28 / SRCADR27 / SRCADR26 / SRCADR25 / SRCADR24  LSB -- SOURCE ADDRESS 3 (Power on default : 0x00)
#define     SRCADR_4            0x217       // (R/W) MSB  SRCADR39 / SRCADR38 / SRCADR37 / SRCADR36 / SRCADR35 / SRCADR34 / SRCADR33 / SRCADR32  LSB -- SOURCE ADDRESS 4 (Power on default : 0x00)
#define     SRCADR_5            0x218       // (R/W) MSB  SRCADR47 / SRCADR46 / SRCADR45 / SRCADR44 / SRCADR43 / SRCADR42 / SRCADR41 / SRCADR40  LSB -- SOURCE ADDRESS 5 (Power on default : 0x00)
#define     SRCADR_6            0x219       // (R/W) MSB  SRCADR55 / SRCADR54 / SRCADR53 / SRCADR52 / SRCADR51 / SRCADR50 / SRCADR49 / SRCADR48  LSB -- SOURCE ADDRESS 6 (Power on default : 0x00)
#define     SRCADR_7            0x21A       // (R/W) MSB  SRCADR63 / SRCADR62 / SRCADR61 / SRCADR60 / SRCADR59 / SRCADR58 / SRCADR57 / SRCADR56  LSB -- SOURCE ADDRESS 7 (Power on default : 0x00)
#define     HLEN                0x21E       // (R/W) MSB  -- / -- / HLEN5 / HLEN4 / HLEN3 / HLEN2 / HLEN1 / HLEN0  LSB -- HEADER LENGTH (Power on default : 0x00)
#define     SLPCTRL             0x220       // (R/W) MSB  -- / -- / -- / SCLKDIV4 / SCLKDIV3 / SCLKDIV2 / SCLKDIV1 / SCLKDIV0  LSB -- SLEEP CLOCK CONTROL (Power on default : 0x00)
#define     WAKETIMEL           0x222       // (R/W) MSB  WAKETIME7 / WAKETIME6 / WAKETIME5 / WAKETIME4 / WAKETIME3 / WAKETIME2 / WAKETIME1 / WAKETIME0  LSB -- WAKE-UP TIME MATCH VALUE LOW BYTE (Power on default : 0x0A)
#define     WAKETIMEH           0x223       // (R/W) MSB  -- / -- / -- / -- / -- / WAKETIME10 / WAKETIME9 / WAKETIME8  LSB -- WAKE-UP TIME MATCH VALUE HIGH BYTE (Power on default : 0x00)
#define     REMCNTL             0x224       // (R/W) MSB  REMCNT7 / REMCNT6 / REMCNT5 / REMCNT4 / REMCNT3 / REMCNT2 / REMCNT1 / REMCNT0  LSB -- REMAIN COUNTER LOW BYTE (Power on default : 0x00)
#define     REMCNTH             0x225       // (R/W) MSB  REMCNT15 / REMCNT14 / REMCNT13 / REMCNT12 / REMCNT11 / REMCNT10 / REMCNT9 / REMCNT8  LSB -- REMAIN COUNTER HIGH BYTE (Power on default : 0x00)
#define     MAINCNT_0           0x226       // (R/W) MSB  MAINCNT7 / MAINCNT6 / MAINCNT5 / MAINCNT4 / MAINCNT3 / MAINCNT2 / MAINCNT1 / MAINCNT0  LSB -- MAIN COUNTER 0 (Power on default : 0x00)
#define     MAINCNT_1           0x227       // (R/W) MSB  MAINCNT15 / MAINCNT14 / MAINCNT13 / MAINCNT12 / MAINCNT11 / MAINCNT10 / MAINCNT9 / MAINCNT8  LSB -- MAIN COUNTER 1 (Power on default : 0x00)
#define     MAINCNT_2           0x228       // (R/W) MSB  MAINCNT23 / MAINCNT22 / MAINCNT21 / MAINCNT20 / MAINCNT19 / MAINCNT18 / MAINCNT17 / MAINCNT16  LSB -- MAIN COUNTER 2 (Power on default : 0x00)
#define     MAINCNT_3           0x229       // (R/W) MSB  STARTCNT / -- / -- / -- / -- / -- / MAINCNT25 / MAINCNT24  LSB -- MAIN COUNTER 3 (Power on default : 0x00)
#define     TESTMODE            0x22F       // (R/W) MSB  MSPI / RSSIRDY1 / RSSIRDY0 / RSSIWAIT1 / RSSIWAIT0 / TESTMODE2 / TESTMODE1 / TESTMODE0  LSB -- TEST MODE (Power on default : 0x28)
#define     ASSOEADR_0          0x230       // (R/W) MSB  ASSOEADR7 / ASSOEADR6 / ASSOEADR5 / ASSOEADR4 / ASSOEADR3 / ASSOEADR2 / ASSOEADR1 / ASSOEADR0  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 0 (Power on default : 0x00)
#define     ASSOEADR_1          0x231       // (R/W) MSB  ASSOEADR15 / ASSOEADR14 / ASSOEADR13 / ASSOEADR12 / ASSOEADR11 / ASSOEADR10 / ASSOEADR9 / ASSOEADR8  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 1 (Power on default : 0x00)
#define     ASSOEADR_2          0x232       // (R/W) MSB  ASSOEADR23 / ASSOEADR22 / ASSOEADR21 / ASSOEADR20 / ASSOEADR19 / ASSOEADR18 / ASSOEADR17 / ASSOEADR16  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 2 (Power on default : 0x00)
#define     ASSOEADR_3          0x233       // (R/W) MSB  ASSOEADR31 / ASSOEADR30 / ASSOEADR29 / ASSOEADR28 / ASSOEADR27 / ASSOEADR26 / ASSOEADR25 / ASSOEADR24  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 3 (Power on default : 0x00)
#define     ASSOEADR_4          0x234       // (R/W) MSB  ASSOEADR39 / ASSOEADR38 / ASSOEADR37 / ASSOEADR36 / ASSOEADR35 / ASSOEADR34 / ASSOEADR33 / ASSOEADR32  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 4 (Power on default : 0x00)
#define     ASSOEADR_5          0x235       // (R/W) MSB  ASSOEADR47 / ASSOEADR46 / ASSOEADR45 / ASSOEADR44 / ASSOEADR43 / ASSOEADR42 / ASSOEADR41 / ASSOEADR40  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 5 (Power on default : 0x00)
#define     ASSOEADR_6          0x236       // (R/W) MSB  ASSOEADR55 / ASSOEADR54 / ASSOEADR53 / ASSOEADR52 / ASSOEADR51 / ASSOEADR50 / ASSOEADR49 / ASSOEADR48  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 6 (Power on default : 0x00)
#define     ASSOEADR_7          0x237       // (R/W) MSB  ASSOEADR63 / ASSOEADR62 / ASSOEADR61 / ASSOEADR60 / ASSOEADR59 / ASSOEADR58 / ASSOEADR57 / ASSOEADR56  LSB -- ASSOCIATED COORDINATOR EXTENDED ADDRESS 7 (Power on default : 0x00)
#define     ASSOSADRL           0x238       // (R/W) MSB  ASSOSADR7 / ASSOSADR6 / ASSOSADR5 / ASSOSADR4 / ASSOSADR3 / ASSOSADR2 / ASSOSADR1 / ASSOSADR0  LSB -- ASSOCIATED COORDINATOR SHORT ADDRESS LOW BYTE (Power on default : 0x00)
#define     ASSOSADRH           0x239       // (R/W) MSB  ASSOSADR15 / ASSOSADR14 / ASSOSADR13 / ASSOSADR12 / ASSOSADR11 / ASSOSADR10 / ASSOSADR9 / ASSOSADR8  LSB -- ASSOCIATED COORDINATOR SHORT ADDRESS HIGH BYTE (Power on default : 0x00)
#define     RXFRMTYPE           0x23C       // (R/W) MSB  RXFTYPE7 / RXFTYPE6 / RXFTYPE5 / RXFTYPE4 / RXFTYPE3 / RXFTYPE2 / RXFTYPE1 / RXFTYPE0  LSB -- RX FIFO PACKET FILTER (Power on default : 0x0B)
#define     GPIODIR             0x23D       // (R/W) MSB  -- / -- / -- / -- / GPIO3DIR / GPIO2DIR / GPIO1DIR / GPIO0DIR  LSB -- GPIO PIN DIRECTION (Power on default : 0x3F)
#define     GPIO                0x23E       // (R/W) MSB  -- / -- / -- / -- / GPIO3 / GPIO2 / GPIO1 / GPIO0  LSB -- GPIO PIN (Power on default : 0x00)
#define     UPNONCE_0           0x240       // (R/W) MSB  UPNONCE7 / UPNONCE6 / UPNONCE5 / UPNONCE4 / UPNONCE3 / UPNONCE2 / UPNONCE1 / UPNONCE0  LSB -- UPPER NONCE SECURITY 0 (Power on default : 0x00)
#define     UPNONCE_1           0x241       // (R/W) MSB  UPNONCE15 / UPNONCE14 / UPNONCE13 / UPNONCE12 / UPNONCE11 / UPNONCE10 / UPNONCE9 / UPNONCE8  LSB -- UPPER NONCE SECURITY 1 (Power on default : 0x00)
#define     UPNONCE_2           0x242       // (R/W) MSB  UPNONCE23 / UPNONCE22 / UPNONCE21 / UPNONCE20 / UPNONCE19 / UPNONCE18 / UPNONCE17 / UPNONCE16  LSB -- UPPER NONCE SECURITY 2 (Power on default : 0x00)
#define     UPNONCE_3           0x243       // (R/W) MSB  UPNONCE31 / UPNONCE30 / UPNONCE29 / UPNONCE28 / UPNONCE27 / UPNONCE26 / UPNONCE25 / UPNONCE24  LSB -- UPPER NONCE SECURITY 3 (Power on default : 0x00)
#define     UPNONCE_4           0x244       // (R/W) MSB  UPNONCE39 / UPNONCE38 / UPNONCE37 / UPNONCE36 / UPNONCE35 / UPNONCE34 / UPNONCE33 / UPNONCE32  LSB -- UPPER NONCE SECURITY 4 (Power on default : 0x00)
#define     UPNONCE_5           0x245       // (R/W) MSB  UPNONCE47 / UPNONCE46 / UPNONCE45 / UPNONCE44 / UPNONCE43 / UPNONCE42 / UPNONCE41 / UPNONCE40  LSB -- UPPER NONCE SECURITY 5 (Power on default : 0x00)
#define     UPNONCE_6           0x246       // (R/W) MSB  UPNONCE55 / UPNONCE54 / UPNONCE53 / UPNONCE52 / UPNONCE51 / UPNONCE50 / UPNONCE49 / UPNONCE48  LSB -- UPPER NONCE SECURITY 6 (Power on default : 0x00)
#define     UPNONCE_7           0x247       // (R/W) MSB  UPNONCE63 / UPNONCE62 / UPNONCE61 / UPNONCE60 / UPNONCE59 / UPNONCE58 / UPNONCE57 / UPNONCE56  LSB -- UPPER NONCE SECURITY 7 (Power on default : 0x00)
#define     UPNONCE_8           0x248       // (R/W) MSB  UPNONCE71 / UPNONCE70 / UPNONCE69 / UPNONCE68 / UPNONCE67 / UPNONCE66 / UPNONCE65 / UPNONCE64  LSB -- UPPER NONCE SECURITY 8 (Power on default : 0x00)
#define     UPNONCE_9           0x249       // (R/W) MSB  UPNONCE79 / UPNONCE78 / UPNONCE77 / UPNONCE76 / UPNONCE75 / UPNONCE74 / UPNONCE73 / UPNONCE72  LSB -- UPPER NONCE SECURITY 9 (Power on default : 0x00)
#define     UPNONCE_10          0x24A       // (R/W) MSB  UPNONCE87 / UPNONCE86 / UPNONCE85 / UPNONCE84 / UPNONCE83 / UPNONCE82 / UPNONCE81 / UPNONCE80  LSB -- UPPER NONCE SECURITY 10 (Power on default : 0x00)
#define     UPNONCE_11          0x24B       // (R/W) MSB  UPNONCE95 / UPNONCE94 / UPNONCE93 / UPNONCE92 / UPNONCE91 / UPNONCE90 / UPNONCE89 / UPNONCE88  LSB -- UPPER NONCE SECURITY 11 (Power on default : 0x00)
#define     UPNONCE_12          0x24C       // (R/W) MSB  UPNONCE103 / UPNONCE102 UPNONCE101 / UPNONCE100 / UPNONCE99 / UPNONCE98 / UPNONCE97 / UPNONCE96  LSB -- UPPER NONCE SECURITY 12 (Power on default : 0x00)
#define     SECCTRL             0x24D       // (R/W) MSB  -- / -- / SEC_2006 / USRFLAG / -- / -- / -- / --  LSB -- SECURITY CONTROL (Power on default : 0x00)
#define     ENCFLG              0x24E       // (R/W) MSB  ENCFLG7 / ENCFLG6 / ENCFLG5 / ENCFLG4 / ENCFLG3 / ENCFLG2 / ENCFLG1 / ENCFLG0  LSB -- ENCRYPTION (Power on default : 0x00)
#define     AUTFLG              0x24F       // (R/W) MSB  AUTFLG7 / AUTFLG6 / AUTFLG5 / AUTFLG4 / AUTFLG3 / AUTFLG2 / AUTFLG1 / AUTFLG0  LSB -- AUTHENTICATION (Power on default : 0x00)
#define     RFCTRL50            0x250       // (R/W) MSB  -- / -- / -- / DCPOC / DCOPC3 / DCOPC2 / DCOPC1 / DCOPC0  LSB -- RF CONTROL 50 (Power on default : 0x00)
#define     RFCTRL51            0x251       // (R/W) MSB  DCOPC5 / DCOPC4 / -- / -- / -- / -- / -- / --  LSB -- RF CONTROL 51 (Power on default : 0x00)
#define     RFCTRL52            0x252       // (R/W) MSB  SLCTRL6 / SLCTRL5 / SLCTRL4 / SLCTRL3 / SLCTRL2 / SLCTRL1 / SLCTRL0 / 32MXCTRL  LSB -- RF CONTROL 52 (Power on default : 0xFF)
#define     RFCTRL53            0x253       // (R/W) MSB  -- / FIFOPS / DIGITALPS / -- / PA1CFEN / PA1CTRLF-2 / PA1CTRLF-1 / PA1CTRLF-0  LSB -- RF CONTROL 53 (Power on default : 0x00)
#define     RFCTRL54            0x254       // (R/W) MSB  1MCSEN / 1MFRCH6 / 1MCSCH5 / 1MCSCH4 / 1MCSCH3 / 1MCSCH2 / 1MCSCH1 / 1MCSCH0  LSB -- RF CONTROL 54 (Power on default : 0x00)
#define     RFCTRL55            0x255       // (R/W) MSB  -- / -- / HALTCTRL / -- / -- / -- / -- / --  LSB -- RF CONTROL 55 (Power on default : 0x00)
#define     RFCTRL59            0x259       // (R/W) MSB  -- / -- / -- / -- / -- / -- / -- / PLLOPT4  LSB -- RF CONTROL 59 (Power on default : 0x01)
#define     RFCTRL73            0x273       // (R/W) MSB  VCOTXOPT1 / VCOTXOPT1 / -- / ADCOPT / PLLOPT3 / PLLOPT2 / PLLOPT1 / PLLOPT0  LSB -- RF CONTROL 73 (Power on default : 0x00)
#define     RFCTRL74            0x274       // (R/W) MSB  PA1CCEN / PA1CTRLC-2 / PA1CTRLC-1 / PA1CTRLC-0 / PA2CTRL-3 / PA2CTRL-2 / PA2CTRL-1 / PA2CTRL-0  LSB -- RF CONTROL 74 (Power on default : 0xCA)
#define     RFCTRL75            0x275       // (R/W) MSB  -- / -- / -- / SCLKSEL / SCLKOPT3 / SCLKOPT2 / SCLKOPT1 / SCLKOPT0  LSB -- RF CONTROL 75 (Power on default : 0x15)
#define     RFCTRL76            0x276       // (R/W) MSB  -- / -- / -- / -- / -- / SCLKOPT6 / SCLKOPT5 / SCLKOPT4  LSB -- RF CONTROL 76 (Power on default : 0x01)
#define     RFCTRL77            0x277       // (R/W) MSB  -- / -- / SLPSEL1 / SLPSEL0 / SLPVCTRL1 / SLPVCTRL0 / SLPVSEL1 / SLPVSEL0  LSB -- RF CONTROL 77 (Power on default : 0x08)
#define     INITCNTL            0x27A       // (R/W) MSB  INITCNT7 / INITCNT6 / INITCNT5 / INITCNT4 / INITCNT3 / INITCNT2 / INITCNT1 / INITCNT0  LSB -- INITIAL COUNTER LOW BYTE (Power on default : 0x00)
#define     INITCNTH            0x27B       // (R/W) MSB  INITCNT15 / INITCNT14 / INITCNT13 / INITCNT12 / INITCNT11 / INITCNT10 / INITCNT9 / INITCNT8  LSB -- INITIAL COUNTER HIGH BYTE (Power on default : 0x00)
#define     RX_FIFO             0x300

/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __US2400_REG_H */

/******** (C) COPYRIGHT 2013 Uniband Electronic Corp. ******END OF FILE********/
