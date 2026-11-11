
/* ==== FUN_1100b1c0 @ 1100b1c0 ==== 
 * signature: undefined __cdecl FUN_1100b1c0(undefined4 * param_1)
 * body: 1100b1c0-1100b258
 */

void __cdecl FUN_1100b1c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  char local_100 [256];
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x84);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x4e2;
    puVar1[3] = 1;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 1;
    puVar1[7] = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    *(undefined4 *)((int)puVar1 + 0x22) = 0;
    *(undefined2 *)((int)puVar1 + 0x4e) = 0;
    *(undefined4 *)((int)puVar1 + 0x52) = 0;
    puVar1[0x14] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    pcVar2 = local_100;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    FUN_11011610(param_1,0x4e2,2,local_100);
    pcVar2 = FUN_11027da0(local_100);
    puVar1[0x1f] = pcVar2;
  }
  return;
}


