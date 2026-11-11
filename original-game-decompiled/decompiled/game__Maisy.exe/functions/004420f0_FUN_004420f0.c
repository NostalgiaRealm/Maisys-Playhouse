
/* ==== FUN_004420f0 @ 004420f0 ==== 
 * signature: long __thiscall FUN_004420f0(void * this, uint param_1, uint param_2, long param_3)
 * body: 004420f0-004421bd
 */

long __thiscall FUN_004420f0(void *this,uint param_1,uint param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  
  cVar4 = '\0';
  if ((((param_1 < 0x201) || (0x203 < param_1)) ||
      ((*(void **)((int)this + 0x3c) != (void *)0x0 &&
       (cVar1 = FUN_004402b0(*(void **)((int)this + 0x3c)), cVar1 != '\0')))) &&
     ((*(int *)((int)this + 0x3c) != 0 &&
      (iVar2 = FUN_0043fd60(*(int *)((int)this + 0x3c)), iVar2 != 0)))) {
    FUN_0043fd60(*(int *)((int)this + 0x3c));
    iVar2 = FUN_0048d45c();
    cVar4 = '\x01' - (iVar2 == 0);
  }
  bVar5 = cVar4 == '\0';
  if (param_1 == 0x200) {
    bVar5 = true;
  }
  else if (param_1 == 0x202) {
    FUN_004296b0((void *)0x0);
    FUN_00410f30((int)DAT_004da390);
    FUN_00410ca0(DAT_004da390,0x28);
  }
  if (!bVar5) {
    return 0;
  }
  lVar3 = CWnd::WindowProc(this,param_1,param_2,param_3);
  return lVar3;
}


