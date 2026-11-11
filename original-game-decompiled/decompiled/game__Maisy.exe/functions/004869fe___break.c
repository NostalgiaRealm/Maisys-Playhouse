
/* ==== __break @ 004869fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004869fe-004869fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


