
/* ==== FUN_1200c7a0 @ 1200c7a0 ==== 
 * signature: undefined4 __cdecl FUN_1200c7a0(undefined4 * param_1, undefined4 * param_2)
 * body: 1200c7a0-1200c881
 */

undefined4 __cdecl FUN_1200c7a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  if (*(int *)((int)param_2 + 0x1a) != 0) {
    iVar1 = FUN_12015ee0(*(int *)((int)param_2 + 0x1a));
    *(int *)((int)param_1 + 0x1a) = iVar1;
    if (iVar1 == 0) {
      return 0x20001;
    }
    FUN_12003350(*(void **)((int)param_1 + 0x6a),iVar1);
    FUN_1200cbe0((int)param_1);
  }
  *(undefined1 *)((int)param_1 + 0x16) = *(undefined1 *)((int)param_2 + 0x16);
  *(undefined1 *)((int)param_1 + 0x17) = *(undefined1 *)((int)param_2 + 0x17);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_2 + 0x1e);
  *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)((int)param_2 + 0x22);
  *(undefined2 *)((int)param_1 + 0x26) = *(undefined2 *)((int)param_2 + 0x26);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)((int)param_2 + 0x32);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)((int)param_2 + 0x3a);
  puVar2 = param_2 + 0x14;
  puVar3 = param_1 + 0x14;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  return 0;
}


