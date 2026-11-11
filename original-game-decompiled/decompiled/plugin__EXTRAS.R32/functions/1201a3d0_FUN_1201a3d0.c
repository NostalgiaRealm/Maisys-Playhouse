
/* ==== FUN_1201a3d0 @ 1201a3d0 ==== 
 * signature: undefined __fastcall FUN_1201a3d0(undefined4 * param_1)
 * body: 1201a3d0-1201a443
 */

void __fastcall FUN_1201a3d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if (*(char *)(param_1 + 0x7d) == '\0') {
    puVar1 = (undefined4 *)param_1[3];
    while ((puVar1 != (undefined4 *)0x0 && ((uint)puVar1[1] <= *(uint *)(param_1[2] + 0x14)))) {
      local_4 = *(char *)(puVar1 + 2) + -0x70;
      local_3 = *(undefined1 *)((int)puVar1 + 9);
      local_2 = 0;
      FUN_12016430((void *)*param_1,&local_4,3);
      param_1[3] = *puVar1;
      *puVar1 = param_1[4];
      param_1[4] = puVar1;
      puVar1 = (undefined4 *)param_1[3];
    }
    if (param_1[3] == 0) {
      FUN_12004cf0((void *)param_1[1],(int *)param_1[2]);
    }
  }
  return;
}


