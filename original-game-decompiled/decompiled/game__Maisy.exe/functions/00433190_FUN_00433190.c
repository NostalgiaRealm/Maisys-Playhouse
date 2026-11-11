
/* ==== FUN_00433190 @ 00433190 ==== 
 * signature: undefined4 __cdecl FUN_00433190(short param_1, int param_2, short * param_3)
 * body: 00433190-004332bb
 */

undefined4 __cdecl FUN_00433190(short param_1,int param_2,short *param_3)

{
  char cVar1;
  HLOCAL hMem;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char local_108 [258];
  short local_6;
  
  hMem = FUN_0043f6f0(1);
  puVar2 = LocalLock(hMem);
  *puVar2 = 0;
  LocalUnlock(hMem);
  _sprintf(local_108,s_ArgCount____d_004dacf8,(int)param_1);
  FUN_004332c0(hMem,local_108);
  local_6 = 0;
  if (0 < param_1) {
    do {
      iVar6 = (int)local_6;
      _sprintf(local_108,s_Arg___d____004dace8,iVar6 + 1);
      FUN_004332c0(hMem,local_108);
      iVar6 = FUN_00456560((short *)(iVar6 * 0x2c + param_2),local_108,0xff,(int *)0x0);
      if (iVar6 != 0) {
        uVar4 = 0xffffffff;
        pcVar3 = s_error_004dace0;
        do {
          pcVar7 = pcVar3;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar7 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar7;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar3 = pcVar7 + -uVar4;
        pcVar7 = local_108;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar7 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      FUN_004332c0(hMem,local_108);
      local_6 = local_6 + 1;
    } while (local_6 < param_1);
  }
  pcVar3 = LocalLock(hMem);
  FUN_00454fa0(param_3,pcVar3);
  LocalUnlock(hMem);
  FUN_0043f720(hMem);
  return 0;
}


