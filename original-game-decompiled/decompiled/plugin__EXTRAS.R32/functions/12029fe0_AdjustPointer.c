
/* ==== AdjustPointer @ 12029fe0 ==== 
 * signature: void * __cdecl AdjustPointer(void * param_1, PMD * param_2)
 * body: 12029fe0-1202a000
 * note: Library Function - Single Match  void * __cdecl AdjustPointer(void *,struct PMD const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void * __cdecl AdjustPointer(void *,struct PMD const &)
   
   Library: Visual Studio 1998 Release */

void * __cdecl AdjustPointer(void *param_1,PMD *param_2)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)(*(int *)param_2 + (int)param_1);
  iVar1 = *(int *)(param_2 + 4);
  if (-1 < iVar1) {
    pvVar2 = (void *)((int)pvVar2 +
                     iVar1 + *(int *)(*(int *)((int)param_1 + iVar1) + *(int *)(param_2 + 8)));
  }
  return pvVar2;
}


