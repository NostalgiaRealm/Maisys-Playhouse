
/* ==== __break @ 004695ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695ad-004695ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


