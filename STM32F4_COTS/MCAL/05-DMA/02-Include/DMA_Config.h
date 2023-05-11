//Author : Ahmed Elessawy  


#ifndef DMA_CONFIG_H
#define DMA_CONFIG_H



typedef struct 

{
	u32 Steeam;
	u32 Channel;
	
	u32 H_Transfer;
	
	u32 C_Transfer;
	
	u32 FifoLevel;
	
	
	u32 *MemAdd;
	u32 MemDataSize;
	u32 MemInc;
	
	u32 *PrephAdd;
	u32 PrehDataSize;
	u32 PrehInc;
	u32 PrephIncSize;
	
	u32 DataDir;
	u32 PrehFlowCtrl;
	u32 PriorityLevel;
	
	u32 CurrentTarget;
	u32 Circ;
	u32 DoubleBuffer;
	
	u32 Mburst;
	u32 Pburst;
	
	u32 NuOfDataSend;
}StreamCfg_t, * const StreamCfgHandler_t;


















#endif