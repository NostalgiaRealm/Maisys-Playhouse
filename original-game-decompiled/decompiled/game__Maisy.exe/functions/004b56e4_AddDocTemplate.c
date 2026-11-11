
/* ==== CDocManager::AddDocTemplate @ 004b56e4 ==== 
 * signature: void __thiscall AddDocTemplate(CDocManager * this, CDocTemplate * param_1)
 * body: 004b56e4-004b5765
 * note: Library Function - Single Match  public: virtual void __thiscall CDocManager::AddDocTemplate(class CDocTemplate *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocManager::AddDocTemplate(class CDocTemplate *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocManager::AddDocTemplate(CDocManager *this,CDocTemplate *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *local_8;
  
  if (param_1 == (CDocTemplate *)0x0) {
    if (DAT_004dd438 != (int *)0x0) {
      local_8 = (int *)DAT_004dd438[1];
      if (local_8 != (int *)0x0) {
        pcVar2 = *(code **)(*(int *)this + 0x14);
        do {
          piVar1 = local_8 + 2;
          local_8 = (int *)*local_8;
          (*pcVar2)(*piVar1);
        } while (local_8 != (int *)0x0);
      }
      if (DAT_004dd438 != (int *)0x0) {
        (**(code **)(*DAT_004dd438 + 4))(1);
      }
      DAT_004dd438 = (int *)0x0;
    }
    DAT_004dd430 = 0;
  }
  else {
    (**(code **)(*(int *)param_1 + 0x54))();
    FUN_004a564c(this + 4,param_1);
  }
  return;
}


