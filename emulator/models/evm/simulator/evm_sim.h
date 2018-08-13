#ifndef DECLARE_EVM_H
#define DECLARE_EVM_H

#include <device.h>

// class EVM
class EVM: public TDevice
{
  void DisasmList_ArithmOps(char* out_buf,uint32 idx,uint32 arg_a,uint32 arg_b,uint32 arg_c );
  void DisasmList_CompareLogOps(char* out_buf,uint32 idx,uint32 arg_a,uint32 arg_b );
  void DisasmList_MemOps(char* out_buf,uint32 idx );
  void DisasmList_AccountsData(char* out_buf,uint32 idx );
  void DisasmList_BlockChain(char* out_buf,uint32 idx );
  void DisasmList_SystemOps(char* out_buf,uint32 idx );
  struct Main_tinst1{
      uint8 syscall;
    }/*Main_inst1*/;
  struct Main_tinst2{
    }/*Main_inst2*/;
  struct Main_tinst3{
    }/*Main_inst3*/;
  struct Main_tinst4{
    }/*Main_inst4*/;
  struct Main_tinst5{
      uint8 gas_opcode;
    }/*Main_inst5*/;
  struct Main_tinst6{
      uint8 opcode;
    }/*Main_inst6*/;
  struct Main_tinst7{
      uint8 count;
    }/*Main_inst7*/;
  struct Main_tinst8{
      uint8 count;
    }/*Main_inst8*/;
  struct Main_tinst9{
      uint8 count;
    }/*Main_inst9*/;
  struct Main_tinst10{
      uint8 count;
    }/*Main_inst10*/;
  struct Main_tinst11{
      uint8 opcode;
    }/*Main_inst11*/;
  struct Main_tinst12{
      uint8 opcode;
    }/*Main_inst12*/;
  struct Main_tinst13{
      uint8 opcode;
    }/*Main_inst13*/;
  struct Main_tinst14{
    }/*Main_inst14*/;
  struct TMainInst: public TInst{
    union{
      struct Main_tinst1 inst1;
      struct Main_tinst2 inst2;
      struct Main_tinst3 inst3;
      struct Main_tinst4 inst4;
      struct Main_tinst5 inst5;
      struct Main_tinst6 inst6;
      struct Main_tinst7 inst7;
      struct Main_tinst8 inst8;
      struct Main_tinst9 inst9;
      struct Main_tinst10 inst10;
      struct Main_tinst11 inst11;
      struct Main_tinst12 inst12;
      struct Main_tinst13 inst13;
      struct Main_tinst14 inst14;
    };
  };
public:
  RegMutable< uint32 >  pc;
  PD_REG< uint160 >  cur_addr;
  PD_REG< uint160 >  caller_addr;
  PD_REG< uint160 >  origin_addr;
  PD_REG< uint32 >  gas_price;
  PD_REG< uint32 >  gas_available;
  PD_REG< uint256 >  code_size;
  PD_REG< uint256 >  ext_code_size;
  PD_REG< uint256 >  inp_data_size;
  PD_REG< uint32 >  mem_size;
  PD_REG<uint256>  data_bus[1024];
  PD_REG<uint256>  storage_bus[256];
  PD_REG<uint256>  input_data[1024];
  PD_REG<uint256>  log_bus[1024];
  PD_REG< uint32 >  log_ptr;
  uint32  sp;
  uint1  is_pc_within_inst;
  uint256  CoinBase;
  uint256  TimeStamp;
  uint256  Number;
  uint256  Difficulty;
  uint256  GasLimit;
  iMemInterface<uint32,uint32>* prog_bus;
  void CheckList_ArithmOps(int aPipeNum,int aIdx,uint256 a,uint256 b,uint256 c);
void LockList_ArithmOps(int aPipeNum,int aIdx,uint256 a,uint256 b,uint256 c);
void UnLockList_ArithmOps(int aPipeNum,int aIdx,uint256 a,uint256 b,uint256 c);
void LLink_ArithmOps(int aIdx,uint256 a,uint256 b,uint256 c,TCycleCount aCount,int aLockAdd = 0);
TCycleCount ArithmOps_GetLock(int aPipeNum,int aIdx,uint256 a,uint256 b,uint256 c);
inline uint256 Get_ArithmOps(uint32 aIdx,uint256 a,uint256 b,uint256 c);
  void CheckList_CompareLogOps(int aPipeNum,int aIdx,uint256 a,uint256 b);
void LockList_CompareLogOps(int aPipeNum,int aIdx,uint256 a,uint256 b);
void UnLockList_CompareLogOps(int aPipeNum,int aIdx,uint256 a,uint256 b);
void LLink_CompareLogOps(int aIdx,uint256 a,uint256 b,TCycleCount aCount,int aLockAdd = 0);
TCycleCount CompareLogOps_GetLock(int aPipeNum,int aIdx,uint256 a,uint256 b);
inline uint256 Get_CompareLogOps(uint32 aIdx,uint256 a,uint256 b);
  void CheckList_MemOps(int aPipeNum,int aIdx);
void LockList_MemOps(int aPipeNum,int aIdx);
void UnLockList_MemOps(int aPipeNum,int aIdx);
void LLink_MemOps(int aIdx,TCycleCount aCount,int aLockAdd = 0);
TCycleCount MemOps_GetLock(int aPipeNum,int aIdx);
inline uint32 Get_MemOps(uint32 aIdx);
  void CheckList_AccountsData(int aPipeNum,int aIdx);
void LockList_AccountsData(int aPipeNum,int aIdx);
void UnLockList_AccountsData(int aPipeNum,int aIdx);
void LLink_AccountsData(int aIdx,TCycleCount aCount,int aLockAdd = 0);
TCycleCount AccountsData_GetLock(int aPipeNum,int aIdx);
inline uint256 Get_AccountsData(uint32 aIdx);
  void CheckList_BlockChain(int aPipeNum,int aIdx);
void LockList_BlockChain(int aPipeNum,int aIdx);
void UnLockList_BlockChain(int aPipeNum,int aIdx);
void LLink_BlockChain(int aIdx,TCycleCount aCount,int aLockAdd = 0);
TCycleCount BlockChain_GetLock(int aPipeNum,int aIdx);
inline uint256 Get_BlockChain(uint32 aIdx);
  void CheckList_SystemOps(int aPipeNum,int aIdx);
void LockList_SystemOps(int aPipeNum,int aIdx);
void UnLockList_SystemOps(int aPipeNum,int aIdx);
void LLink_SystemOps(int aIdx,TCycleCount aCount,int aLockAdd = 0);
TCycleCount SystemOps_GetLock(int aPipeNum,int aIdx);
inline uint256 Get_SystemOps(uint32 aIdx);
inline int CheckNull_ArithmOps(uint32 aIdx);
inline int CheckNull_CompareLogOps(uint32 aIdx);
inline int CheckNull_MemOps(uint32 aIdx);
inline int CheckNull_AccountsData(uint32 aIdx);
inline int CheckNull_BlockChain(uint32 aIdx);
inline int CheckNull_SystemOps(uint32 aIdx);
  TPipeLine<TMainInst,0> MainPipe;
  virtual int SetReg(int rnum,int anum,char* val);
  virtual int GetReg(int rnum,int anum,char* val);
  virtual int SetFifo(int fifo_num,char* data,int size);
  virtual int GetFifo(int fifo_num,char* data,int& size);
  virtual int SetMem(void *mem,int busnum,int addr,int size);
  virtual int GetMem(void *mem,int busnum,int addr,int size);
  int IsMemInRange(int addr,int size,int busnum);
  int FillMem(uint32 aVal,int busnum,int addr,int size);
  int GetCellSize(int busnum,int addr);
inline uint256 GetExp(uint256 a,uint256 b);
inline uint256 Pop();
inline void Push(uint256 val);
inline uint256 SignExtend(uint256 a,uint256 b);
inline uint256 ByteFromWord(uint256 a,uint256 b);
inline uint256 GetModule(uint256 a,uint256 mod);
inline uint256 GetModuleS(uint256 a,uint256 mod);
inline uint256 StopExec();
inline uint256 DivOp(uint256 a,uint256 b);
inline uint256 CallValue();
inline uint256 CallDataCopy(uint256 a,uint256 b,uint256 c);
inline uint256 CodeCopy(uint256 a,uint256 b,uint256 c);
inline uint256 ExtCodeCopy(uint256 a,uint256 b,uint256 c,uint256 d);
inline uint256 GetBalance(uint256 a);
inline uint256 GetInputData();
inline uint256 BlockChainHash(uint256 a);
inline uint256 CreateAccount();
inline uint256 MakeCall();
inline uint256 MakeCallCode();
inline uint256 Return();
inline uint256 DelegateCall();
  inline int Main_decode(uint32 ocode);
  inline int EVM_Main_GetInstNum(uint32 ocode);
  void update();
  void Operate();
  void ResetDevice();
  virtual const tDProcCfg* GetCfg();
  virtual int SetPc(uint32 val);
  virtual uint32 GetPc(int val);
  void ClearMem();
// constructor: device initialisation routine
  EVM(char* aName = "");
  char EVM_Main_dstr[1024];
  char* EVM_Main_DisAssembly(char *bin,int& size);
  char* disasm(char *bin,int& size);
  virtual int GetInstructNum(uint64 wrd);
  virtual char* GetNameFromPtr(void* ptr);

};
#define DEV_CLASS EVM
#endif