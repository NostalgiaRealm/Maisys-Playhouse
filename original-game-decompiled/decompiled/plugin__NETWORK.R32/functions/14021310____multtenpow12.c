
/* ==== ___multtenpow12 @ 14021310 ==== 
 * signature: undefined __cdecl ___multtenpow12(int * param_1, uint param_2, int param_3)
 * body: 14021310-1402138a
 * note: Library Function - Single Match  ___multtenpow12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___multtenpow12
   
   Library: Visual Studio 1998 Release */

void __cdecl ___multtenpow12(int *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  undefined *puVar4;
  uint uVar5;
  ushort local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  undefined4 local_4;
  
  puVar4 = &DAT_14028478;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      puVar4 = &DAT_140285d8;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      puVar4 = puVar4 + 0x54;
      uVar5 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar5;
      if (uVar2 != 0) {
        puVar1 = (ushort *)(puVar4 + uVar2 * 0xc);
        puVar3 = puVar1;
        if (0x7fff < *puVar1) {
          puVar3 = &local_c;
          local_c = (ushort)*(undefined4 *)puVar1;
          uStack_a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar1 >> 0x10);
          uStack_a._2_2_ = (undefined2)*(undefined4 *)(puVar1 + 2);
          uStack_6 = (undefined2)((uint)*(undefined4 *)(puVar1 + 2) >> 0x10);
          local_4 = *(undefined4 *)(puVar1 + 4);
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
        }
        FUN_14021060(param_1,(int *)puVar3);
      }
    }
  }
  return;
}


