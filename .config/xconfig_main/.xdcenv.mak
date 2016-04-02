#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/grace_3_00_02_64/packages;C:/ti/msp430/MSP430ware_1_95_00_32/driverlib/packages;C:/ti/msp430/MSP430ware_1_95_00_32/driverlib;C:/ti/ccsv6/ccs_base;D:/MSP_430_Workspace/Chime_Module2/.config
override XDCROOT = c:/ti/xdctools_3_30_06_67_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/grace_3_00_02_64/packages;C:/ti/msp430/MSP430ware_1_95_00_32/driverlib/packages;C:/ti/msp430/MSP430ware_1_95_00_32/driverlib;C:/ti/ccsv6/ccs_base;D:/MSP_430_Workspace/Chime_Module2/.config;c:/ti/xdctools_3_30_06_67_core/packages;..
HOSTOS = Windows
endif
