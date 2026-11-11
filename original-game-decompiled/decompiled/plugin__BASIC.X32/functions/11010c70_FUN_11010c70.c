
/* ==== FUN_11010c70 @ 11010c70 ==== 
 * signature: undefined __stdcall FUN_11010c70(undefined4 * param_1, undefined4 * param_2)
 * body: 11010c70-11010c8e
 */

void FUN_11010c70(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  switch(*(undefined2 *)param_1) {
  case 1:
    uVar1 = *(uint *)((int)param_1 + 2);
    *(uint *)((int)param_2 + 2) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    break;
  default:
    puVar3 = param_1;
    puVar4 = param_2;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
    break;
  case 0xd:
    *(ushort *)((int)param_2 + 2) =
         CONCAT11((char)*(undefined2 *)((int)param_1 + 2),
                  (char)((ushort)*(undefined2 *)((int)param_1 + 2) >> 8));
    param_2[1] = param_1[1];
    break;
  case 0xf:
    uVar1 = *(uint *)((int)param_1 + 2);
    *(uint *)((int)param_2 + 2) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    break;
  case 0x10:
    *(ushort *)((int)param_2 + 2) =
         CONCAT11((char)*(undefined2 *)(param_1 + 1),
                  (char)((ushort)*(undefined2 *)(param_1 + 1) >> 8));
    *(ushort *)(param_2 + 1) =
         CONCAT11((char)*(undefined2 *)((int)param_1 + 2),
                  (char)((ushort)*(undefined2 *)((int)param_1 + 2) >> 8));
    break;
  case 0x11:
    uVar1 = *(uint *)((int)param_1 + 2);
    *(uint *)((int)param_2 + 2) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)param_1 + 6);
    *(uint *)((int)param_2 + 6) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    break;
  case 0x1a:
    *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)param_1 + 2);
    break;
  case 0x1c:
    *(undefined4 *)((int)param_2 + 2) = 0;
    uVar1 = *(uint *)((int)param_1 + 6);
    *(uint *)((int)param_2 + 6) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    *(undefined4 *)((int)param_2 + 10) = *(undefined4 *)((int)param_1 + 10);
    break;
  case 0x1d:
    uVar1 = *(uint *)((int)param_1 + 2);
    *(uint *)((int)param_2 + 2) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)param_1 + 6);
    *(uint *)((int)param_2 + 6) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    break;
  case 0x1e:
    uVar1 = *(uint *)((int)param_1 + 2);
    *(uint *)((int)param_2 + 2) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)param_1 + 6);
    *(uint *)((int)param_2 + 6) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    uVar1 = *(uint *)((int)param_1 + 10);
    *(uint *)((int)param_2 + 10) =
         (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
  }
  *(ushort *)param_2 =
       CONCAT11((char)*(undefined2 *)param_1,(char)((ushort)*(undefined2 *)param_1 >> 8));
  return;
}


