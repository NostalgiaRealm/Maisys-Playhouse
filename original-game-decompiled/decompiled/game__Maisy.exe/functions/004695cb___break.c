
/* ==== __break @ 004695cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695cb-004695cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


