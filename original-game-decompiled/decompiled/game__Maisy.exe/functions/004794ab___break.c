
/* ==== __break @ 004794ab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794ab-004794ab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


