#ifndef _COM_BONOVO_BLUETOOTH_CMD_H
#define _COM_BONOVO_BLUETOOTH_CMD_H

//ATָ��
enum {
	//2����Ӧ�ù淶ָ��
	CMD_AT_CA = 0,
	CMD_AT_CB,
	CMD_AT_CC,
	CMD_AT_CD,
	CMD_AT_CE,
	CMD_AT_CF,
	CMD_AT_CG,
	CMD_AT_CH,
	CMD_AT_CI,
	CMD_AT_CJ,
	CMD_AT_CK,
	CMD_AT_CL,
	CMD_AT_CM,
	CMD_AT_CO,
	CMD_AT_CW,
	CMD_AT_CX,
	CMD_AT_CY,
	CMD_AT_CN,
	CMD_AT_CP,
	//3������·��
	CMD_AT_WI,
	CMD_AT_MA,
	CMD_AT_MC,
	CMD_AT_MD,
	CMD_AT_ME,
	CMD_AT_MV,
	CMD_AT_MO,
	//4�绰��
	CMD_AT_PA,
	CMD_AT_PB,
	CMD_AT_PH,
	CMD_AT_PI,
	CMD_AT_PJ,
	CMD_AT_PF,
	CMD_AT_PE,
	CMD_AT_PG,
	CMD_AT_QA,
	CMD_AT_QB,
	CMD_AT_QC,
	//5�����ܲ���
	CMD_AT_CZ,
	CMD_AT_CV,
	CMD_AT_MY,
	CMD_AT_MG,
	CMD_AT_MH,
	CMD_AT_MP,
	CMD_AT_MQ,
	CMD_AT_MF,
	CMD_AT_MM,
	CMD_AT_MN,
	CMD_AT_MX,
	CMD_AT_DA,
	//added by leonkernan
	CMD_AT_CQ,
	CMD_AT_CR,
	CMD_AT_CS,
	CMD_AT_CT,
	CMD_AT_MZ,
	CMD_AT_QD,
	CMD_AT_QE,
	CMD_AT_PP,
	CMD_AT_MAX,
};

enum {
	CMD_UNSOLICATED_IS = 0,
	CMD_UNSOLICATED_IA,
	CMD_UNSOLICATED_IB,
	CMD_UNSOLICATED_IC,
	CMD_UNSOLICATED_ID,
	CMD_UNSOLICATED_IF,
	CMD_UNSOLICATED_IG,
	CMD_UNSOLICATED_II,
	CMD_UNSOLICATED_IJ,
	CMD_UNSOLICATED_IR,
	CMD_UNSOLICATED_IV,
	CMD_UNSOLICATED_IU,
	CMD_UNSOLICATED_MA,
	CMD_UNSOLICATED_MB,
	CMD_UNSOLICATED_MC,
	CMD_UNSOLICATED_MD,
	CMD_UNSOLICATED_MF,
	CMD_UNSOLICATED_MG,
	CMD_UNSOLICATED_ML,
	CMD_UNSOLICATED_MM,
	CMD_UNSOLICATED_MN,
	CMD_UNSOLICATED_MU,
	CMD_UNSOLICATED_MW,
	CMD_UNSOLICATED_MX,
	CMD_UNSOLICATED_MY,
	CMD_UNSOLICATED_PA,
	CMD_UNSOLICATED_PN,
	CMD_UNSOLICATED_PC,
	CMD_UNSOLICATED_PB,
	CMD_UNSOLICATED_PK,
	CMD_UNSOLICATED_PL,
	CMD_UNSOLICATED_PE,
	CMD_UNSOLICATED_PF,
	CMD_UNSOLICATED_WA,
	CMD_UNSOLICATED_WB,
	CMD_UNSOLICATED_WC,
	CMD_UNSOLICATED_WD,
	CMD_UNSOLICATED_WN,
	CMD_UNSOLICATED_QB,
	CMD_UNSOLICATED_QA,

	//
	CMD_UNSOLICATED_IX,
	CMD_UNSOLICATED_MK,
	CMD_UNSOLICATED_QH, //HFP_PROFILE_VERSION
	CMD_UNSOLICATED_ERROR,
	CMD_UNSOLICATED_OK,
	CMD_UNSOLICATED_CZ,
	CMD_UNSOLICATED_CV,
	// add by bonovo zbiao
	CMD_UNSOLICATED_IO0,
	CMD_UNSOLICATED_IO1,

	// added by leonkernan
	CMD_UNSOLICATED_IK,
	CMD_UNSOLICATED_IL,
	CMD_UNSOLICATED_IM,
	CMD_UNSOLICATED_IN,
	CMD_UNSOLICATED_IQ,
	CMD_UNSOLICATED_PT,
	CMD_UNSOLICATED_PV,
	CMD_UNSOLICATED_PZ,
	CMD_UNSOLICATED_PM,
	CMD_UNSOLICATED_MH,
	CMD_UNSOLICATED_IT,
	CMD_UNSOLICATED_MO0,
	CMD_UNSOLICATED_MO1,
	CMD_UNSOLICATED_MJ,
	CMD_UNSOLICATED_MAX,
};

// codec status
typedef enum
{
	CODEC_LEVEL_NO_ANALOG = 0,
    CODEC_LEVEL_BT_MUSIC = 1,
    CODEC_LEVEL_AV_IN = 2,
    CODEC_LEVEL_DVB = 3,
    CODEC_LEVEL_DVD = 4,
    CODEC_LEVEL_RADIO = 5,
    CODEC_LEVEL_BT_TEL = 6,
    CODEC_LEVEL_COUNT
}CODEC_Level;

//#define DEBUG
#ifdef DEBUG
#define LOGV(fmt, args...)	ALOGV(fmt, ##args)
#define LOGD(fmt, args...)	ALOGD(fmt, ##args)
#define LOGI(fmt, args...)	ALOGI(fmt, ##args)
#define LOGW(fmt, args...)	ALOGW(fmt, ##args)
#define LOGE(fmt, args...)	ALOGE(fmt, ##args)
#else
#define LOGV(fmt, args...)
#define LOGD(fmt, args...)
#define LOGI(fmt, args...)
#define LOGW(fmt, args...)
#define LOGE(fmt, args...)
#endif

#endif
