
/* ==== FUN_11001b50 @ 11001b50 ==== 
 * signature: uint __cdecl FUN_11001b50(undefined4 * param_1, int param_2, int param_3)
 * body: 11001b50-11001dbe
 */

uint __cdecl FUN_11001b50(undefined4 *param_1,int param_2,int param_3)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  uint in_EAX;
  int iVar6;
  uint3 extraout_var;
  byte bVar7;
  byte local_86;
  undefined4 local_84 [3];
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  undefined4 local_54 [3];
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  undefined4 local_24 [3];
  int local_16;
  
  if (*(char *)(param_3 + 0xe) != '\0') {
    iVar3 = *(int *)(param_2 + 0xc);
    iVar6 = FUN_1100fc30((int)param_1);
    bVar2 = *(byte *)(param_3 + 0x66);
    in_EAX = CONCAT31((int3)((uint)iVar6 >> 8),bVar2);
    if ((iVar6 == iVar3) && (in_EAX = FUN_1100fb90(param_1,iVar6,local_24), local_16 != 0)) {
      FUN_1100fc50(param_1,iVar6,local_84);
      psVar1 = (short *)(param_3 + 0xc);
      FUN_1100fc50(param_1,local_16,local_54);
      bVar7 = local_86 & 0xf0;
      cVar5 = FUN_11006310(psVar1,'\x03');
      if (cVar5 != '\0') {
        cVar5 = FUN_11006310(psVar1,'\a');
        sVar4 = local_72;
        if (cVar5 != '\0') {
          sVar4 = local_76;
        }
        bVar7 = bVar7 ^ sVar4 <= local_46;
      }
      cVar5 = FUN_11006310(psVar1,'\x04');
      if (cVar5 != '\0') {
        cVar5 = FUN_11006310(psVar1,'\a');
        if (cVar5 == '\0') {
          sVar4 = local_76 - local_42;
          local_72 = local_76;
        }
        else {
          sVar4 = local_72 - local_42;
        }
        bVar7 = bVar7 ^ (SBORROW2(local_72,local_42) == sVar4 < 0) * '\x02';
      }
      cVar5 = FUN_11006310(psVar1,'\x05');
      if (cVar5 != '\0') {
        cVar5 = FUN_11006310(psVar1,'\a');
        sVar4 = local_74;
        if (cVar5 != '\0') {
          sVar4 = local_78;
        }
        bVar7 = bVar7 ^ (sVar4 <= local_48) << 2;
      }
      cVar5 = FUN_11006310(psVar1,'\x06');
      if (cVar5 != '\0') {
        cVar5 = FUN_11006310(psVar1,'\a');
        if (cVar5 == '\0') {
          sVar4 = local_78 - local_44;
          local_74 = local_78;
        }
        else {
          sVar4 = local_74 - local_44;
        }
        bVar7 = bVar7 ^ (SBORROW2(local_74,local_44) == sVar4 < 0) << 3;
      }
      cVar5 = FUN_11006310(psVar1,'\t');
      if (cVar5 != '\0') {
        if (((bVar7 & 1) != 0) && (*(short *)(param_3 + 0x6a) <= local_76)) {
          bVar7 = bVar7 & 0xfe;
        }
        if (((bVar7 & 2) != 0) && (local_76 <= *(short *)(param_3 + 0x6a))) {
          bVar7 = bVar7 & 0xfd;
        }
        if (((bVar7 & 4) != 0) && (*(short *)(param_3 + 0x68) <= local_78)) {
          bVar7 = bVar7 & 0xfb;
        }
        if (((bVar7 & 8) != 0) && (local_78 <= *(short *)(param_3 + 0x68))) {
          bVar7 = bVar7 & 0xf7;
        }
        *(short *)(param_3 + 0x68) = local_78;
        *(short *)(param_3 + 0x6a) = local_76;
      }
      cVar5 = FUN_11006310(psVar1,'\b');
      if (cVar5 == '\0') {
        in_EAX = (uint)extraout_var << 8;
        if ((bVar7 & 0xf) != 0) {
          in_EAX = CONCAT31(extraout_var,1);
        }
      }
      else {
        if ((((((bVar7 & 1) == 0) || (((bVar7 ^ bVar2) & 1) == 0)) &&
             (((bVar7 & 2) == 0 || (((bVar7 ^ bVar2) & 2) == 0)))) &&
            (((bVar7 & 4) == 0 || (((bVar7 ^ bVar2) & 4) == 0)))) &&
           (((bVar7 & 8) == 0 || (((bVar7 ^ bVar2) & 8) == 0)))) {
          in_EAX = (uint)extraout_var << 8;
        }
        else {
          in_EAX = CONCAT31(extraout_var,1);
        }
        *(byte *)(param_3 + 0x66) = bVar7;
      }
      if ((char)in_EAX != '\0') {
        in_EAX = FUN_11001e10(param_1,param_3);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


