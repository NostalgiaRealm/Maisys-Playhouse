
/* ==== FUN_0048a080 @ 0048a080 ==== 
 * signature: int __thiscall FUN_0048a080(void * this, char * param_1, short param_2, int param_3, short * param_4, undefined4 param_5)
 * body: 0048a080-0048a1c2
 */

int __thiscall
FUN_0048a080(void *this,char *param_1,short param_2,int param_3,short *param_4,undefined4 param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  short sVar5;
  undefined2 local_1a4 [176];
  short local_44 [22];
  undefined4 local_18;
  code *local_14;
  int local_10;
  short local_c;
  short local_a;
  int local_8;
  
  iVar2 = FUN_00489fb0(this,param_1,&local_18);
  if (iVar2 == -1) {
    return 0x10000;
  }
  if (8 < param_2) {
    param_2 = 8;
  }
  sVar5 = 0;
  sVar1 = param_2;
  if (0 < param_2) {
    do {
      uVar3 = FUN_004169e0(*(short **)(param_3 + sVar5 * 4),local_1a4 + sVar5 * 0x16,0);
      if ((char)uVar3 == '\0') {
        return 0x60002;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < param_2);
  }
  for (; sVar1 < 8; sVar1 = sVar1 + 1) {
    local_1a4[sVar1 * 0x16] = 0;
  }
  uVar3 = FUN_004169e0(param_4,local_44,0);
  if ((char)uVar3 != '\0') {
    if (local_14 == (code *)0x0) {
      pcVar4 = (code *)FUN_0048b580(local_10,(int)local_c,(int)local_a,&local_8);
      iVar2 = (*pcVar4)(local_8,param_2,local_1a4,local_44,param_5);
      DAT_004e34cc = iVar2;
    }
    else {
      iVar2 = (*local_14)(param_2,local_1a4,local_44,param_5);
    }
    if (iVar2 == 0) {
      FUN_004166b0(local_44,param_4);
    }
    return iVar2;
  }
  return 0x60002;
}


