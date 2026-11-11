
/* ==== __break @ 004298fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004298fe-004298fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


