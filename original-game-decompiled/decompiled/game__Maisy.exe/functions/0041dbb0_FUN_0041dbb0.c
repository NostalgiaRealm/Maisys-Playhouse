
/* ==== FUN_0041dbb0 @ 0041dbb0 ==== 
 * signature: undefined __cdecl FUN_0041dbb0(int param_1, void * param_2, byte * param_3)
 * body: 0041dbb0-0041dcb2
 */

void __cdecl FUN_0041dbb0(int param_1,void *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined4 unaff_EBP;
  int *piVar2;
  undefined4 local_458 [3];
  short local_44a;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c;
  undefined1 local_6;
  char cStack_5;
  undefined3 uStack_4;
  undefined1 uStack_1;
  
  uStack_4 = (undefined3)unaff_EBP;
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  local_14 = (int)*(short *)(param_1 + 0x2e) - (int)*(short *)(param_1 + 0x2a);
  local_10 = (int)*(short *)(param_1 + 0x2c) - (int)*(short *)(param_1 + 0x28);
  FUN_0047a8c0(param_2,&local_18,local_458);
  FUN_0047a960(param_2,(int *)&local_c,(short *)&local_6,&local_24);
  piVar2 = local_c;
  local_20 = (int)CONCAT11(cStack_5,local_6);
  if (local_c != (int *)0x0) {
    local_1c = (int)*(short *)(param_1 + 0x1a);
    local_c = (int *)FUN_0047b660(param_2,param_3);
    cStack_5 = (char)local_c;
    pbVar1 = GlobalLock(*(HGLOBAL *)(param_1 + 0x1c));
    local_18 = local_14;
    if (0 < local_14) {
      do {
        if (local_44a == 8) {
          FUN_0041dcc0((char *)piVar2,pbVar1,local_10,cStack_5);
        }
        else if (local_44a == 0x10) {
          FUN_0041dd90((short *)piVar2,pbVar1,local_10,(short)local_c);
        }
        else if (local_44a == 0x20) {
          FUN_0041de70(piVar2,pbVar1,local_10,(int)local_c);
        }
        pbVar1 = pbVar1 + local_1c;
        piVar2 = (int *)((int)piVar2 + local_20);
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  GlobalUnlock(*(HGLOBAL *)(param_1 + 0x1c));
  return;
}


