
/* ==== FUN_11018eb0 @ 11018eb0 ==== 
 * signature: undefined4 __cdecl FUN_11018eb0(undefined4 * param_1, int param_2)
 * body: 11018eb0-11019044
 */

undefined4 __cdecl FUN_11018eb0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  short *psVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  uint in_EAX;
  undefined3 extraout_var;
  DWORD DVar6;
  undefined2 extraout_var_02;
  undefined4 uVar7;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar8;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x20) != 0)) {
    puVar1 = (uint *)(param_2 + 0xc);
    cVar5 = FUN_110062b0(puVar1,'\x01');
    in_EAX = CONCAT31(extraout_var,cVar5);
    if (cVar5 != '\0') {
      DVar6 = timeGetTime();
      in_EAX = (DVar6 * 6) / 100;
      if (*(uint *)(param_2 + 0x4a) <= in_EAX) {
        if (*(int *)(param_2 + 0x20) == 0) {
          DVar6 = timeGetTime();
          uVar8 = (DVar6 * 6) / 100;
        }
        else {
          DVar6 = timeGetTime();
          uVar8 = (DVar6 * 6) / 100 + ((*(int *)(param_2 + 0x24) / 100000) * 0x3c) / 100;
        }
        FUN_11019050(param_1,param_2,'\x01','\0','\x01');
        FUN_11006270(puVar1,'\0');
        *(uint *)(param_2 + 0x4a) = uVar8;
        psVar2 = (short *)(param_2 + 0x2a);
        if ((*(byte *)(param_2 + 0x56) & 1) == 0) {
          *psVar2 = *psVar2 + 1;
        }
        else {
          *psVar2 = *psVar2 + -1;
        }
        sVar4 = *psVar2;
        in_EAX = CONCAT22(extraout_var_02,sVar4);
        if ((*(short *)(param_2 + 0x28) <= sVar4) || (sVar4 < 0)) {
          cVar5 = FUN_110062b0(puVar1,'\x03');
          if (cVar5 == '\0') {
            FUN_11006290(puVar1,'\x01');
            uVar7 = FUN_11019400(0x1f6,param_1);
            return CONCAT31((int3)((uint)uVar7 >> 8),1);
          }
          cVar5 = FUN_110062b0(puVar1,'\x06');
          if (cVar5 == '\0') {
            cVar5 = FUN_110062b0(puVar1,'\v');
            if (cVar5 == '\0') {
              *psVar2 = 0;
            }
            else {
              *psVar2 = *(short *)(param_2 + 0x28) + -1;
            }
            cVar5 = FUN_110062b0(puVar1,'\x04');
            in_EAX = CONCAT31(extraout_var_01,cVar5);
            if (cVar5 == '\0') {
              uVar7 = FUN_11019310(param_1,param_2);
              return CONCAT31((int3)((uint)uVar7 >> 8),1);
            }
          }
          else {
            if (*(short *)(param_2 + 0x28) < 2) {
              *psVar2 = 0;
            }
            else if ((*(byte *)(param_2 + 0x56) & 1) == 0) {
              *psVar2 = *psVar2 + -2;
            }
            else {
              *psVar2 = *psVar2 + 2;
            }
            bVar3 = *(byte *)(param_2 + 0x56);
            in_EAX = CONCAT31(extraout_var_00,bVar3);
            *(byte *)(param_2 + 0x56) = (~bVar3 & 1 ^ bVar3) & 1 ^ bVar3;
          }
        }
      }
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


