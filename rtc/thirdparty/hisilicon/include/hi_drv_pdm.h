#ifndef __HI_DRV_PDM_H__
#define __HI_DRV_PDM_H__

#include "hi_type.h"
#include "hi_unf_disp.h"
#include "hi_unf_common.h"
#include "hi_go_surface.h"
#include "hi_unf_mce.h"
#include "hi_unf_pdm.h"
#include "hi_unf_panel.h"
#ifdef __cplusplus
extern "C" {
#endif

#define MCE_DEF_BASEPARAM_SIZE       (8*1024)
#define MCE_DEF_LOGOPARAM_SIZE		 (8*1024)
#define MCE_DEF_PLAYPARAM_SIZE		 (8*1024)
//#define MCE_DEF_PANELPARAM_SIZE		 (52*1024)

#define PARSER_BASE_FLASH_NAME         "baseparam"
#define PARSER_LOGO_FLASH_NAME         "logo"
#define PARSER_FASTPLAY_FLASH_NAME     "fastplay"

#define MCE_BASE_TABLENAME_DISP0          "BASE_TABLE_DISP0"
#define MCE_BASE_TABLENAME_DISP1          "BASE_TABLE_DISP1"

#define MCE_BASE_KEYNAME_FMT            "BASE_KEY_FMT"
#define MCE_BASE_KEYNAME_INTF_HDMI      "BASE_KEY_HDMI"
#define MCE_BASE_KEYNAME_INTF_YPBPR     "BASE_KEY_YPBPR"
#define MCE_BASE_KEYNAME_INTF_CVBS      "BASE_KEY_CVBS"
#define MCE_BASE_KEYNAME_INTF_RGB	    "BASE_KEY_RGB"
#define MCE_BASE_KEYNAME_INTF_SVIDEO    "BASE_KEY_SVIDEO"
#define MCE_BASE_KEYNAME_INTF_BT656     "BASE_KEY_BT656"
#define MCE_BASE_KEYNAME_INTF_BT1120    "BASE_KEY_BT1120"
#define MCE_BASE_KEYNAME_INTF_LCD       "BASE_KEY_LCD"
#define MCE_BASE_KEYNAME_INTF_VGA       "BASE_KEY_VGA"
#define MCE_BASE_KEYNAME_PF             "BASE_KEY_PF"
#define MCE_BASE_KEYNAME_DISPW          "BASE_KEY_DISPW"
#define MCE_BASE_KEYNAME_DISPH          "BASE_KEY_DISPH"
#define MCE_BASE_KEYNAME_SCRX           "BASE_KEY_SCRX"
#define MCE_BASE_KEYNAME_SCRY           "BASE_KEY_SCRY"
#define MCE_BASE_KEYNAME_SCRW           "BASE_KEY_SCRW"
#define MCE_BASE_KEYNAME_SCRH           "BASE_KEY_SCRH"
#define MCE_BASE_KEYNAME_HULEP          "BASE_KEY_HULEP"
#define MCE_BASE_KEYNAME_SATU           "BASE_KEY_SATU"
#define MCE_BASE_KEYNAME_CONTR          "BASE_KEY_CONTR"
#define MCE_BASE_KEYNAME_BRIG           "BASE_KEY_BRIG"
#define MCE_BASE_KEYNAME_BGCOLOR        "BASE_KEY_BGCOLOR"
#define MCE_BASE_KEYNAME_MACRSN         "BASE_KEY_MACRSN"
#define MCE_BASE_KEYNAME_TIMING         "BASE_KEY_TIMING"
#define MCE_BASE_KEYNAME_GAMA           "BASE_KEY_GAMA"
#define MCE_BASE_KEYNAME_ASPECT         "BASE_KEY_ASPECT"

#define MCE_BASE_KEYNAME_SRC_DISP       "BASE_KEY_SOURCE_DISP"
#define MCE_BASE_KEYNAME_VIRSCW         "BASE_KEY_VIRSCW"
#define MCE_BASE_KEYNAME_VIRSCH         "BASE_KEY_VIRSCH"
#define MCE_BASE_KEYNAME_DISP_L         "BASE_KEY_DISP_L"
#define MCE_BASE_KEYNAME_DISP_T         "BASE_KEY_DISP_T"
#define MCE_BASE_KEYNAME_DISP_R         "BASE_KEY_DISP_R"
#define MCE_BASE_KEYNAME_DISP_B         "BASE_KEY_DISP_B"
#define MCE_LOGO_TABLENAME              "LOGO_TABLE"
#define MCE_LOGO_KEYNAME_FLAG           "LOGO_KEY_FLAG"
#define MCE_LOGO_KEYNAME_CONTLEN        "LOGO_KEY_LEN"

#define MCE_PLAY_TABLENAME              "PLAY_TABLE"
#define MCE_PLAY_KEYNAME_FLAG           "PLAY_KEY_FLAG"
#define MCE_PLAY_KEYNAME_DATALEN        "PLAY_KEY_DATALEN"
#define MCE_PLAY_KEYNAME_PARAM          "PLAY_KEY_PARAM"

#define MCE_BASE_TABLENAME_SOUND0       "BASE_TABLE_SOUND0"
#define MCE_BASE_TABLENAME_SOUND1       "BASE_TABLE_SOUND1"
#define MCE_BASE_TABLENAME_SOUND2       "BASE_TABLE_SOUND2"

#define MCE_BASE_KEYNAME_SND_DAC0        "BASE_KEY_SND_DAC0"
#define MCE_BASE_KEYNAME_SND_I2S0        "BASE_KEY_SND_I2S0"
#define MCE_BASE_KEYNAME_SND_I2S1        "BASE_KEY_SND_I2S1"
#define MCE_BASE_KEYNAME_SND_SPDIF0      "BASE_KEY_SND_SPDIF0"
#define MCE_BASE_KEYNAME_SND_HDMI0       "BASE_KEY_SND_HDMI0"
#define MCE_BASE_KEYNAME_SND_ARC0        "BASE_KEY_SND_ARC0"

/*cfg table*/
#define MCE_PANEL_TABLENAME_HEADER      "panelheader"
#define MCE_PANEL_TABLENAME_DATA        "paneldatabody"

/*panel para key*/
#define MCE_PANEL_KEYNAME_HEADER        "header"
#define MCE_PANEL_KEYNAME_INDEX         "index"

#define MCE_PANEL_PARAM_MAX_NUM        20

/*timing key*/
#define MCE_BASE_KEYNAME_TIMING_VFB         "BASE_KEY_TIMING_VFB"   //VFB
#define MCE_BASE_KEYNAME_TIMING_VBB         "BASE_KEY_TIMING_VBB"   //VBB
#define MCE_BASE_KEYNAME_TIMING_VACT         "BASE_KEY_TIMING_VACT" //VACT

#define MCE_BASE_KEYNAME_TIMING_HFB         "BASE_KEY_TIMING_HFB"	//HFB
#define MCE_BASE_KEYNAME_TIMING_HBB         "BASE_KEY_TIMING_HBB"	//HBB
#define MCE_BASE_KEYNAME_TIMING_HACT         "BASE_KEY_TIMING_HACT"	//HACT

#define MCE_BASE_KEYNAME_TIMING_VPW         "BASE_KEY_TIMING_VPW"   //VPW
#define MCE_BASE_KEYNAME_TIMING_HPW         "BASE_KEY_TIMING_HPW"   //HPW
#define MCE_BASE_KEYNAME_TIMING_IDV         "BASE_KEY_TIMING_IDV"   //IDV
#define MCE_BASE_KEYNAME_TIMING_IHS         "BASE_KEY_TIMING_IHS"   //IHS
#define MCE_BASE_KEYNAME_TIMING_IVS         "BASE_KEY_TIMING_IVS"   //IVS


#define MCE_BASE_KEYNAME_TIMING_CLKR         "BASE_KEY_TIMING_CLKR" //ClockReversal
#define MCE_BASE_KEYNAME_TIMING_DW         "BASE_KEY_TIMING_DW"     //DataWidth
#define MCE_BASE_KEYNAME_TIMING_ITFMT         "BASE_KEY_TIMING_ITFMT" //ItfFormat

#define MCE_BASE_KEYNAME_TIMING_DITE         "BASE_KEY_TIMING_DITE" //DitherEnable
#define MCE_BASE_KEYNAME_TIMING_CLK0         "BASE_KEY_TIMING_CLK0" //ClkPara0
#define MCE_BASE_KEYNAME_TIMING_CLK1         "BASE_KEY_TIMING_CLK1" //ClkPara1

#define MCE_BASE_KEYNAME_TIMING_INTERL         "BASE_KEY_TIMING_INTERL" //bInterlace
#define MCE_BASE_KEYNAME_TIMING_FIXF         "BASE_KEY_TIMING_FIXF"     //PixFreq
#define MCE_BASE_KEYNAME_TIMING_VERTF         "BASE_KEY_TIMING_VERTF"   //VertFreq
#define MCE_BASE_KEYNAME_TIMING_AW         "BASE_KEY_TIMING_AW"         //AspectRatioW
#define MCE_BASE_KEYNAME_TIMING_AH         "BASE_KEY_TIMING_AH"         //AspectRatioH
#define MCE_BASE_KEYNAME_TIMING_USEGAMMA         "BASE_KEY_TIMING_USEGAMMA" //bUseGamma
#define MCE_BASE_KEYNAME_TIMING_RSV0         "BASE_KEY_TIMING_RSV0"     //Reserve0
#define MCE_BASE_KEYNAME_TIMING_RSV1         "BASE_KEY_TIMING_RSV1"     //Reserve1

#define HI_FATAL_PDM(format...)    HI_FATAL_PRINT(HI_ID_PDM, format)
#define HI_ERR_PDM(format...)      HI_ERR_PRINT(HI_ID_PDM, format)
#define HI_WARN_PDM(format...)     HI_WARN_PRINT(HI_ID_PDM, format)
#define HI_INFO_PDM(format...)     HI_INFO_PRINT(HI_ID_PDM, format)

#define PDM_BASEPARAM_BUFNAME "baseparam"
#define PDM_PLAYPARAM_BUFNAME "playparam"
#define PDM_PLAYDATA_BUFNAME  "playdata"
#define PDM_PANELPARAM_BUFNAME  "panelparam"



typedef struct hiDISP_PARAM_S
{
    HI_UNF_DISP_E				enSrcDisp;
    HI_UNF_ENC_FMT_E            enFormat;   
    HI_U32                      u32Brightness;
    HI_U32                      u32Contrast;
    HI_U32                      u32Saturation;
    HI_U32                      u32HuePlus;
    HI_BOOL                     bGammaEnable; 
    HI_U32                      u32VirtScreenWidth;
    HI_U32                      u32VirtScreenHeight; 
    HI_UNF_DISP_OFFSET_S        stOffsetInfo;
    HI_UNF_DISP_BG_COLOR_S      stBgColor;
    HI_UNF_DISP_ASPECT_RATIO_S  stAspectRatio;
    HI_UNF_DISP_INTF_S          stIntf[HI_UNF_DISP_INTF_TYPE_BUTT];
    HI_UNF_DISP_TIMING_S        stDispTiming;
	HIGO_PF_E                   enPixelFormat;
}HI_DISP_PARAM_S;

typedef struct hiLOGO_PARAM_S
{
    HI_U32                      u32CheckFlag; 
    HI_U32                      u32LogoLen;
}HI_LOGO_PARAM_S;

typedef struct hiMCE_PARAM_S
{
    HI_U32                      u32CheckFlag;
    HI_U32                      u32PlayDataLen;
    HI_UNF_MCE_PLAY_PARAM_S     stPlayParam;
}HI_MCE_PARAM_S;

#define HI_FLASH_NAME_LEN   32

/*Flash pation info for mce use*/
typedef struct hiPDM_FLASH_INFO_S
{
    HI_CHAR             Name[HI_FLASH_NAME_LEN];
    HI_U32              u32Offset;
    HI_U32              u32Size;
	HI_BOOL				bShared;  /*whether share one partition with other data*/
}PDM_FLASH_INFO_S;

typedef enum hiPDM_PANEL_INDEX_STORE_MEDIUM_E
{
    PDM_PANEL_INDEX_STORE_MEDIUM_EEPROM = 0,
    PDM_PANEL_INDEX_STORE_MEDIUM_SPI_FLASH,
    PDM_PANEL_INDEX_STORE_MEDIUM_NAND_FLASH,
    PDM_PANEL_INDEX_STORE_MEDIUM_EMMC,

    PDM_PANEL_INDEX_STORE_MEDIUM_BUTT
} PDM_PANEL_INDEX_STORE_MEDIUM_E;

typedef struct hiPDM_PANEL_HEADER_S
{
    PDM_PANEL_INDEX_STORE_MEDIUM_E  enMedium;
    HI_U32                          u32Version;
    HI_U32                          u32TotalNum;
    HI_U32                          u32Index;
} PDM_PANEL_HEADER_S;

typedef struct hiPDM_PANEL_DATA_BODY_S
{
    HI_UNF_PANEL_INFO_S stPanelInfo;
    HI_CHAR             acPqBinPath[100];
    HI_U32              u32BlPwm;
    HI_U32              u32BlPwmUserMin;
    HI_U32              u32BlPwmUserMax;
} PDM_PANEL_DATA_BODY_S;

HI_S32 HI_DRV_PDM_Init(HI_VOID);
HI_S32 HI_DRV_PDM_DeInit(HI_VOID);
HI_S32 HI_DRV_PDM_GetDispParam(HI_UNF_DISP_E enDisp, HI_DISP_PARAM_S *pstDispParam);
HI_S32 HI_DRV_PDM_GetSoundParam(HI_UNF_SND_E enSound, HI_UNF_PDM_SOUND_PARAM_S * pstSoundParam);
HI_S32 HI_DRV_PDM_GetMceParam(HI_MCE_PARAM_S *pMceParam);
HI_S32 HI_DRV_PDM_GetMceData(HI_U32 u32Size, HI_U32 **pAddr);
HI_S32 HI_DRV_PDM_GetPanelIndex(HI_U32 *pu32Total,HI_U32 *pu32Index);
HI_S32 HI_DRV_PDM_SetPanelIndex(HI_U32 u32Index);
HI_S32 HI_DRV_PDM_GetPanelInfoVersion(HI_U32 *pu32Version);
HI_S32 HI_DRV_PDM_GetPanelParam(HI_U32 u32Index,HI_UNF_PANEL_INFO_S *pstPara);
HI_S32 HI_DRV_PDM_GetPanelPqPath(HI_U32 u32Index, HI_CHAR *pcPath);
HI_S32 HI_DRV_PDM_GetPanelBlPwm(HI_U32 u32Index, HI_U32 *pu32BlPwm);
HI_S32 HI_DRV_PDM_GetPanelBlPwmRange(HI_U32 u32Index, HI_U32 *pu32BlPwmUserMin, HI_U32 *pu32BlPwmUserMax);
HI_S32 HI_DRV_PDM_ReleaseReserveMem(const HI_CHAR *BufName);
HI_S32 HI_DRV_PDM_GetData(const HI_CHAR *BufName, HI_U32 **pu32DataAddr, HI_U32 *pu32DataLen);


/************** reserve mem ***************/
//void pdm_reserve_mem(void);


#ifdef __cplusplus
}
#endif

#endif


