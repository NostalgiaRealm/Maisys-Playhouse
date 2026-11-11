
/* ==== FUN_004490d0 @ 004490d0 ==== 
 * signature: SIZE_T __thiscall FUN_004490d0(void * this, int param_1, int param_2)
 * body: 004490d0-004491c0
 */

SIZE_T __thiscall FUN_004490d0(void *this,int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  SIZE_T SVar3;
  int iVar4;
  SIZE_T SVar5;
  
  SVar5 = 0;
  if ((0xe < param_2) && (*(short *)((int)this + 0x24) <= param_2)) {
    cVar1 = (**(code **)(*(int *)this + 0xe8))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*(int *)this + 0x18))();
      if (cVar1 == '\0') {
        piVar2 = (int *)(**(code **)(*(int *)this + 0x10))();
        if ((*(int *)((int)this + 0x182) == 0) && (piVar2 != (int *)0x0)) {
          cVar1 = (**(code **)(*piVar2 + 0x104))();
          if (cVar1 == '\0') {
            FUN_0043c620(0,s_Immenent_Text_corruption__Write_d_004dba28);
          }
        }
        if (*(HGLOBAL *)((int)this + 0x152) != (HGLOBAL)0x0) {
          SVar5 = GlobalSize(*(HGLOBAL *)((int)this + 0x152));
          FUN_0043f7a0(*(HGLOBAL *)((int)this + 0x152));
          *(undefined4 *)((int)this + 0x152) = 0;
          *(undefined1 *)((int)this + 0x17c) = 1;
        }
        if (*(HGLOBAL *)((int)this + 0x156) != (HGLOBAL)0x0) {
          SVar3 = GlobalSize(*(HGLOBAL *)((int)this + 0x156));
          SVar5 = SVar5 + SVar3;
          FUN_0043f7a0(*(HGLOBAL *)((int)this + 0x156));
          *(undefined4 *)((int)this + 0x156) = 0;
          *(undefined1 *)((int)this + 0x17c) = 1;
        }
      }
    }
  }
  if ((int)SVar5 < param_1) {
    iVar4 = FUN_0041e220(this,param_1,param_2);
    SVar5 = SVar5 + iVar4;
  }
  return SVar5;
}


