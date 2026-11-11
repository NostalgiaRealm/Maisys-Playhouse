
/* ==== FUN_11006551 @ 11006551 ==== 
 * signature: undefined __fastcall FUN_11006551(char * param_1, char param_2)
 * body: 11006551-11006553
 */

void __fastcall FUN_11006551(char *param_1,char param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  uint in_EAX;
  byte *pbVar5;
  int unaff_EBX;
  short unaff_DI;
  undefined2 in_FS;
  int unaff_FS_OFFSET;
  int in_GS_OFFSET;
  undefined3 uVar6;
  
  *param_1 = *param_1 + param_2;
  uVar3 = (undefined1)(in_EAX | 100);
  uVar6 = (undefined3)
          (CONCAT22((short)(in_EAX >> 0x10),
                    CONCAT11((byte)(in_EAX >> 8) & *(byte *)((in_EAX | 100) * 2 + 0x11),uVar3)) >> 8
          );
  pbVar5 = (byte *)(CONCAT31(uVar6,uVar3) ^ 100);
  *param_1 = *param_1 + param_2;
  param_1[unaff_FS_OFFSET] = param_1[unaff_FS_OFFSET] + param_2;
  param_1[unaff_FS_OFFSET] = param_1[unaff_FS_OFFSET] + param_2;
  pcVar1 = (char *)segment(in_FS,(short)(char *)(unaff_EBX + -1) + unaff_DI);
  *pcVar1 = *pcVar1 + param_2;
  *(char *)(unaff_FS_OFFSET + -0x33eeff9c) = *(char *)(unaff_FS_OFFSET + -0x33eeff9c) + param_2;
  *(char *)(in_GS_OFFSET + -0x33eeff9c) = *(char *)(in_GS_OFFSET + -0x33eeff9c) + param_2 + -1;
  cRamcc110064 = cRamcc110064 + (char)pbVar5;
  *pbVar5 = *pbVar5 | 100;
  cVar4 = (char)pbVar5 + *(char *)(unaff_EBX + -1);
  pbVar5 = (byte *)CONCAT31(uVar6,cVar4);
  *pbVar5 = *pbVar5 | 100;
  pbVar5 = (byte *)CONCAT31(uVar6,cVar4 + '\b');
  *pbVar5 = *pbVar5 | 100;
  *pbVar5 = *pbVar5 | 100;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


